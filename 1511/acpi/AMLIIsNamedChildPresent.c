/*
 * XREFs of AMLIIsNamedChildPresent @ 0x1C000DC00
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C0007690 (EnableDisableCMOSRegions.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0007880 (ACPIDispatchIrpDepPdoQueryID.c)
 *     GetPciAddressWorker @ 0x1C0009260 (GetPciAddressWorker.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000A660 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000B510 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildPdo @ 0x1C0019284 (ACPIBuildPdo.c)
 *     ACPIDockIrpQueryPower @ 0x1C0034F00 (ACPIDockIrpQueryPower.c)
 *     ACPIBusIrpQueryPower @ 0x1C00368F0 (ACPIBusIrpQueryPower.c)
 *     CmosGetOpRegionType @ 0x1C00377B0 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C00393C0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00394E0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIFilterIrpQueryPower @ 0x1C003BA00 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C0040280 (ACPIRootIrpQueryPower.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C00672C0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C00674BC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C0067628 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0067750 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIInternalSetProximityDomain @ 0x1C006FB70 (ACPIInternalSetProximityDomain.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0078680 (ACPIDockIrpQueryCapabilities.c)
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
