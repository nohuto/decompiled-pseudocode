/*
 * XREFs of PspSetJobRateControl @ 0x1406C4C78
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetRateControlHeaderPtr @ 0x140506F24 (PspGetRateControlHeaderPtr.c)
 *     PspFreeRateControl @ 0x14053CDC8 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14053CE10 (PspAllocateRateControl.c)
 *     PspGetRateControlJobFlag @ 0x140559DBC (PspGetRateControlJobFlag.c)
 *     PspModifyAncestorBits @ 0x1406C46B4 (PspModifyAncestorBits.c)
 *     PspRemoveRateControl @ 0x1406C4960 (PspRemoveRateControl.c)
 */

__int64 __fastcall PspSetJobRateControl(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // edi
  __int64 v9; // rsi
  unsigned int RateControlJobFlag; // r15d
  int v11; // ecx
  bool v12; // r12
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // r9
  unsigned int v17; // r10d
  _QWORD *RateControlHeaderPtr; // r13
  _QWORD *RateControl; // rax
  __int64 v20; // r8
  _QWORD *v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+38h] [rbp-28h]
  __int128 v25; // [rsp+40h] [rbp-20h]
  unsigned int v26; // [rsp+50h] [rbp-10h]
  char v27; // [rsp+54h] [rbp-Ch]
  unsigned int v28; // [rsp+98h] [rbp+38h]

  v7 = 0;
  v9 = 0LL;
  RateControlJobFlag = PspGetRateControlJobFlag(a2, 1);
  v28 = PspGetRateControlJobFlag(v11, 0);
  v12 = (*(_DWORD *)(a1 + 1296) & v28) != 0;
  RateControlHeaderPtr = (_QWORD *)PspGetRateControlHeaderPtr(a1, a2);
  if ( (v15 & 1) == 0 )
  {
    if ( !v16 )
    {
      v7 = -1073741811;
      goto LABEL_16;
    }
    PspRemoveRateControl(v14, v13, v15, a5, a6);
    goto LABEL_12;
  }
  if ( v16 )
  {
LABEL_8:
    v23 = 0LL;
    v24 = a5;
    *(_QWORD *)&v25 = a6;
    *((_QWORD *)&v25 + 1) = a1;
    v26 = a2;
    v27 = 1;
    v7 = PspEnumJobsAndProcessesInJobHierarchy(
           (_QWORD *)a1,
           (int)PspSetRateControlJobPreCallback,
           0,
           (int)PspSetRateControlProcessCallback,
           (__int64)&v23,
           5u);
LABEL_12:
    if ( v7 >= 0 )
      return (unsigned int)v7;
    if ( v9 )
      PspFreeRateControl(v9, a2);
    goto LABEL_15;
  }
  if ( v12 )
  {
    v7 = -1073741637;
    goto LABEL_16;
  }
  RateControl = PspAllocateRateControl(a2);
  v9 = (__int64)RateControl;
  if ( RateControl )
  {
    *RateControlHeaderPtr = RateControl;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1296), RateControlJobFlag);
    PspModifyAncestorBits(a1, v28, 1);
    goto LABEL_8;
  }
  v7 = -1073741801;
LABEL_15:
  v17 = v28;
LABEL_16:
  *RateControlHeaderPtr = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1296), ~RateControlJobFlag);
  if ( !v12 )
  {
    PspModifyAncestorBits(a1, v17, 0);
    v23 &= v20;
    v24 &= v20;
    v25 = 0LL;
    v27 = v20;
    v26 = a2;
    PspEnumJobsAndProcessesInJobHierarchy(
      v21,
      (int)PspSetRateControlJobPreCallback,
      v20,
      (int)PspSetRateControlProcessCallback,
      (__int64)&v23,
      5u);
  }
  return (unsigned int)v7;
}
