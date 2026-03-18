/*
 * XREFs of HUBMISC_HubEventTimer @ 0x1C0023CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HUBMISC_HubEventTimer(__int64 a1, __int64 a2)
{
  HUBSM_AddEvent(a2 + 1208, 0x3EAu);
}
