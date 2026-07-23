/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x18001D184
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18001D3C0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlGetNeutralFallback @ 0x18001D068 (RtlGetNeutralFallback.c)
 *     GetNameFromLangListNode @ 0x18001E8A0 (GetNameFromLangListNode.c)
 *     RtlLCIDToCultureName @ 0x18001ECA0 (RtlLCIDToCultureName.c)
 *     LdrpLangFallbackListAppendNode @ 0x18001EF08 (LdrpLangFallbackListAppendNode.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18001F930 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     _wcsicmp @ 0x1800857E0 (_wcsicmp.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, DWORD *a2, __int64 a3, _QWORD *a4)
{
  int v4; // r15d
  int NameFromLangListNode; // ebx
  unsigned __int16 *Heap; // rax
  unsigned __int16 *v9; // rsi
  unsigned int i; // r14d
  const WCHAR *v11; // r12
  unsigned __int16 *Buffer; // r12
  _WORD v14[2]; // [rsp+30h] [rbp-40h] BYREF
  LANGID DefaultUILanguageId; // [rsp+34h] [rbp-3Ch] BYREF
  _UNICODE_STRING v16; // [rsp+38h] [rbp-38h] BYREF
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
  v16.Length = 0;
  *(_QWORD *)&v16.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v16.Buffer + 2) = 0;
  HIWORD(v16.Buffer) = 0;
  v14[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
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
      v11 = (const WCHAR *)*((_QWORD *)&v17 + 1);
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
        v16.Buffer = v9 + 170;
        *(_DWORD *)&v16.Length = 11141120;
        NameFromLangListNode = RtlGetNeutralFallback((__int64)a2, v11, &v16, &v20);
        if ( NameFromLangListNode < 0 )
          break;
        do
        {
          if ( !v16.Length || v20 )
            break;
          Buffer = v16.Buffer;
          NameFromLangListNode = LdrpLangFallbackListAppendNode(
                                   v4,
                                   (_DWORD)a2,
                                   0,
                                   (unsigned int)v14,
                                   (__int64)v16.Buffer);
          if ( NameFromLangListNode < 0 )
            goto LABEL_16;
          NameFromLangListNode = RtlGetNeutralFallback((__int64)a2, Buffer, &v16, &v20);
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
