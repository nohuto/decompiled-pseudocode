/*
 * XREFs of RtlpFilterandReplaceConsoleLanguages @ 0x180070DA0
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18001C3DC (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x18001A418 (LdrpCreateLangFallbackList.c)
 *     GetNameFromLangListNode @ 0x18001C9AC (GetNameFromLangListNode.c)
 *     LdrpLangFallbackListAppendNode @ 0x18001CC90 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18001D9B0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x180070F64 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpFilterandReplaceConsoleLanguages(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int64 *a5)
{
  unsigned int v7; // edi
  int LangFallbackList; // ebx
  unsigned __int16 *Buffer; // rbx
  _QWORD *v11; // rdi
  unsigned int v12; // r15d
  __int16 v14[2]; // [rsp+34h] [rbp-CCh] BYREF
  _UNICODE_STRING v15; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress[3]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v17[88]; // [rsp+60h] [rbp-A0h] BYREF

  v7 = 0;
  BaseAddress[0] = 0LL;
  memset(v17, 0, 170);
  v15.Length = 0;
  *(_QWORD *)&v15.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v15.Buffer + 2) = 0;
  HIWORD(v15.Buffer) = 0;
  if ( !a1 || !a2 || !a5 || !*a5 )
    return 3221225485LL;
  LangFallbackList = LdrpCreateLangFallbackList((__int64 *)BaseAddress, a2, 25, 0);
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
          *(_DWORD *)&v15.Length = 11141120;
          v15.Buffer = v17;
          LangFallbackList = GetNameFromLangListNode(a2, (_WORD *)(v11[3] + 6LL * v12), &v15);
          if ( LangFallbackList < 0 )
            break;
          LangFallbackList = LdrpLangFallbackListAppendNode(a5, a2, 0, v14, (__int64)v15.Buffer);
          ++v12;
        }
        while ( v12 < *((unsigned __int16 *)v11 + 2) );
      }
      goto LABEL_11;
    }
    while ( 1 )
    {
      *(_DWORD *)&v15.Length = 11141120;
      v15.Buffer = v17;
      LangFallbackList = GetNameFromLangListNode(a2, (_WORD *)(*(_QWORD *)(a1 + 24) + 6LL * v7), &v15);
      if ( LangFallbackList < 0 )
        break;
      Buffer = v15.Buffer;
      BaseAddress[2] = 0LL;
      RtlpConsoleFallbackNameFromLocaleName(v15.Buffer, a2, a4);
      LangFallbackList = LdrpLangFallbackListAppendNode(a5, a2, 0, v14, (__int64)Buffer);
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
    if ( *a5 )
      *(_WORD *)(*a5 + 4) = 0;
  }
  return (unsigned int)LangFallbackList;
}
