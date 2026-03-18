/*
 * XREFs of AMLIIsNamedChildPresent @ 0x1C0013F30
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C0006EB0 (EnableDisableCMOSRegions.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C000AEB0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000E600 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000F530 (ACPIBuildProcessDevicePhaseAdr.c)
 *     GetPciAddressWorker @ 0x1C001D450 (GetPciAddressWorker.c)
 *     ACPIBuildPdo @ 0x1C0021478 (ACPIBuildPdo.c)
 *     ACPIDockIrpQueryPower @ 0x1C0043250 (ACPIDockIrpQueryPower.c)
 *     ACPIBusIrpQueryPower @ 0x1C0046540 (ACPIBusIrpQueryPower.c)
 *     CmosGetOpRegionType @ 0x1C0048230 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004A930 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004AAD0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIFilterIrpQueryPower @ 0x1C004E840 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C00560E0 (ACPIRootIrpQueryPower.c)
 *     ACPIInternalSetProximityDomain @ 0x1C0085C6C (ACPIInternalSetProximityDomain.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C00872CC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C0087434 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0087560 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C008E800 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0098150 (ACPIDockIrpQueryCapabilities.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsNamedChildPresent(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 *v7; // r8

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  if ( v7 == v6 )
  {
LABEL_4:
    v6 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v6 + 10) )
    {
      v6 = (__int64 *)*v6;
      if ( v7 == v6 )
        goto LABEL_4;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return v6 != 0LL;
}
