/*
 * XREFs of InitializeUserOrMachineLangList @ 0x180039CC8
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180039B90 (RtlpQueryDefaultUILanguage.c)
 *     InitializeTEBUserLangList @ 0x180039EE8 (InitializeTEBUserLangList.c)
 *     RtlpInitializeUserList @ 0x18003B91C (RtlpInitializeUserList.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180005200 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180006844 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x180039D8C (RtlpSetProcUserMachineLangList.c)
 */

__int64 __fastcall InitializeUserOrMachineLangList(__int64 a1, __int64 a2, __int64 *a3, int a4, char a5)
{
  int v6; // edi
  int v8; // edx
  __int64 LanguageList; // rax
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  v6 = a2;
  if ( a3 && a1 && (unsigned int)a2 <= 1 && (unsigned int)(a4 - 2) <= 1 )
  {
    if ( a5 && a4 == 3 )
    {
      v8 = RtlpSetProcUserMachineLangList(a1, a2, a3);
      if ( v8 >= 0 )
      {
        if ( v6 == 1 )
        {
          *a3 = *(_QWORD *)(a1 + 64);
        }
        else if ( !v6 )
        {
          *a3 = *(_QWORD *)(a1 + 56);
        }
      }
      return (unsigned int)v8;
    }
    v8 = RtlpMuiRegLoadPreferredUILanguages(a1, a2, a2, a4, &v11, a3);
    if ( !*a3 )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, v6 != 1, a1);
      *a3 = LanguageList;
      if ( !LanguageList )
        return (unsigned int)-1073741801;
      v8 = 0;
    }
    if ( v8 && v8 != -1073741801 && v11 )
      return 0;
    return (unsigned int)v8;
  }
  return 3221225485LL;
}
