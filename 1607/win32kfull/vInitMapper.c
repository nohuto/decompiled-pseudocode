/*
 * XREFs of vInitMapper @ 0x1C037DA30
 * Callers:
 *     <none>
 * Callees:
 *     InitializeFontSignatures @ 0x1C037DA44 (InitializeFontSignatures.c)
 */

int vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
