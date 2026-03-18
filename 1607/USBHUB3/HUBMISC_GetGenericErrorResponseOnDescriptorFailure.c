/*
 * XREFs of HUBMISC_GetGenericErrorResponseOnDescriptorFailure @ 0x1C0022D44
 * Callers:
 *     HUBDSM_ReturningErrorResponseOnProductStringQuery @ 0x1C0018D00 (HUBDSM_ReturningErrorResponseOnProductStringQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000FDA4 (WPP_RECORDER_SF_q.c)
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
      (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids,
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
      (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids,
      a1);
  }
  return v1;
}
