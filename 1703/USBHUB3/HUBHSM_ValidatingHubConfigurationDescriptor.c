/*
 * XREFs of HUBHSM_ValidatingHubConfigurationDescriptor @ 0x1C0008930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_ValidatingHubConfigurationDescriptor(__int64 a1)
{
  return HUBHTX_ValidateAndCacheHubConfigDescriptor(*(_QWORD *)(a1 + 960));
}
