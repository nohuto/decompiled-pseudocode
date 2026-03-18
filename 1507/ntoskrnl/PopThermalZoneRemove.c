/*
 * XREFs of PopThermalZoneRemove @ 0x1406B8088
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     IoCancelIrp @ 0x140073FAC (IoCancelIrp.c)
 *     KeFlushQueuedDpcs @ 0x1400D4B60 (KeFlushQueuedDpcs.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140148454 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140170B24 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x14023CAA4 (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x14023EA78 (PopDiagTraceThermalStandbyState.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140565CEC (PopThermalUpdatePassiveTimeTracking.c)
 *     PopChangeCapability @ 0x1405994A8 (PopChangeCapability.c)
 *     PopUpdateOverThrottledCount @ 0x1406B837C (PopUpdateOverThrottledCount.c)
 */

ULONG __fastcall PopThermalZoneRemove(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  ULONG result; // eax

  *(_BYTE *)(a1 + 66) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 432), Executive, 0, 0, 0LL);
  PopThermalUpdatePassiveTimeTracking(a1 + 488, *(_BYTE *)(a1 + 80));
  PopTraceThermalZonePassiveHistogram(a1);
  if ( *(_BYTE *)(a1 + 72) )
  {
    PopDiagTraceThermalStandbyState(*(struct _DEVICE_OBJECT **)(a1 + 48));
    PopAcquirePolicyLock();
    if ( !--dword_14032DCE4 && HIBYTE(PopSystemThermalInfo) == 1 )
    {
      PopThermalStandbyNotify(0);
      HIBYTE(PopSystemThermalInfo) = 0;
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
    PopChangeCapability(byte_14032E52D, 0LL);
    PopReleasePolicyLock();
  }
  PopThermalUpdateTelemetryClientCount(0, v2, v3, v4);
  result = PoDebug;
  if ( (PoDebug & 0x20) != 0 )
    return DbgPrint("Thermal Zone %p: going away\n", (const void *)a1);
  return result;
}
