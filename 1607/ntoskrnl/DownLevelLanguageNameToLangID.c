/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x140140F28
 * Callers:
 *     LdrpGetParentLangId @ 0x140213A60 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x1404FE548 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x140561D08 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1406877B0 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407B06B0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140132A80 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x14014E010 (bsearch.c)
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
    && ((v4 = &(&off_140259340)[2 * word_1402794F0[(v3 - (_BYTE *)&off_1402585A0) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
