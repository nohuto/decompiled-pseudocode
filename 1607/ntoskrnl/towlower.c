/*
 * XREFs of towlower @ 0x14014EE4C
 * Callers:
 *     ExpParseArcPathName @ 0x1406B103C (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x1406B25C4 (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1406B2694 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1406B2B1C (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1406B2C98 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1406B2D34 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x14014FB60 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
