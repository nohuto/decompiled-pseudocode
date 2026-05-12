/*
 * XREFs of RaidAdapterLogIoErrorDeferred @ 0x1C0024118
 * Callers:
 *     StorPortLogError @ 0x1C002A160 (StorPortLogError.c)
 * Callees:
 *     RaidAllocateDeferredItem @ 0x1C00077C0 (RaidAllocateDeferredItem.c)
 *     RaidQueueDeferredItem @ 0x1C0014994 (RaidQueueDeferredItem.c)
 */

char __fastcall RaidAdapterLogIoErrorDeferred(union _SLIST_HEADER *a1, char a2, char a3, char a4, int a5, int a6)
{
  __int64 v6; // rbx
  PSLIST_ENTRY DeferredItem; // rax

  v6 = (__int64)&a1[68];
  DeferredItem = RaidAllocateDeferredItem(a1 + 68);
  if ( DeferredItem )
  {
    LODWORD(DeferredItem[2].Next) = 2;
    BYTE4(DeferredItem[2].Next) = a2;
    BYTE5(DeferredItem[2].Next) = a3;
    BYTE6(DeferredItem[2].Next) = a4;
    LODWORD(DeferredItem[3].Next) = a5;
    HIDWORD(DeferredItem[3].Next) = a6;
    LOBYTE(DeferredItem) = RaidQueueDeferredItem(v6, DeferredItem);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
  return (char)DeferredItem;
}
