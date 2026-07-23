/*
 * XREFs of RtlpMuiRegTryToAppendLanguageToMuiszFromLangList @ 0x1800147AC
 * Callers:
 *     LdrpConvertLangFallbackListToMultiSz @ 0x1800145AC (LdrpConvertLangFallbackListToMultiSz.c)
 * Callees:
 *     RtlpMuiRegTryToAppendLangId @ 0x180014880 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180076AE4 (RtlpMuiRegTryToAppendLanguageName.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpMuiRegTryToAppendLanguageToMuiszFromLangList(
        char a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int16 *v7; // rdx
  __int16 v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+32h] [rbp-36h]
  __int64 v11; // [rsp+3Ah] [rbp-2Eh]
  __int64 v12; // [rsp+42h] [rbp-26h]
  __int16 v13; // [rsp+4Ah] [rbp-1Eh]

  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  v13 = 0;
  if ( !a3 || !a2 || !a4 )
    return 3221225485LL;
  switch ( *a3 )
  {
    case 1:
      WORD1(v10) = a3[2];
LABEL_10:
      v7 = &v9;
      break;
    case 2:
      v7 = (__int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * (__int16)a3[2]);
      break;
    case 3:
      WORD2(v10) = a3[2];
      goto LABEL_10;
  }
  if ( a1 )
    return RtlpMuiRegTryToAppendLangId(a2, v7, a4, a5, a6);
  else
    return RtlpMuiRegTryToAppendLanguageName(a2, v7, a4, a5, a6);
}
