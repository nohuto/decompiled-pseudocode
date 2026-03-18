/*
 * XREFs of HUBDSM_ValidatingAlternateConfigurationDescriptor @ 0x1C001A6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingAlternateConfigurationDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheConfigDescriptor(*(_QWORD *)(a1 + 960));
}
