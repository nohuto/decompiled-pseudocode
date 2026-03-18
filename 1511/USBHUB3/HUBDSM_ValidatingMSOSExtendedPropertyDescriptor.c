/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedPropertyDescriptor @ 0x1C001B8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedPropertyDescriptor(__int64 a1)
{
  return HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor(*(_QWORD *)(a1 + 960));
}
