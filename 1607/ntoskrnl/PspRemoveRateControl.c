/*
 * XREFs of PspRemoveRateControl @ 0x1406807A8
 * Callers:
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     PspSetJobRateControl @ 0x140680A28 (PspSetJobRateControl.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140468674 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetRateControlHeaderPtr @ 0x1404693C8 (PspGetRateControlHeaderPtr.c)
 *     PspFreeRateControl @ 0x1404D1D14 (PspFreeRateControl.c)
 *     PspModifyAncestorBits @ 0x1406805A4 (PspModifyAncestorBits.c)
 */

void __fastcall PspRemoveRateControl(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *RateControlHeaderPtr; // rbx
  unsigned int v4; // edx
  _QWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+50h] [rbp-18h]
  char v8; // [rsp+54h] [rbp-14h]

  _InterlockedAnd((volatile signed __int32 *)(a1 + 1304), 0xFBFFFFFF);
  v5[0] = 0LL;
  v5[1] = 0LL;
  v7 = 0;
  v8 = 0;
  v6 = 0LL;
  PspEnumJobsAndProcessesInJobHierarchy(
    (_QWORD *)a1,
    (int)PspSetRateControlJobPreCallback,
    0,
    (int)PspSetRateControlProcessCallback,
    (__int64)v5,
    5);
  PspModifyAncestorBits(a1, 0x2000000u, 0);
  RateControlHeaderPtr = (__int64 *)PspGetRateControlHeaderPtr(v2, 0);
  PspFreeRateControl(*RateControlHeaderPtr, v4);
  *RateControlHeaderPtr = 0LL;
}
