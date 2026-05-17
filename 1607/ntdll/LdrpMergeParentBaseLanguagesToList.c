/*
 * XREFs of LdrpMergeParentBaseLanguagesToList @ 0x180067188
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x180041058 (LdrpMergeLangFallbackLists.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079C00 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007B0E0 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     LdrpLangFallbackListAppendNode @ 0x180043BE0 (LdrpLangFallbackListAppendNode.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800448B0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpFreeTraverseNodes @ 0x18006A7E0 (RtlpFreeTraverseNodes.c)
 *     RtlpTraverseParents @ 0x18006A81C (RtlpTraverseParents.c)
 *     RtlpCreateTraverseNodes @ 0x18006A8B0 (RtlpCreateTraverseNodes.c)
 */

__int64 LdrpMergeParentBaseLanguagesToList(__int64 *a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v6; // edi
  wchar_t *Heap; // rsi
  int appended; // ebx
  __int16 v10; // di
  unsigned __int16 v11; // dx
  __int16 v12; // dx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  va_list va; // [rsp+90h] [rbp+50h] BYREF

  va_start(va, a4);
  v15 = 0LL;
  v6 = a2;
  Heap = 0LL;
  if ( !a1 || !*a1 || !a2 || !a3 )
  {
    appended = -1073741811;
    goto LABEL_19;
  }
  appended = RtlpCreateTraverseNodes(&v15);
  if ( appended >= 0 )
  {
    if ( !(unsigned __int8)RtlpTraverseParents(v6, v15, a3, a4, 0, 42) )
    {
      appended = -1073741823;
      goto LABEL_21;
    }
    Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    if ( !Heap )
    {
      appended = -1073741801;
      goto LABEL_21;
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
          {
LABEL_18:
            appended = -1073741595;
LABEL_19:
            if ( Heap )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
            break;
          }
        }
        else
        {
          v12 = *(_WORD *)(v15 + 8LL * v10 + 2);
          if ( v12 < 0 )
            goto LABEL_18;
          RtlInitUnicodeString(
            &DestinationString,
            (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 24LL)
                   + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL) + 2LL * v12)));
        }
        appended = LdrpLangFallbackListAppendNode(a1, a3, 0, (__int16 *)va, (__int64)DestinationString.Buffer);
        if ( appended < 0 )
          goto LABEL_19;
      }
      if ( ++v10 >= 42 )
        goto LABEL_19;
    }
  }
LABEL_21:
  if ( v15 )
    RtlpFreeTraverseNodes();
  return (unsigned int)appended;
}
