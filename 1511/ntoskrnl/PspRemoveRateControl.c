/*
 * XREFs of PspRemoveRateControl @ 0x1406423B4
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     PspSetJobRateControl @ 0x140642730 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x140642924 (PspSetNetRateControl.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1403EB6A8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetRateControlHeaderPtr @ 0x1403EBDB4 (PspGetRateControlHeaderPtr.c)
 *     PspFreeRateControl @ 0x140487854 (PspFreeRateControl.c)
 *     PspGetRateControlJobFlag @ 0x1404C26B0 (PspGetRateControlJobFlag.c)
 *     PspModifyAncestorBits @ 0x140642164 (PspModifyAncestorBits.c)
 */

void __fastcall PspRemoveRateControl(volatile signed __int32 *Object, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r9
  unsigned int RateControlJobFlag; // eax
  __int64 v9; // rcx
  __int64 *RateControlHeaderPtr; // rbx
  unsigned int v11; // edx
  __int64 v12[4]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-18h]
  char v14; // [rsp+54h] [rbp-14h]

  _InterlockedAnd(Object + 324, ~(unsigned int)PspGetRateControlJobFlag(a2, 1));
  v12[0] = 0LL;
  v12[3] = 0LL;
  v12[2] = a5;
  v12[1] = v7;
  v13 = a2;
  v14 = 0;
  PspEnumJobsAndProcessesInJobHierarchy(
    Object,
    (int)PspSetRateControlJobPreCallback,
    0,
    (int)PspSetRateControlProcessCallback,
    (__int64)v12,
    5u);
  RateControlJobFlag = PspGetRateControlJobFlag(a2, 0);
  PspModifyAncestorBits((__int64)Object, RateControlJobFlag, 0);
  RateControlHeaderPtr = (__int64 *)PspGetRateControlHeaderPtr(v9, a2);
  PspFreeRateControl(*RateControlHeaderPtr, v11);
  *RateControlHeaderPtr = 0LL;
}
