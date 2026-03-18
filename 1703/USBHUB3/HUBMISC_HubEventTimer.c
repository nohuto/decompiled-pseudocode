/*
 * XREFs of HUBMISC_HubEventTimer @ 0x1C0026190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HUBMISC_HubEventTimer(__int64 a1, __int64 a2)
{
  HUBSM_AddEvent(a2 + 1232, 1002);
}
