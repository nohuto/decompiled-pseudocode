/*
 * XREFs of RtlQueryTagHeap @ 0x1800D8360
 * Callers:
 *     RtlDebugQueryTagHeap @ 0x1800ECC9C (RtlDebugQueryTagHeap.c)
 *     TpDbgDumpHeapUsage @ 0x1800F5A20 (TpDbgDumpHeapUsage.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlDebugQueryTagHeap @ 0x1800ECC9C (RtlDebugQueryTagHeap.c)
 */

PWSTR __cdecl RtlQueryTagHeap(
        PVOID HeapHandle,
        ULONG Flags,
        USHORT TagIndex,
        BOOLEAN ResetCounters,
        PRTL_HEAP_TAG_INFO TagInfo)
{
  int v8; // ecx
  WCHAR *TagHeap; // rdi
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // [rsp+30h] [rbp-28h]

  v14 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0LL;
  v8 = *((_DWORD *)HeapHandle + 29);
  if ( (v8 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  TagHeap = 0LL;
  v10 = v8 | Flags;
  if ( ((v8 | Flags) & 0x61000000) != 0 && ((v8 | Flags) & 0x10000000) == 0 )
  {
    TagHeap = (WCHAR *)RtlDebugQueryTagHeap(HeapHandle, TagInfo);
  }
  else
  {
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v14 = 1;
    }
    if ( TagIndex < *((_WORD *)HeapHandle + 112) && (v11 = *((_QWORD *)HeapHandle + 29)) != 0 )
    {
      if ( TagInfo )
      {
        TagInfo->NumberOfAllocations = *(_DWORD *)(v11 + 72LL * TagIndex);
        TagInfo->NumberOfFrees = *(_DWORD *)(v11 + 72LL * TagIndex + 4);
        TagInfo->BytesAllocated = 16LL * *(_QWORD *)(v11 + 72LL * TagIndex + 8);
      }
      if ( ResetCounters )
      {
        *(_DWORD *)(v11 + 72LL * TagIndex) = 0;
        *(_DWORD *)(v11 + 72LL * TagIndex + 4) = 0;
        *(_QWORD *)(v11 + 72LL * TagIndex + 8) = 0LL;
      }
      TagHeap = (WCHAR *)(v11 + 20 + 72LL * TagIndex);
    }
    else if ( (TagIndex & 0x8000u) != 0 && (TagIndex ^ 0x8000u) < 0x81 )
    {
      v12 = *((_QWORD *)HeapHandle + 41);
      if ( v12 )
      {
        v13 = v12 + 16LL * (TagIndex ^ 0x8000u);
        if ( TagInfo )
        {
          TagInfo->NumberOfAllocations = *(_DWORD *)v13;
          TagInfo->NumberOfFrees = *(_DWORD *)(v13 + 4);
          TagInfo->BytesAllocated = 16LL * *(_QWORD *)(v13 + 8);
        }
        if ( ResetCounters )
        {
          *(_DWORD *)v13 = 0;
          *(_DWORD *)(v13 + 4) = 0;
          *(_QWORD *)(v13 + 8) = 0LL;
        }
        TagHeap = (WCHAR *)&word_1801074EC;
      }
    }
  }
  if ( v14 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return TagHeap;
}
