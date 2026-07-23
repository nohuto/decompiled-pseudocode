/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x1404F34A0
 * Callers:
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     PsGetProcessSessionId @ 0x1400EFD94 (PsGetProcessSessionId.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeQueryUserSidToken @ 0x140438B84 (SeQueryUserSidToken.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     PsAcquireProcessExitSynchronization @ 0x1404F37D4 (PsAcquireProcessExitSynchronization.c)
 *     MmGetSessionCreateTime @ 0x140508F04 (MmGetSessionCreateTime.c)
 *     EtwpQueryProcessCommandLine @ 0x14050C998 (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x14050CB2C (EtwpQueryProcessOtherInfo.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     EtwpQueryTokenPackageInfo @ 0x14050D82C (EtwpQueryTokenPackageInfo.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryInfo(
        ULONG_PTR BugCheckParameter1,
        char *a2,
        SIZE_T Length,
        char a4,
        unsigned int *a5)
{
  SIZE_T v6; // rdi
  const void **v9; // r12
  PACCESS_TOKEN v10; // r15
  int UserSidToken; // ebx
  unsigned __int64 v12; // rtt
  int v13; // edx
  size_t v14; // r12
  unsigned int v15; // ebx
  size_t v16; // r8
  char *v17; // rdi
  unsigned __int16 *v18; // rbx
  char *v19; // rbx
  char *v20; // rbx
  char *v21; // rbx
  int v23; // [rsp+28h] [rbp-2B0h] BYREF
  int v24; // [rsp+2Ch] [rbp-2ACh]
  size_t Size; // [rsp+30h] [rbp-2A8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-2A0h] BYREF
  PVOID P; // [rsp+40h] [rbp-298h]
  int v28; // [rsp+48h] [rbp-290h]
  const void **v29; // [rsp+50h] [rbp-288h]
  unsigned int *v30; // [rsp+58h] [rbp-280h]
  PACCESS_TOKEN v31; // [rsp+60h] [rbp-278h]
  ULONG_PTR v32; // [rsp+68h] [rbp-270h]
  size_t PackageSize; // [rsp+70h] [rbp-268h] BYREF
  size_t v34; // [rsp+78h] [rbp-260h]
  char v35[256]; // [rsp+80h] [rbp-258h] BYREF
  char v36[144]; // [rsp+180h] [rbp-158h] BYREF
  _BYTE v37[48]; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-98h] BYREF

  v6 = (unsigned int)Length;
  v32 = BugCheckParameter1;
  v30 = a5;
  v26 = 0LL;
  P = 0LL;
  v23 = 0;
  v24 = 0;
  v9 = *(const void ***)(BugCheckParameter1 + 1120);
  v29 = v9;
  v10 = PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
  v31 = v10;
  v28 = 0;
  EtwpQueryTokenPackageInfo(v10, &PackageSize);
  UserSidToken = SeQueryUserSidToken((__int64)v10, Src, 0x44u, (ULONG *)&Size);
  if ( UserSidToken >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization(BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v37);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, &v23);
      EtwpQueryProcessCommandLine(BugCheckParameter1, &v26);
      KiUnstackDetachProcess((struct _KTHREAD *)v37, 0);
      _m_prefetchw((const void *)(BugCheckParameter1 + 736));
      v12 = *(_QWORD *)(BugCheckParameter1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter1 + 736), v12 - 2, v12) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
    }
    v13 = PackageSize + v34 + *(unsigned __int16 *)v9 + (unsigned __int16)v26;
    v14 = (unsigned int)Size;
    v15 = v13 + Size + 100;
    *v30 = v15;
    if ( a4 )
      ProbeForWrite(a2, v6, 4u);
    v16 = (unsigned int)v6;
    if ( v15 < (unsigned int)v6 )
      v16 = v15;
    memset(a2, 0, v16);
    if ( (unsigned int)v6 < 0x60 )
    {
      UserSidToken = -1073741820;
    }
    else
    {
      *(_DWORD *)a2 = 96;
      *((_DWORD *)a2 + 1) = *(_DWORD *)(BugCheckParameter1 + 744);
      *((_QWORD *)a2 + 1) = *(_QWORD *)(BugCheckParameter1 + 1856) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
      *((_QWORD *)a2 + 2) = *(_QWORD *)(BugCheckParameter1 + 776);
      *((_QWORD *)a2 + 3) = *(_QWORD *)(BugCheckParameter1 + 1864);
      *((_QWORD *)a2 + 4) = *(_QWORD *)(BugCheckParameter1 + 1872);
      *((_QWORD *)a2 + 5) = *(_QWORD *)(BugCheckParameter1 + 1856);
      *((_QWORD *)a2 + 6) = MmGetSessionCreateTime(BugCheckParameter1);
      *((_DWORD *)a2 + 14) = PsGetProcessSessionId((struct _KPROCESS *)BugCheckParameter1);
      *((_DWORD *)a2 + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)a2 + 16) = v23;
      *((_DWORD *)a2 + 17) = v24;
      if ( (unsigned int)v6 >= v15 )
      {
        *((_DWORD *)a2 + 18) = 96;
        memmove(a2 + 96, Src, v14);
        v17 = &a2[v14 + 96];
        *((_DWORD *)a2 + 19) = v14 + 96;
        v18 = (unsigned __int16 *)v29;
        memmove(v17, v29[1], *(unsigned __int16 *)v29);
        v19 = &v17[*v18 + 2];
        *((_DWORD *)a2 + 20) = (_DWORD)v19 - (_DWORD)a2;
        memmove(v19, v35, PackageSize);
        v20 = &v19[PackageSize];
        *((_DWORD *)a2 + 21) = (_DWORD)v20 - (_DWORD)a2;
        memmove(v20, v36, v34);
        v21 = &v20[v34];
        *((_DWORD *)a2 + 22) = (_DWORD)v21 - (_DWORD)a2;
        memmove(v21, P, (unsigned __int16)v26);
        UserSidToken = 0;
      }
      else
      {
        UserSidToken = -2147483643;
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v10 )
    ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 856), (unsigned __int64)v10);
  return (unsigned int)UserSidToken;
}
