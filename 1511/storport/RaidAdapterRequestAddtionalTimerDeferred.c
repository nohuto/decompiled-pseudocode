/*
 * XREFs of RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0007758
 * Callers:
 *     StorpRequestTimer @ 0x1C00064C0 (StorpRequestTimer.c)
 * Callees:
 *     RaidAllocateDeferredItem @ 0x1C00077C0 (RaidAllocateDeferredItem.c)
 *     RaidQueueDeferredItem @ 0x1C0014994 (RaidQueueDeferredItem.c)
 */

__int64 __fastcall RaidAdapterRequestAddtionalTimerDeferred(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  __int64 DeferredItem; // rax

  v4 = a1 + 1088;
  DeferredItem = RaidAllocateDeferredItem(a1 + 1088);
  if ( DeferredItem )
  {
    *(_DWORD *)(DeferredItem + 32) = 11;
    *(_QWORD *)(DeferredItem + 40) = a2;
    *(_QWORD *)(DeferredItem + 48) = a3;
    *(_DWORD *)(DeferredItem + 56) = a4;
    RaidQueueDeferredItem(v4, DeferredItem);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    return 3238002691LL;
  }
}
