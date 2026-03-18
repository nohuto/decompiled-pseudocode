/*
 * XREFs of HUBMISC_StartEnumRetryTimer @ 0x1C0022F74
 * Callers:
 *     HUBDSM_StartingTimerForEnumRetryOnRenum @ 0x1C00178B0 (HUBDSM_StartingTimerForEnumRetryOnRenum.c)
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C000F4B4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall HUBMISC_StartEnumRetryTimer(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // [rsp+28h] [rbp-20h]

  v5 = 500;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    a2,
    a3,
    0xEu,
    (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
    v5,
    a1);
  return ExSetTimer(*(_QWORD *)(a1 + 1528), -5000000LL, 0LL, 0LL);
}
