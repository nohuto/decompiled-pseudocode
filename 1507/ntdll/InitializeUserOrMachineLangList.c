/*
 * XREFs of InitializeUserOrMachineLangList @ 0x180048B38
 * Callers:
 *     InitializeTEBUserLangList @ 0x18001B7C8 (InitializeTEBUserLangList.c)
 *     RtlpInitializeUserList @ 0x180048720 (RtlpInitializeUserList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180048A00 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     RtlpSetProcUserMachineLangList @ 0x18001BAC8 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18001DA70 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800495D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 */

__int64 __fastcall InitializeUserOrMachineLangList(__int64 a1, unsigned int a2, __int64 *a3, int a4, char a5)
{
  int PreferredUILanguages; // edx
  __int64 LanguageList; // rax
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  if ( a3 && a1 && a2 <= 1 && (unsigned int)(a4 - 2) <= 1 )
  {
    if ( a5 && a4 == 3 )
    {
      PreferredUILanguages = RtlpSetProcUserMachineLangList(a1, a2);
      if ( PreferredUILanguages >= 0 )
      {
        if ( a2 == 1 )
        {
          *a3 = *(_QWORD *)(a1 + 64);
        }
        else if ( !a2 )
        {
          *a3 = *(_QWORD *)(a1 + 56);
        }
      }
      return (unsigned int)PreferredUILanguages;
    }
    PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(a1, a2, a2, a4, (__int64)&v11, (__int64)a3);
    if ( !*a3 )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, a2 != 1, a1);
      *a3 = LanguageList;
      if ( !LanguageList )
        return (unsigned int)-1073741801;
      PreferredUILanguages = 0;
    }
    if ( PreferredUILanguages && PreferredUILanguages != -1073741801 && v11 )
      return 0;
    return (unsigned int)PreferredUILanguages;
  }
  return 3221225485LL;
}
