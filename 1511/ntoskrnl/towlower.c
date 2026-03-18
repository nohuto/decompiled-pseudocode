/*
 * XREFs of towlower @ 0x140145A70
 * Callers:
 *     ExpParseArcPathName @ 0x14066E324 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x14066F8BC (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x14066F98C (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x14066FE2C (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x14066FFA8 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x140670044 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x140146784 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
