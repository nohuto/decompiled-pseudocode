/*
 * XREFs of HUBDSM_ReturningErrorResponseOnProductStringQuery @ 0x1C0018280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ReturningErrorResponseOnProductStringQuery(__int64 a1)
{
  return HUBMISC_GetGenericErrorResponseOnDescriptorFailure(*(_QWORD *)(a1 + 960));
}
