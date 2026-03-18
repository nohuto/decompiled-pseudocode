/*
 * XREFs of LdrpGetParentLangId @ 0x140213C34
 * Callers:
 *     LdrResFallbackLangList @ 0x14051C094 (LdrResFallbackLangList.c)
 *     LdrpSearchResourceSection_U @ 0x14051C944 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x1401323C4 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1401409B8 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     DownLevelGetParentLanguageName @ 0x140231CF4 (DownLevelGetParentLanguageName.c)
 */

__int64 __fastcall LdrpGetParentLangId(__int16 a1, _WORD *a2)
{
  unsigned __int16 v4[88]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v5[176]; // [rsp+D0h] [rbp-C8h] BYREF

  if ( !a2 || !(unsigned int)DownLevelLangIDToLanguageName(a1, v4, 85, 2) )
    return 3221225485LL;
  if ( (int)DownLevelGetParentLanguageName(v4, v5) >= 2 )
    *a2 = DownLevelLanguageNameToLangID(v5, 2);
  else
    *a2 = 0;
  return 0LL;
}
