/*
 * XREFs of RtlpFilterandReplaceConsoleLanguages @ 0x180013688
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x180041048 (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x1800143F8 (LdrpCreateLangFallbackList.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003E290 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     GetNameFromLangListNode @ 0x180043364 (GetNameFromLangListNode.c)
 *     LdrpLangFallbackListAppendNode @ 0x180043BD0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180045F04 (RtlpMuiRegFreeLanguageList.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpFilterandReplaceConsoleLanguages(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int64 a5)
{
  unsigned int v7; // edi
  int LangFallbackList; // ebx
  __int64 v10; // rbx
  _QWORD *v11; // rdi
  unsigned int v12; // r15d
  _BYTE v14[4]; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v15; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress[3]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[176]; // [rsp+60h] [rbp-A0h] BYREF

  v7 = 0;
  BaseAddress[0] = 0LL;
  memset(v17, 0, 0xAAuLL);
  v15 = 0uLL;
  if ( !a1 || !a2 || !a5 || !*(_QWORD *)a5 )
    return 3221225485LL;
  LangFallbackList = LdrpCreateLangFallbackList(BaseAddress, a2, 25LL, 0LL);
  if ( LangFallbackList >= 0 )
  {
    if ( !*(_WORD *)(a1 + 4) )
    {
LABEL_10:
      v11 = BaseAddress[0];
      v12 = 0;
      if ( *((_WORD *)BaseAddress[0] + 2) )
      {
        do
        {
          LODWORD(v15) = 11141120;
          *((_QWORD *)&v15 + 1) = v17;
          LangFallbackList = GetNameFromLangListNode(a2, v11[3] + 6LL * v12, &v15);
          if ( LangFallbackList < 0 )
            break;
          LangFallbackList = LdrpLangFallbackListAppendNode(a5, a2, 0, (unsigned int)v14, *((__int64 *)&v15 + 1));
          ++v12;
        }
        while ( v12 < *((unsigned __int16 *)v11 + 2) );
      }
      goto LABEL_11;
    }
    while ( 1 )
    {
      LODWORD(v15) = 11141120;
      *((_QWORD *)&v15 + 1) = v17;
      LangFallbackList = GetNameFromLangListNode(a2, *(_QWORD *)(a1 + 24) + 6LL * v7, &v15);
      if ( LangFallbackList < 0 )
        break;
      v10 = *((_QWORD *)&v15 + 1);
      BaseAddress[2] = 0LL;
      RtlpConsoleFallbackNameFromLocaleName(*((wchar_t **)&v15 + 1), a2, a4);
      LangFallbackList = LdrpLangFallbackListAppendNode(a5, a2, 0, (unsigned int)v14, v10);
      if ( LangFallbackList < 0 )
        break;
      if ( ++v7 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_10;
    }
  }
  v11 = BaseAddress[0];
LABEL_11:
  if ( v11 )
    RtlpMuiRegFreeLanguageList(v11);
  if ( LangFallbackList < 0 )
  {
    if ( *(_QWORD *)a5 )
      *(_WORD *)(*(_QWORD *)a5 + 4LL) = 0;
  }
  return (unsigned int)LangFallbackList;
}
