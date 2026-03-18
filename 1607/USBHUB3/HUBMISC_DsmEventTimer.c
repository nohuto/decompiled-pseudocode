/*
 * XREFs of HUBMISC_DsmEventTimer @ 0x1C0023D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HUBMISC_DsmEventTimer(__int64 a1, __int64 a2)
{
  HUBSM_AddEvent(a2 + 488, 0x3EAu);
}
