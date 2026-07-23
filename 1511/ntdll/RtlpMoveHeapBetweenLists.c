/*
 * XREFs of RtlpMoveHeapBetweenLists @ 0x180055FE4
 * Callers:
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x180055E30 (RtlProtectHeap.c)
 *     RtlDestroyHeap @ 0x1800590E0 (RtlDestroyHeap.c)
 *     RtlpHpMetadataHeapInit @ 0x18005ABC0 (RtlpHpMetadataHeapInit.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpAddHeapToUnprotectedList @ 0x180056084 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x180056190 (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x1800562F4 (RtlpAddHeapToProtectedList.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x18005636C (RtlpRemoveHeapFromProtectedList.c)
 */

NTSTATUS __fastcall RtlpMoveHeapBetweenLists(__int64 a1, int a2, int a3, int a4)
{
  int v8; // edi
  int v9; // ebx
  NTSTATUS result; // eax

  if ( !a4 )
    result = RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        result = RtlpRemoveHeapFromProtectedList(a1);
    }
    else
    {
      result = RtlpRemoveHeapFromUnprotectedList(a1);
    }
  }
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        result = RtlpAddHeapToProtectedList(a1);
    }
    else
    {
      result = RtlpAddHeapToUnprotectedList(a1);
    }
  }
  if ( !a4 )
    return RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return result;
}
