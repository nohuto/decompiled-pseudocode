/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x1401409B8
 * Callers:
 *     LdrpGetParentLangId @ 0x140213C34 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x14051B158 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x1405617C8 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1406876CC (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407B06B0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140132510 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x14014DAA0 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_1402585A0, 0x1B3uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_140259340)[2 * word_1402793F0[(v3 - (_BYTE *)&off_1402585A0) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
