/*
 * XREFs of HUBMISC_StartOverCurrentTimer @ 0x1C00293E0
 * Callers:
 *     HUBPSM20_StartingOverCurrentTimer @ 0x1C000ED40 (HUBPSM20_StartingOverCurrentTimer.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0002970 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall HUBMISC_StartOverCurrentTimer(__int64 a1)
{
  int v3; // [rsp+30h] [rbp-18h]

  v3 = 500;
  WPP_RECORDER_SF_qd(
    *(_QWORD *)(a1 + 1432),
    2u,
    4u,
    0x36u,
    (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
    a1,
    v3);
  return ExSetTimer(*(_QWORD *)(a1 + 1312), -5000000LL, 0LL, 0LL);
}
