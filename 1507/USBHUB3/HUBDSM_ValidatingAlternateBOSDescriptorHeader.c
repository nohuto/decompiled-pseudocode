/*
 * XREFs of HUBDSM_ValidatingAlternateBOSDescriptorHeader @ 0x1C00192D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingAlternateBOSDescriptorHeader(__int64 a1)
{
  return HUBDTX_ValidateAndCacheBOSDescriptorHeader(*(_QWORD *)(a1 + 960));
}
