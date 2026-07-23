/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x1404A32FC
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x14003AF8C (PsGetProcessSessionId.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     EtwpQueryTokenPackageInfo @ 0x14044A220 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14044A2DC (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x14044A314 (EtwpQueryProcessCommandLine.c)
 *     SeQueryUserSidToken @ 0x140479360 (SeQueryUserSidToken.c)
 *     MmGetSessionCreateTime @ 0x1404A3628 (MmGetSessionCreateTime.c)
 *     PsAcquireProcessExitSynchronization @ 0x1404A3654 (PsAcquireProcessExitSynchronization.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryInfo(
        __int64 BugCheckParameter1,
        char *a2,
        SIZE_T Length,
        char a4,
        unsigned int *a5)
{
  SIZE_T v5; // rdi
  unsigned __int16 v8; // r13
  void *v9; // r15
  PACCESS_TOKEN v10; // r12
  int v11; // ebx
  unsigned int v12; // ebx
  size_t v13; // r8
  __int64 v14; // rbx
  char *v15; // rdi
  unsigned __int16 *v16; // rbx
  char *v17; // rbx
  char *v18; // rbx
  char *v19; // rbx
  ULONG Size; // [rsp+24h] [rbp-2B4h] BYREF
  int Size_4; // [rsp+28h] [rbp-2B0h]
  int v24; // [rsp+30h] [rbp-2A8h] BYREF
  int v25; // [rsp+34h] [rbp-2A4h]
  const void **v26; // [rsp+38h] [rbp-2A0h]
  __int64 v27; // [rsp+40h] [rbp-298h] BYREF
  void *v28; // [rsp+48h] [rbp-290h]
  unsigned int *v29; // [rsp+50h] [rbp-288h]
  PACCESS_TOKEN v30; // [rsp+58h] [rbp-280h]
  __int64 v31; // [rsp+60h] [rbp-278h]
  size_t PackageSize; // [rsp+70h] [rbp-268h] BYREF
  size_t v33; // [rsp+78h] [rbp-260h]
  char v34[256]; // [rsp+80h] [rbp-258h] BYREF
  char v35[144]; // [rsp+180h] [rbp-158h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v36; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-98h] BYREF

  v5 = (unsigned int)Length;
  v31 = BugCheckParameter1;
  v29 = a5;
  v8 = 0;
  v27 = 0LL;
  v9 = 0LL;
  v28 = 0LL;
  v24 = 0;
  v25 = 0;
  v26 = *(const void ***)(BugCheckParameter1 + 1128);
  v10 = PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
  v30 = v10;
  Size = 0;
  EtwpQueryTokenPackageInfo(v10, (WCHAR *)&PackageSize, &Size);
  v11 = SeQueryUserSidToken((__int64)v10, Src, 0x44u, &Size);
  if ( v11 >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization(BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v36);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, (__int64)&v24);
      EtwpQueryProcessCommandLine(BugCheckParameter1, (__int64)&v27);
      KiUnstackDetachProcess(&v36, 0LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
      v9 = v28;
      v8 = v27;
    }
    v12 = PackageSize + v33 + *(unsigned __int16 *)v26 + v8 + Size + 100;
    *v29 = v12;
    if ( a4 )
      ProbeForWrite(a2, v5, 4u);
    v13 = (unsigned int)v5;
    if ( v12 < (unsigned int)v5 )
      v13 = v12;
    memset(a2, 0, v13);
    if ( (unsigned int)v5 < 0x60 )
    {
      v11 = -1073741820;
      Size_4 = -1073741820;
    }
    else
    {
      *(_DWORD *)a2 = 96;
      *((_DWORD *)a2 + 1) = *(_DWORD *)(BugCheckParameter1 + 744);
      *((_QWORD *)a2 + 1) = *(_QWORD *)(BugCheckParameter1 + 1840) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
      *((_QWORD *)a2 + 2) = *(_QWORD *)(BugCheckParameter1 + 776);
      *((_QWORD *)a2 + 3) = *(_QWORD *)(BugCheckParameter1 + 1848);
      *((_QWORD *)a2 + 4) = *(_QWORD *)(BugCheckParameter1 + 1856);
      *((_QWORD *)a2 + 5) = *(_QWORD *)(BugCheckParameter1 + 1840);
      *((_QWORD *)a2 + 6) = MmGetSessionCreateTime(BugCheckParameter1);
      *((_DWORD *)a2 + 14) = PsGetProcessSessionId(BugCheckParameter1);
      *((_DWORD *)a2 + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)a2 + 16) = v24;
      *((_DWORD *)a2 + 17) = v25;
      if ( (unsigned int)v5 >= v12 )
      {
        *((_DWORD *)a2 + 18) = 96;
        v14 = Size;
        memmove(a2 + 96, Src, Size);
        v15 = &a2[v14 + 96];
        *((_DWORD *)a2 + 19) = v14 + 96;
        v16 = (unsigned __int16 *)v26;
        memmove(v15, v26[1], *(unsigned __int16 *)v26);
        v17 = &v15[*v16 + 2];
        *((_DWORD *)a2 + 20) = (_DWORD)v17 - (_DWORD)a2;
        memmove(v17, v34, PackageSize);
        v18 = &v17[PackageSize];
        *((_DWORD *)a2 + 21) = (_DWORD)v18 - (_DWORD)a2;
        memmove(v18, v35, v33);
        v19 = &v18[v33];
        *((_DWORD *)a2 + 22) = (_DWORD)v19 - (_DWORD)a2;
        memmove(v19, v9, v8);
        v11 = 0;
      }
      else
      {
        v11 = -2147483643;
        Size_4 = -2147483643;
      }
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 856), (unsigned __int64)v10);
  return (unsigned int)v11;
}
