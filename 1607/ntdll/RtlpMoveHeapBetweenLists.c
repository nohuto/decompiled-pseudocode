/*
 * XREFs of RtlpMoveHeapBetweenLists @ 0x18002D954
 * Callers:
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x18002D7A0 (RtlProtectHeap.c)
 *     RtlDestroyHeap @ 0x180052060 (RtlDestroyHeap.c)
 *     RtlpHpMetadataHeapInit @ 0x18007F420 (RtlpHpMetadataHeapInit.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x18002C854 (RtlpRemoveHeapFromProtectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x18002C8C8 (RtlpAddHeapToProtectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x18002CBD8 (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18002D5AC (RtlpAddHeapToUnprotectedList.c)
 */

void __fastcall RtlpMoveHeapBetweenLists(__int64 a1, int a2, int a3, int a4)
{
  int v8; // edi
  int v9; // ebx

  if ( !a4 )
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
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
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
}
