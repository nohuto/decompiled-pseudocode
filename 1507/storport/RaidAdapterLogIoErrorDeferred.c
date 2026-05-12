/*
 * XREFs of RaidAdapterLogIoErrorDeferred @ 0x1C0021AD8
 * Callers:
 *     StorPortLogError @ 0x1C0027EF0 (StorPortLogError.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0012944 (RaidQueueDeferredItem.c)
 *     RaidAllocateDeferredItem @ 0x1C0025DE0 (RaidAllocateDeferredItem.c)
 */

char __fastcall RaidAdapterLogIoErrorDeferred(__int64 a1, char a2, char a3, char a4, int a5, int a6)
{
  __int64 v6; // rbx
  __int64 DeferredItem; // rax

  v6 = a1 + 1088;
  DeferredItem = RaidAllocateDeferredItem(a1 + 1088);
  if ( DeferredItem )
  {
    *(_DWORD *)(DeferredItem + 32) = 2;
    *(_BYTE *)(DeferredItem + 36) = a2;
    *(_BYTE *)(DeferredItem + 37) = a3;
    *(_BYTE *)(DeferredItem + 38) = a4;
    *(_DWORD *)(DeferredItem + 48) = a5;
    *(_DWORD *)(DeferredItem + 52) = a6;
    LOBYTE(DeferredItem) = RaidQueueDeferredItem(v6, (struct _SLIST_ENTRY *)DeferredItem);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
  return DeferredItem;
}
