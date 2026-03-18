/*
 * XREFs of HUBMISC_GetGenericErrorResponseOnDescriptorFailure @ 0x1C00220B4
 * Callers:
 *     HUBDSM_ReturningErrorResponseOnProductStringQuery @ 0x1C0018280 (HUBDSM_ReturningErrorResponseOnProductStringQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000F66C (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall HUBMISC_GetGenericErrorResponseOnDescriptorFailure(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  if ( *(_WORD *)(a1 + 1974) > 0x200u )
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      a3,
      0x5Bu,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      a1);
    return 4017;
  }
  else
  {
    v3 = 4025;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      a3,
      0x5Au,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      a1);
  }
  return v3;
}
