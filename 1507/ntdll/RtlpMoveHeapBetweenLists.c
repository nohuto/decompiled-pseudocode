/*
 * XREFs of RtlpMoveHeapBetweenLists @ 0x180005FE4
 * Callers:
 *     RtlpHpMetadataHeapInit @ 0x1800036D0 (RtlpHpMetadataHeapInit.c)
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x180005E30 (RtlProtectHeap.c)
 * Callees:
 *     RtlpAddHeapToUnprotectedList @ 0x180006084 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x180006178 (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x1800062DC (RtlpAddHeapToProtectedList.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x180006354 (RtlpRemoveHeapFromProtectedList.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
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
