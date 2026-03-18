/*
 * XREFs of HUBMISC_GetGenericErrorResponseOnDescriptorFailure @ 0x1C0025034
 * Callers:
 *     HUBDSM_ReturningErrorResponseOnProductStringQuery @ 0x1C001A820 (HUBDSM_ReturningErrorResponseOnProductStringQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0010DF0 (WPP_RECORDER_SF_q.c)
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
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
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
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      a1);
  }
  return v1;
}
