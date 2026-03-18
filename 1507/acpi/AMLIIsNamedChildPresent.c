/*
 * XREFs of AMLIIsNamedChildPresent @ 0x1C000D680
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C0006F70 (EnableDisableCMOSRegions.c)
 *     GetPciAddressWorker @ 0x1C00095A0 (GetPciAddressWorker.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000A590 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000B440 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildPdo @ 0x1C00192F8 (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C001AA90 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDockIrpQueryPower @ 0x1C00341C0 (ACPIDockIrpQueryPower.c)
 *     ACPIBusIrpQueryPower @ 0x1C0035C30 (ACPIBusIrpQueryPower.c)
 *     CmosGetOpRegionType @ 0x1C0036BC0 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C00387D0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00388F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIFilterIrpQueryPower @ 0x1C003B670 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C00407D0 (ACPIRootIrpQueryPower.c)
 *     ACPIInternalSetProximityDomain @ 0x1C0067AA0 (ACPIInternalSetProximityDomain.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0069CB0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0069EBC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C006A028 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C006A150 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0078520 (ACPIDockIrpQueryCapabilities.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsNamedChildPresent(__int64 a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // rbx

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v6 = v5;
  if ( v5 )
  {
    while ( a2 != *(_DWORD *)(v6 + 32) )
    {
      v6 = *(_QWORD *)(v6 + 8);
      if ( v6 == v5 )
      {
        v6 = 0LL;
        break;
      }
      if ( !v6 )
        break;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return v6 != 0;
}
