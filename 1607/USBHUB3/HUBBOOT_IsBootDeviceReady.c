/*
 * XREFs of HUBBOOT_IsBootDeviceReady @ 0x1C0031570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HUBBOOT_IsBootDeviceReady(__int64 a1, __int64 a2)
{
  return HUBMISC_IsBootDeviceReady(a2);
}
