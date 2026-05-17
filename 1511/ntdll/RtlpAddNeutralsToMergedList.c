/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x18003E6C8
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     GetNameFromLangListNode @ 0x18001C9AC (GetNameFromLangListNode.c)
 *     LdrpLangFallbackListAppendNode @ 0x18001CC90 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x18001D630 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlGetNeutralFallback @ 0x18003E900 (RtlGetNeutralFallback.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003EB40 (RtlpGetSystemDefaultUILanguage.c)
 *     _wcsicmp @ 0x180096F90 (_wcsicmp.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int NameFromLangListNode; // ebx
  __int64 Heap; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 *v11; // rsi
  unsigned int i; // r14d
  unsigned __int16 *Buffer; // r12
  __int64 v15; // r12
  __int16 v16[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int16 v17; // [rsp+34h] [rbp-3Ch] BYREF
  __int128 v18; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING v19; // [rsp+48h] [rbp-28h] BYREF
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF
  char v22; // [rsp+C0h] [rbp+50h] BYREF

  v19.Length = 0;
  *(_QWORD *)&v19.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v19.Buffer + 2) = 0;
  HIWORD(v19.Buffer) = 0;
  NameFromLangListNode = 0;
  v20 = 0uLL;
  v18 = 0uLL;
  v16[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 510LL);
  v11 = (unsigned __int16 *)Heap;
  if ( !Heap )
    return 3221225495LL;
  LODWORD(v20) = 11141120;
  *((_QWORD *)&v20 + 1) = Heap + 170;
  if ( (int)RtlpGetSystemDefaultUILanguage(&v17, a2, v9, v10) >= 0 && RtlLCIDToCultureName(v17, (__int64)&v20) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      v19.Buffer = v11;
      *(_DWORD *)&v19.Length = 11141120;
      NameFromLangListNode = GetNameFromLangListNode(a2, (_WORD *)(*(_QWORD *)(a3 + 24) + 6LL * i), &v19);
      if ( NameFromLangListNode < 0 )
        break;
      Buffer = v19.Buffer;
      NameFromLangListNode = LdrpLangFallbackListAppendNode(a4, a2, 0, v16, (__int64)v19.Buffer);
      if ( NameFromLangListNode < 0 )
        break;
      if ( a1 || !wcsicmp(Buffer, *((const wchar_t **)&v20 + 1)) )
      {
        v22 = 0;
        *((_QWORD *)&v18 + 1) = v11 + 170;
        LODWORD(v18) = 11141120;
        NameFromLangListNode = RtlGetNeutralFallback(a2, Buffer, &v18, &v22);
        if ( NameFromLangListNode < 0 )
          break;
        do
        {
          if ( !(_WORD)v18 || v22 )
            break;
          v15 = *((_QWORD *)&v18 + 1);
          NameFromLangListNode = LdrpLangFallbackListAppendNode(a4, a2, 0, v16, *((__int64 *)&v18 + 1));
          if ( NameFromLangListNode < 0 )
            goto LABEL_16;
          NameFromLangListNode = RtlGetNeutralFallback(a2, v15, &v18, &v22);
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
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v11);
  return (unsigned int)NameFromLangListNode;
}
