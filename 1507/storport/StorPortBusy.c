/*
 * XREFs of StorPortBusy @ 0x1C0027870
 * Callers:
 *     StorPortBusyVrfy @ 0x1C0056110 (StorPortBusyVrfy.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0012944 (RaidQueueDeferredItem.c)
 *     WPP_SF_qD @ 0x1C0025AB4 (WPP_SF_qD.c)
 *     RaidAllocateDeferredItem @ 0x1C0025DE0 (RaidAllocateDeferredItem.c)
 */

char __fastcall StorPortBusy(__int64 a1, unsigned int a2)
{
  union _SLIST_HEADER *v3; // rbx
  PSLIST_ENTRY DeferredItem; // rax
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = **(union _SLIST_HEADER ***)(a1 - 16);
  if ( (qword_1C0044010 & 0x200) != 0 )
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
      (__int64)&WPP_8a1d37565fd3ed53073ecf5f585bed2d_Traceguids,
      v3,
      v6);
  }
  DeferredItem = RaidAllocateDeferredItem(v3 + 68);
  if ( !DeferredItem )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0044010 & 0x800) != 0 )
      DbgLogRequest((__int64)v3, 22, retaddr, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  LODWORD(DeferredItem[2].Next) = 7;
  *((_DWORD *)&DeferredItem[2].Next + 2) = a2;
  RaidQueueDeferredItem((__int64)&v3[68], DeferredItem);
  return 1;
}
