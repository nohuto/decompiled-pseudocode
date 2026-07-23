/*
 * XREFs of InitializeUserOrMachineLangList @ 0x1800709F8
 * Callers:
 *     RtlpInitializeUserList @ 0x180010CD4 (RtlpInitializeUserList.c)
 *     InitializeTEBUserLangList @ 0x180012650 (InitializeTEBUserLangList.c)
 *     RtlpQueryDefaultUILanguage @ 0x1800708C0 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     RtlpSetProcUserMachineLangList @ 0x180012948 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712C8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180071964 (RtlpMuiRegCreateLanguageList.c)
 */

__int64 __fastcall InitializeUserOrMachineLangList(__int64 a1, unsigned int a2, __int64 *a3, int a4, char a5)
{
  __int64 PreferredUILanguages; // rdx
  __int64 LanguageList; // rax
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  if ( a3 && a1 && a2 <= 1 && (unsigned int)(a4 - 2) <= 1 )
  {
    if ( a5 && a4 == 3 )
    {
      LODWORD(PreferredUILanguages) = RtlpSetProcUserMachineLangList(a1, a2);
      if ( (int)PreferredUILanguages >= 0 )
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
    PreferredUILanguages = (unsigned int)RtlpMuiRegLoadPreferredUILanguages(a1, a2, a2, a4, (__int64)&v11, (__int64)a3);
    if ( !*a3 )
    {
      LOBYTE(PreferredUILanguages) = a2 != 1;
      LanguageList = RtlpMuiRegCreateLanguageList(1LL, PreferredUILanguages, a1);
      *a3 = LanguageList;
      if ( !LanguageList )
      {
        LODWORD(PreferredUILanguages) = -1073741801;
        return (unsigned int)PreferredUILanguages;
      }
      LODWORD(PreferredUILanguages) = 0;
    }
    if ( (_DWORD)PreferredUILanguages && (_DWORD)PreferredUILanguages != -1073741801 && v11 )
      LODWORD(PreferredUILanguages) = 0;
    return (unsigned int)PreferredUILanguages;
  }
  return 3221225485LL;
}
