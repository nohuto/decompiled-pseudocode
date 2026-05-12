/*
 * XREFs of StorPortBusy @ 0x1C002D6B0
 * Callers:
 *     StorPortBusyVrfy @ 0x1C0062110 (StorPortBusyVrfy.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000C24C (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C00189D4 (RaidQueueDeferredItem.c)
 *     RaidAllocateDeferredItem @ 0x1C0019BA0 (RaidAllocateDeferredItem.c)
 *     WPP_SF_qD @ 0x1C002AF64 (WPP_SF_qD.c)
 */

char __fastcall StorPortBusy(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  PSLIST_ENTRY DeferredItem; // rax
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C004F2A0 & 0x200) != 0 )
    DbgLogRequest(v3, 18, retaddr, **(_QWORD **)(a1 - 16), a2, 0LL, 0LL);
  if ( !v3 )
    return 0;
  ++*(_DWORD *)(v3 + 5448);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    LODWORD(v6) = a2;
    WPP_SF_qD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x15u,
      (__int64)&WPP_adf5a490639137350fe391398fd0549f_Traceguids,
      v3,
      v6);
  }
  DeferredItem = RaidAllocateDeferredItem((union _SLIST_HEADER *)(v3 + 1088));
  if ( !DeferredItem )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C004F2A0 & 0x800) != 0 )
      DbgLogRequest(v3, 22, retaddr, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  LODWORD(DeferredItem[2].Next) = 7;
  *((_DWORD *)&DeferredItem[2].Next + 2) = a2;
  RaidQueueDeferredItem(v3 + 1088, DeferredItem);
  return 1;
}
