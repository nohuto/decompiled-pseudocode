/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180004240
 * Callers:
 *     ??_GCDwmInitTelemetryAggregator@@UEAAPEAXI@Z @ 0x1800014C0 (--_GCDwmInitTelemetryAggregator@@UEAAPEAXI@Z.c)
 *     ??_E?$CAggregateValuesBase@W4DwmInitTelemetryAggregateType@@I@@UEAAPEAXI@Z @ 0x180001510 (--_E-$CAggregateValuesBase@W4DwmInitTelemetryAggregateType@@I@@UEAAPEAXI@Z.c)
 *     ??1?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAA@XZ @ 0x180003724 (--1-$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A.c)
 *     ??_G?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAPEAXI@Z @ 0x180003A80 (--_G-$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0.c)
 *     ??_E?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAPEAXI@Z @ 0x180003AC0 (--_E-$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$.c)
 *     ??_GHeapBase@WPF@@UEAAPEAXI@Z @ 0x180004080 (--_GHeapBase@WPF@@UEAAPEAXI@Z.c)
 *     ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x180004B50 (--_ECPortClientRefCounted@@MEAAPEAXI@Z.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x180005520 (--_ECPortClient@@UEAAPEAXI@Z.c)
 *     ??1CDwmInitEventManager@DwmInitAsimov@@QEAA@XZ @ 0x180006270 (--1CDwmInitEventManager@DwmInitAsimov@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAAXXZ @ 0x180006788 (-RemoveAll@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@.c)
 *     ?InitHashTable@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAA_NI_N@Z @ 0x18000683C (-InitHashTable@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventMana.c)
 *     ?Rehash@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAAXI@Z @ 0x1800068D8 (-Rehash@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4D.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  (*(void (__fastcall **)(LPVOID, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
}
