/*
 * XREFs of vInitMapper @ 0x1C0378270
 * Callers:
 *     <none>
 * Callees:
 *     InitializeFontSignatures @ 0x1C0378168 (InitializeFontSignatures.c)
 */

__int64 vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
