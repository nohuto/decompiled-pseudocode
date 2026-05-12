/*
 * XREFs of StorPortPauseDevice @ 0x1C00072E0
 * Callers:
 *     StorPortPauseDeviceVrfy @ 0x1C00565C0 (StorPortPauseDeviceVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0005768 (RaidAdapterFindUnit.c)
 *     RaidPauseUnitQueue @ 0x1C0007450 (RaidPauseUnitQueue.c)
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0012944 (RaidQueueDeferredItem.c)
 *     WPP_SF_ddd @ 0x1C002572C (WPP_SF_ddd.c)
 *     Template_pqqccc @ 0x1C002A170 (Template_pqqccc.c)
 */

char __fastcall StorPortPauseDevice(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  int v8; // ebx
  __int64 v9; // rsi
  int v10; // ecx
  __int64 Unit; // r15
  _DWORD *v12; // rdi
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v15; // [rsp+90h] [rbp+8h]

  v8 = a1;
  v9 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0044010 & 0x200) != 0 )
    DbgLogRequest(v9, 16, (_DWORD)retaddr, v9, a5, a4 | (unsigned __int64)((a3 | (a2 << 8)) << 8), 0LL);
  v10 = 255;
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 56);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 4) != 0 )
    Template_pqqccc(v10, a2, a3, v8, a5, v10, a2, a3, a4);
  if ( v9 )
  {
    LOBYTE(v15) = a2;
    BYTE1(v15) = a3;
    BYTE2(v15) = a4;
    Unit = RaidAdapterFindUnit(v9, v15);
    if ( Unit )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        WPP_SF_ddd(
          WPP_GLOBAL_Control->AttachedDevice,
          17LL,
          &WPP_8a1d37565fd3ed53073ecf5f585bed2d_Traceguids,
          a2,
          a3,
          a4);
      }
      v12 = (_DWORD *)(Unit + 992);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1008), 134684676, 134684677) != 134684677 )
        v12 = 0LL;
      if ( v12 )
      {
        v12[8] = 5;
        v12[9] = v15;
        v12[10] = a5;
        RaidPauseUnitQueue(Unit);
        RaidQueueDeferredItem(v9 + 1088, v12);
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C0044010 & 0x800) != 0 )
        DbgLogRequest(v9, 22, (_DWORD)retaddr, 0, 0LL, 0LL, 0LL);
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_ddd(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_8a1d37565fd3ed53073ecf5f585bed2d_Traceguids, a2, a3, a4);
    }
  }
  return 0;
}
