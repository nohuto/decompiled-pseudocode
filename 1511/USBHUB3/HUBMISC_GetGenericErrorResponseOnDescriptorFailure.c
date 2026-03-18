/*
 * XREFs of HUBMISC_GetGenericErrorResponseOnDescriptorFailure @ 0x1C0022CF8
 * Callers:
 *     HUBDSM_ReturningErrorResponseOnProductStringQuery @ 0x1C0018CB0 (HUBDSM_ReturningErrorResponseOnProductStringQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000FCF4 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall HUBMISC_GetGenericErrorResponseOnDescriptorFailure(__int64 a1)
{
  unsigned int v1; // ebx

  if ( *(_WORD *)(a1 + 1974) > 0x200u )
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x5Au,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      a1);
    return 4017;
  }
  else
  {
    v1 = 4025;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x59u,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      a1);
  }
  return v1;
}
