/*
 * XREFs of StorPortReady @ 0x1C002DFC0
 * Callers:
 *     StorPortReadyVrfy @ 0x1C00625E0 (StorPortReadyVrfy.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000C24C (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C00189D4 (RaidQueueDeferredItem.c)
 *     RaidAllocateDeferredItem @ 0x1C0019BA0 (RaidAllocateDeferredItem.c)
 *     WPP_SF_q @ 0x1C002AF28 (WPP_SF_q.c)
 */

char __fastcall StorPortReady(__int64 a1)
{
  union _SLIST_HEADER *v1; // rbx
  PSLIST_ENTRY DeferredItem; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = **(union _SLIST_HEADER ***)(a1 - 16);
  if ( (qword_1C004F2A0 & 0x200) != 0 )
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
      (__int64)&WPP_adf5a490639137350fe391398fd0549f_Traceguids,
      v1);
  }
  DeferredItem = RaidAllocateDeferredItem(v1 + 68);
  if ( !DeferredItem )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C004F2A0 & 0x800) != 0 )
      DbgLogRequest((__int64)v1, 22, retaddr, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  LODWORD(DeferredItem[2].Next) = 8;
  RaidQueueDeferredItem((__int64)&v1[68], DeferredItem);
  return 1;
}
