/*
 * XREFs of PopThermalZoneRemove @ 0x140638118
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeFlushQueuedDpcs @ 0x14009C070 (KeFlushQueuedDpcs.c)
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14011A180 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140142C6C (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x1401EE650 (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x1401F06E4 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1401F0BE4 (PopTraceCr3Mitigated.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1404F742C (PopThermalUpdatePassiveTimeTracking.c)
 *     PopChangeCapability @ 0x14053DEF8 (PopChangeCapability.c)
 *     PopUpdateOverThrottledCount @ 0x140638278 (PopUpdateOverThrottledCount.c)
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
    if ( !--dword_1402DD944 )
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
    PopChangeCapability(byte_1402DDF6D, 0LL);
    PopReleasePolicyLock();
  }
  PopThermalUpdateTelemetryClientCount(0);
  v2 = *(void **)(a1 + 832);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
