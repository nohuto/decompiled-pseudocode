/*
 * XREFs of HvApplyLogFile @ 0x1406121E0
 * Callers:
 *     HvpRecoverData @ 0x14061136C (HvpRecoverData.c)
 * Callees:
 *     SymCryptMarvin32 @ 0x140082910 (SymCryptMarvin32.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvpIsMetadataArrayCoherent @ 0x1401B73CC (HvpIsMetadataArrayCoherent.c)
 *     CmpTraceHiveMountLogEntryApplied @ 0x1405FBE58 (CmpTraceHiveMountLogEntryApplied.c)
 *     HvpLogEntryCheckHeaderChecksum @ 0x1406030E0 (HvpLogEntryCheckHeaderChecksum.c)
 *     HvpRecoverDataReadRoutine @ 0x1406115C8 (HvpRecoverDataReadRoutine.c)
 *     HvpApplyLogEntry @ 0x1406126C4 (HvpApplyLogEntry.c)
 *     HvpUpdateRecoveryVector @ 0x140612A9C (HvpUpdateRecoveryVector.c)
 */

__int64 __fastcall HvApplyLogFile(
        ULONG_PTR a1,
        int a2,
        __int64 a3,
        __int64 a4,
        char **a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8)
{
  int v8; // r13d
  char **v9; // r15
  ULONG_PTR v11; // rdi
  unsigned int v12; // r14d
  char v13; // r12
  int Routine; // ecx
  __int128 v15; // xmm1
  unsigned __int64 v16; // rax
  int v17; // ebx
  unsigned int v18; // r15d
  unsigned __int8 *v19; // rdi
  __int64 v20; // rcx
  int v22; // [rsp+28h] [rbp-81h]
  __int64 v23; // [rsp+38h] [rbp-71h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-69h]
  char *v25; // [rsp+48h] [rbp-61h] BYREF
  int v26[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v27; // [rsp+58h] [rbp-51h]
  __int64 v28; // [rsp+60h] [rbp-49h]
  _DWORD *v29; // [rsp+68h] [rbp-41h]
  _DWORD *v30; // [rsp+70h] [rbp-39h]
  __int128 v31; // [rsp+78h] [rbp-31h] BYREF
  __int128 v32; // [rsp+88h] [rbp-21h]
  __int64 v33; // [rsp+98h] [rbp-11h]
  __int64 v34; // [rsp+A0h] [rbp-9h] BYREF

  v8 = 0;
  v9 = a5;
  v27 = a6;
  v11 = a1;
  v12 = 512;
  v29 = a7;
  v13 = 0;
  v30 = a8;
  BugCheckParameter2 = a1;
  v28 = (__int64)a5;
  while ( 1 )
  {
    Routine = HvpRecoverDataReadRoutine(v11, v9, v12, 0x28u, &v25);
    if ( Routine < 0 )
      break;
    v15 = *((_OWORD *)v25 + 1);
    v31 = *(_OWORD *)v25;
    v33 = *((_QWORD *)v25 + 4);
    v32 = v15;
    if ( (_DWORD)v31 != 1162638920 )
      goto LABEL_25;
    if ( DWORD1(v31) <= 0x28 )
      goto LABEL_25;
    if ( DWORD1(v31) + v12 > 0xFFFFFFFF )
      goto LABEL_25;
    if ( !(_DWORD)v32 )
      goto LABEL_25;
    if ( (unsigned int)v32 > 0x7FFFE000 )
      goto LABEL_25;
    if ( (v32 & 0xFFF) != 0 )
      goto LABEL_25;
    if ( !DWORD1(v32) )
      goto LABEL_25;
    v16 = 8 * DWORD1(v32) + 40;
    if ( v16 > 0xFFFFFFFF || DWORD1(v31) < v16 || !HvpLogEntryCheckHeaderChecksum((__int64)&v31) || HIDWORD(v31) != a2 )
      goto LABEL_25;
    v17 = DWORD1(v31);
    Routine = HvpRecoverDataReadRoutine(v11, v9, v12, DWORD1(v31), (char **)v26);
    if ( Routine < 0 )
      break;
    v18 = DWORD1(v32);
    v19 = (unsigned __int8 *)(*(_QWORD *)v26 + 40LL);
    if ( !HvpIsMetadataArrayCoherent((unsigned int *)&v31, *(_QWORD *)v26 + 40LL, DWORD1(v32)) )
      goto LABEL_25;
    SymCryptMarvin32(v20, v19, (unsigned int)(v17 - 40), &v34);
    if ( *((_QWORD *)&v32 + 1) != v34 )
      goto LABEL_25;
    Routine = HvpApplyLogEntry(BugCheckParameter2, v22, (__int64)&v23);
    if ( Routine < 0 )
      break;
    v13 = 1;
    ++v8;
    CmpTraceHiveMountLogEntryApplied(v17, v23);
    if ( v27 )
      HvpUpdateRecoveryVector(v19, v18, v27);
    v11 = BugCheckParameter2;
    ++a2;
    v9 = (char **)v28;
    v12 += v17;
    if ( !v12 )
    {
      Routine = -2147483622;
      break;
    }
  }
  if ( Routine != -1073741801 && Routine != -1073741670 && Routine != -1073741492 )
  {
LABEL_25:
    Routine = v13 != 0 ? 0x40000009 : 0;
    *v29 = a2;
    *v30 = v8;
  }
  return (unsigned int)Routine;
}
