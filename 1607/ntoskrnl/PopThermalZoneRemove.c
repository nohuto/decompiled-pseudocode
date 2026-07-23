/*
 * XREFs of PopThermalZoneRemove @ 0x140670634
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeFlushQueuedDpcs @ 0x140082314 (KeFlushQueuedDpcs.c)
 *     IoCancelIrp @ 0x1400A097C (IoCancelIrp.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1401250DC (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140145550 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x14020701C (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x1402092EC (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x140209714 (PopTraceCr3Mitigated.c)
 *     PopTraceZoneCr3Mitigated @ 0x140209DA4 (PopTraceZoneCr3Mitigated.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140532D7C (PopThermalUpdatePassiveTimeTracking.c)
 *     PopChangeCapability @ 0x14056E438 (PopChangeCapability.c)
 *     PopUpdateOverThrottledCount @ 0x1406707A8 (PopUpdateOverThrottledCount.c)
 */

void __fastcall PopThermalZoneRemove(__int64 a1)
{
  void *v2; // rcx

  *(_BYTE *)(a1 + 66) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 432), Executive, 0, 0, 0LL);
  PopThermalUpdatePassiveTimeTracking(a1 + 488, *(_BYTE *)(a1 + 80));
  PopTraceThermalZonePassiveHistogram(a1);
  if ( *(_BYTE *)(a1 + 72) )
  {
    PopDiagTraceThermalStandbyState(*(struct _DEVICE_OBJECT **)(a1 + 48));
    PopAcquirePolicyLock();
    --dword_140302E64;
    PopTraceZoneCr3Mitigated(dword_140302E68, a1);
    if ( !dword_140302E64 )
    {
      PopTraceCr3Mitigated();
      if ( HIBYTE(PopSystemThermalInfo) == 1 )
      {
        PopThermalStandbyNotify(0);
        HIBYTE(PopSystemThermalInfo) = 0;
      }
    }
    PopReleasePolicyLock();
  }
  if ( *(_BYTE *)(a1 + 73) )
    PopUpdateOverThrottledCount(a1);
  KeCancelTimer((PKTIMER)(a1 + 112));
  KeFlushQueuedDpcs();
  *(_BYTE *)(a1 + 65) |= 0x80u;
  if ( !--PopThermalZoneCount )
  {
    PopAcquirePolicyLock();
    PopChangeCapability(byte_140303EAD, 0LL);
    PopReleasePolicyLock();
  }
  PopThermalUpdateTelemetryClientCount(0);
  v2 = *(void **)(a1 + 848);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
