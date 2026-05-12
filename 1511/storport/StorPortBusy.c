/*
 * XREFs of StorPortBusy @ 0x1C0029B20
 * Callers:
 *     StorPortBusyVrfy @ 0x1C005A110 (StorPortBusyVrfy.c)
 * Callees:
 *     RaidAllocateDeferredItem @ 0x1C00077C0 (RaidAllocateDeferredItem.c)
 *     DbgLogRequest @ 0x1C0014194 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0014994 (RaidQueueDeferredItem.c)
 *     WPP_SF_qD @ 0x1C0027BDC (WPP_SF_qD.c)
 */

char __fastcall StorPortBusy(__int64 a1, unsigned int a2)
{
  union _SLIST_HEADER *v3; // rbx
  PSLIST_ENTRY DeferredItem; // rax
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = **(union _SLIST_HEADER ***)(a1 - 16);
  if ( (qword_1C0048010 & 0x200) != 0 )
    DbgLogRequest((__int64)v3, 18, retaddr, **(_QWORD **)(a1 - 16), a2, 0LL, 0LL);
  if ( !v3 )
    return 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    LODWORD(v6) = a2;
    WPP_SF_qD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x15u,
      (__int64)&WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids,
      v3,
      v6);
  }
  DeferredItem = RaidAllocateDeferredItem(v3 + 68);
  if ( !DeferredItem )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0048010 & 0x800) != 0 )
      DbgLogRequest((__int64)v3, 22, retaddr, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  LODWORD(DeferredItem[2].Next) = 7;
  *((_DWORD *)&DeferredItem[2].Next + 2) = a2;
  RaidQueueDeferredItem((__int64)&v3[68], DeferredItem);
  return 1;
}
