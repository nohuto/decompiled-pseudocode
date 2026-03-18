/*
 * XREFs of LdrpGetParentLangId @ 0x1401F9908
 * Callers:
 *     LdrResFallbackLangList @ 0x14046217C (LdrResFallbackLangList.c)
 *     LdrpSearchResourceSection_U @ 0x1404A1680 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x140127874 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14013B11C (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     DownLevelGetParentLanguageName @ 0x140217B24 (DownLevelGetParentLanguageName.c)
 */

__int64 __fastcall LdrpGetParentLangId(__int16 a1, _WORD *a2)
{
  char v4[176]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v5[176]; // [rsp+D0h] [rbp-C8h] BYREF

  if ( !a2 || !(unsigned int)DownLevelLangIDToLanguageName(a1, v4, 85, 2) )
    return 3221225485LL;
  if ( (int)DownLevelGetParentLanguageName(v4, v5) >= 2 )
    *a2 = DownLevelLanguageNameToLangID(v5, 2);
  else
    *a2 = 0;
  return 0LL;
}
