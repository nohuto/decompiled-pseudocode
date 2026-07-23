/*
 * XREFs of RtlpMoveHeapBetweenLists @ 0x18002D944
 * Callers:
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x18002D790 (RtlProtectHeap.c)
 *     RtlDestroyHeap @ 0x180052050 (RtlDestroyHeap.c)
 *     RtlpHpMetadataHeapInit @ 0x18007F410 (RtlpHpMetadataHeapInit.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x18002C844 (RtlpRemoveHeapFromProtectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x18002C8B8 (RtlpAddHeapToProtectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x18002CBC8 (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18002D59C (RtlpAddHeapToUnprotectedList.c)
 */

void __fastcall RtlpMoveHeapBetweenLists(__int64 a1, int a2, int a3, int a4)
{
  int v8; // edi
  int v9; // ebx

  if ( !a4 )
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        RtlpRemoveHeapFromProtectedList(a1);
    }
    else
    {
      RtlpRemoveHeapFromUnprotectedList(a1);
    }
  }
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        RtlpAddHeapToProtectedList(a1);
    }
    else
    {
      RtlpAddHeapToUnprotectedList(a1);
    }
  }
  if ( !a4 )
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
}
