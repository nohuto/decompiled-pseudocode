/*
 * XREFs of vInitMapper @ 0x1C0378A10
 * Callers:
 *     <none>
 * Callees:
 *     InitializeFontSignatures @ 0x1C0378A24 (InitializeFontSignatures.c)
 */

int vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
