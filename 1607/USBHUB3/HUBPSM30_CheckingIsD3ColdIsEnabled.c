/*
 * XREFs of HUBPSM30_CheckingIsD3ColdIsEnabled @ 0x1C000E660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CheckingIsD3ColdIsEnabled(__int64 a1)
{
  return HUBMISC_IsD3ColdSupported(*(_QWORD *)(a1 + 960));
}
