/*
 * XREFs of HUBDSM_ValidatingLanguageSpecificProductIdString @ 0x1C00181D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingLanguageSpecificProductIdString(__int64 a1)
{
  return HUBDTX_ValidateAndCacheProductIdStringDescriptor(*(_QWORD *)(a1 + 960));
}
