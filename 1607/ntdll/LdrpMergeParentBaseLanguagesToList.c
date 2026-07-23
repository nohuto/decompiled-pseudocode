/*
 * XREFs of LdrpMergeParentBaseLanguagesToList @ 0x180067178
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x180041048 (LdrpMergeLangFallbackLists.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079BF0 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007B0D0 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     LdrpLangFallbackListAppendNode @ 0x180043BD0 (LdrpLangFallbackListAppendNode.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800448A0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpFreeTraverseNodes @ 0x18006A7D0 (RtlpFreeTraverseNodes.c)
 *     RtlpTraverseParents @ 0x18006A80C (RtlpTraverseParents.c)
 *     RtlpCreateTraverseNodes @ 0x18006A8A0 (RtlpCreateTraverseNodes.c)
 */

__int64 LdrpMergeParentBaseLanguagesToList(__int64 *a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v6; // edi
  wchar_t *Heap; // rsi
  int appended; // ebx
  __int16 v10; // di
  unsigned __int16 v11; // dx
  __int16 v12; // dx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+30h] BYREF
  va_list va; // [rsp+90h] [rbp+50h] BYREF

  va_start(va, a4);
  BaseAddress = 0LL;
  v6 = a2;
  Heap = 0LL;
  if ( !a1 || !*a1 || !a2 || !a3 )
  {
    appended = -1073741811;
    goto LABEL_19;
  }
  appended = RtlpCreateTraverseNodes(&BaseAddress);
  if ( appended >= 0 )
  {
    if ( !(unsigned __int8)RtlpTraverseParents(v6, (_DWORD)BaseAddress, a3, a4, 0, 42) )
    {
      appended = -1073741823;
      goto LABEL_21;
    }
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    if ( !Heap )
    {
      appended = -1073741801;
      goto LABEL_21;
    }
    v10 = 0;
    while ( 1 )
    {
      if ( v10 && *((_DWORD *)BaseAddress + 2 * v10 + 1) )
      {
        v11 = *((_WORD *)BaseAddress + 4 * v10);
        if ( v11 )
        {
          DestinationString.Buffer = Heap;
          *(_DWORD *)&DestinationString.Length = 11141120;
          if ( !RtlLCIDToCultureName(v11, &DestinationString) )
          {
LABEL_18:
            appended = -1073741595;
LABEL_19:
            if ( Heap )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
            break;
          }
        }
        else
        {
          v12 = *((_WORD *)BaseAddress + 4 * v10 + 1);
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
  if ( BaseAddress )
    RtlpFreeTraverseNodes(BaseAddress);
  return (unsigned int)appended;
}
