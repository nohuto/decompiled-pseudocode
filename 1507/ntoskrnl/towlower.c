/*
 * XREFs of towlower @ 0x140173AA0
 * Callers:
 *     ExQueryFastCacheAppOrigin @ 0x1406EBA8C (ExQueryFastCacheAppOrigin.c)
 *     ExpParseArcPathName @ 0x1406F1CDC (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x1406F3468 (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1406F3538 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1406F39D8 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1406F3B54 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1406F3BF0 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1401747B4 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
