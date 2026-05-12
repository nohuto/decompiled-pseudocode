/*
 * XREFs of StorPortReady @ 0x1C002A300
 * Callers:
 *     StorPortReadyVrfy @ 0x1C005A5E0 (StorPortReadyVrfy.c)
 * Callees:
 *     RaidAllocateDeferredItem @ 0x1C00077C0 (RaidAllocateDeferredItem.c)
 *     DbgLogRequest @ 0x1C0014194 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0014994 (RaidQueueDeferredItem.c)
 *     WPP_SF_q @ 0x1C002786C (WPP_SF_q.c)
 */

char __fastcall StorPortReady(__int64 a1)
{
  union _SLIST_HEADER *v1; // rbx
  PSLIST_ENTRY DeferredItem; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = **(union _SLIST_HEADER ***)(a1 - 16);
  if ( (qword_1C0048010 & 0x200) != 0 )
    DbgLogRequest((__int64)v1, 19, retaddr, **(_QWORD **)(a1 - 16), 0LL, 0LL, 0LL);
  if ( !v1 )
    return 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x16u,
      (__int64)&WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids,
      v1);
  }
  DeferredItem = RaidAllocateDeferredItem(v1 + 68);
  if ( !DeferredItem )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0048010 & 0x800) != 0 )
      DbgLogRequest((__int64)v1, 22, retaddr, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  LODWORD(DeferredItem[2].Next) = 8;
  RaidQueueDeferredItem((__int64)&v1[68], DeferredItem);
  return 1;
}
