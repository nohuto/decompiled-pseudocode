/*
 * XREFs of PspRemoveRateControl @ 0x1406C4960
 * Callers:
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 *     PspSetJobRateControl @ 0x1406C4C78 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x1406C4E6C (PspSetNetRateControl.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetRateControlHeaderPtr @ 0x140506F24 (PspGetRateControlHeaderPtr.c)
 *     PspFreeRateControl @ 0x14053CDC8 (PspFreeRateControl.c)
 *     PspGetRateControlJobFlag @ 0x140559DBC (PspGetRateControlJobFlag.c)
 *     PspModifyAncestorBits @ 0x1406C46B4 (PspModifyAncestorBits.c)
 */

void __fastcall PspRemoveRateControl(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r9
  unsigned int RateControlJobFlag; // eax
  __int64 v9; // rcx
  __int64 *RateControlHeaderPtr; // rbx
  unsigned int v11; // edx
  _QWORD v12[4]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-18h]
  char v14; // [rsp+54h] [rbp-14h]

  _InterlockedAnd((volatile signed __int32 *)(a1 + 1296), ~(unsigned int)PspGetRateControlJobFlag(a2, 1));
  v12[0] = 0LL;
  v12[3] = 0LL;
  v12[2] = a5;
  v12[1] = v7;
  v13 = a2;
  v14 = 0;
  PspEnumJobsAndProcessesInJobHierarchy(
    (_QWORD *)a1,
    (int)PspSetRateControlJobPreCallback,
    0,
    (int)PspSetRateControlProcessCallback,
    (__int64)v12,
    5u);
  RateControlJobFlag = PspGetRateControlJobFlag(a2, 0);
  PspModifyAncestorBits(a1, RateControlJobFlag, 0);
  RateControlHeaderPtr = (__int64 *)PspGetRateControlHeaderPtr(v9, a2);
  PspFreeRateControl(*RateControlHeaderPtr, v11);
  *RateControlHeaderPtr = 0LL;
}
