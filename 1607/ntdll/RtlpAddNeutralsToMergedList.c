/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x18003F354
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013D90 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlGetNeutralFallback @ 0x18003F58C (RtlGetNeutralFallback.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003F6B0 (RtlpGetSystemDefaultUILanguage.c)
 *     GetNameFromLangListNode @ 0x180043364 (GetNameFromLangListNode.c)
 *     LdrpLangFallbackListAppendNode @ 0x180043BD0 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x1800448A0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, DWORD *a2, __int64 a3, _QWORD *a4)
{
  int v4; // r15d
  int NameFromLangListNode; // ebx
  wchar_t *Heap; // rax
  wchar_t *v9; // rsi
  unsigned int i; // r14d
  const wchar_t *v11; // r12
  __int64 v13; // r12
  _WORD v14[2]; // [rsp+30h] [rbp-40h] BYREF
  LANGID DefaultUILanguageId; // [rsp+34h] [rbp-3Ch] BYREF
  __int128 v16; // [rsp+38h] [rbp-38h] BYREF
  __int128 v17; // [rsp+48h] [rbp-28h] BYREF
  _UNICODE_STRING String; // [rsp+58h] [rbp-18h] BYREF
  char v20; // [rsp+C0h] [rbp+50h] BYREF

  v17 = 0uLL;
  v4 = (int)a4;
  NameFromLangListNode = 0;
  String.Length = 0;
  *(_QWORD *)&String.MaximumLength = 0LL;
  *(_DWORD *)((char *)&String.Buffer + 2) = 0;
  HIWORD(String.Buffer) = 0;
  v16 = 0uLL;
  v14[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = Heap + 85;
  if ( RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, a2) >= 0
    && RtlLCIDToCultureName(DefaultUILanguageId, &String) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      *((_QWORD *)&v17 + 1) = v9;
      LODWORD(v17) = 11141120;
      NameFromLangListNode = GetNameFromLangListNode(a2, *(_QWORD *)(a3 + 24) + 6LL * i, &v17);
      if ( NameFromLangListNode < 0 )
        break;
      v11 = (const wchar_t *)*((_QWORD *)&v17 + 1);
      NameFromLangListNode = LdrpLangFallbackListAppendNode(
                               v4,
                               (_DWORD)a2,
                               0,
                               (unsigned int)v14,
                               *((__int64 *)&v17 + 1));
      if ( NameFromLangListNode < 0 )
        break;
      if ( a1 || !wcsicmp(v11, String.Buffer) )
      {
        v20 = 0;
        *((_QWORD *)&v16 + 1) = v9 + 170;
        LODWORD(v16) = 11141120;
        NameFromLangListNode = RtlGetNeutralFallback(a2, v11, &v16, &v20);
        if ( NameFromLangListNode < 0 )
          break;
        do
        {
          if ( !(_WORD)v16 || v20 )
            break;
          v13 = *((_QWORD *)&v16 + 1);
          NameFromLangListNode = LdrpLangFallbackListAppendNode(
                                   v4,
                                   (_DWORD)a2,
                                   0,
                                   (unsigned int)v14,
                                   *((__int64 *)&v16 + 1));
          if ( NameFromLangListNode < 0 )
            goto LABEL_16;
          NameFromLangListNode = RtlGetNeutralFallback(a2, v13, &v16, &v20);
        }
        while ( NameFromLangListNode >= 0 );
        if ( NameFromLangListNode < 0 )
          break;
      }
    }
  }
  else
  {
    NameFromLangListNode = -1073741823;
  }
LABEL_16:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return (unsigned int)NameFromLangListNode;
}
