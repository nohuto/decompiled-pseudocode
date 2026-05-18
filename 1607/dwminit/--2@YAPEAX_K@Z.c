/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x180004218
 * Callers:
 *     _dynamic_initializer_for__gDwmInitTelemetryAggregator__ @ 0x180001140 (_dynamic_initializer_for__gDwmInitTelemetryAggregator__.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x1800050E4 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ??0CDwmInitEventManager@DwmInitAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x1800061F8 (--0CDwmInitEventManager@DwmInitAsimov@@AEAA@PEBU_TlgProvider_t@@@Z.c)
 *     ?InitHashTable@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAA_NI_N@Z @ 0x18000683C (-InitHashTable@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventMana.c)
 *     ?Rehash@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAAXI@Z @ 0x1800068D8 (-Rehash@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800081B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall operator new(__int64 a1)
{
  return (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(WPF::g_pProcessHeap, a1);
}
