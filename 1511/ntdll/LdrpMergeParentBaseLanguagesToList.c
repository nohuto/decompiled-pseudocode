/*
 * XREFs of LdrpMergeParentBaseLanguagesToList @ 0x18008599C
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18001C3DC (LdrpMergeLangFallbackLists.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18003D860 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18003DF80 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     LdrpLangFallbackListAppendNode @ 0x18001CC90 (LdrpLangFallbackListAppendNode.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x18001D630 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlpFreeTraverseNodes @ 0x180040660 (RtlpFreeTraverseNodes.c)
 *     RtlpTraverseParents @ 0x18004069C (RtlpTraverseParents.c)
 *     RtlpCreateTraverseNodes @ 0x180040730 (RtlpCreateTraverseNodes.c)
 */

__int64 LdrpMergeParentBaseLanguagesToList(__int64 *a1, _WORD *a2, __int64 a3, __int64 a4, ...)
{
  unsigned __int16 *Heap; // rsi
  int TraverseNodes; // ebx
  __int16 v10; // di
  unsigned __int16 v11; // dx
  __int16 v12; // dx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  va_list va; // [rsp+90h] [rbp+50h] BYREF

  va_start(va, a4);
  v15 = 0LL;
  Heap = 0LL;
  if ( !a1 || !*a1 || !a2 || !a3 )
  {
    TraverseNodes = -1073741811;
    goto LABEL_22;
  }
  TraverseNodes = RtlpCreateTraverseNodes((__int64 *)&v15);
  if ( TraverseNodes >= 0 )
  {
    if ( !RtlpTraverseParents(a2, v15, a3, a4, 0, 42) )
    {
      TraverseNodes = -1073741823;
      goto LABEL_24;
    }
    Heap = (unsigned __int16 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
    if ( !Heap )
    {
      TraverseNodes = -1073741801;
      goto LABEL_24;
    }
    v10 = 0;
    while ( 1 )
    {
      if ( v10 && *(_DWORD *)(v15 + 8LL * v10 + 4) )
      {
        v11 = *(_WORD *)(v15 + 8LL * v10);
        if ( v11 )
        {
          DestinationString.Buffer = Heap;
          *(_DWORD *)&DestinationString.Length = 11141120;
          if ( !RtlLCIDToCultureName(v11, (__int64)&DestinationString) )
            goto LABEL_15;
        }
        else
        {
          v12 = *(_WORD *)(v15 + 8LL * v10 + 2);
          if ( v12 < 0 )
          {
LABEL_15:
            TraverseNodes = -1073741595;
LABEL_22:
            if ( Heap )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
            break;
          }
          RtlInitUnicodeString(
            &DestinationString,
            (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 24LL)
                   + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL) + 2LL * v12)));
        }
        TraverseNodes = LdrpLangFallbackListAppendNode(a1, a3, 0, (__int16 *)va, (__int64)DestinationString.Buffer);
        if ( TraverseNodes < 0 )
          goto LABEL_22;
      }
      if ( ++v10 >= 42 )
        goto LABEL_22;
    }
  }
LABEL_24:
  if ( v15 )
    RtlpFreeTraverseNodes(v15);
  return (unsigned int)TraverseNodes;
}
