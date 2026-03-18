/*
 * XREFs of HUBDSM_ValidatingLanguageIdStringDescriptor @ 0x1C0018CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingLanguageIdStringDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheLanguageIdStringDescriptor(*(_QWORD *)(a1 + 960));
}
