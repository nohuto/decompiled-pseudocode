/*
 * XREFs of towlower @ 0x14014F40C
 * Callers:
 *     ExpParseArcPathName @ 0x1406B1174 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x1406B26FC (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1406B27CC (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1406B2C54 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1406B2DD0 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1406B2E6C (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x140150120 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
