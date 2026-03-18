/*
 * XREFs of AMLIGetParent @ 0x1C000B95C
 * Callers:
 *     AMLIIterateParentNext @ 0x1C00081F4 (AMLIIterateParentNext.c)
 *     GetOpRegionScope @ 0x1C00087E4 (GetOpRegionScope.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0008D90 (PciConfigSpaceHandlerWorker.c)
 *     IsPciDeviceWorker @ 0x1C00097D0 (IsPciDeviceWorker.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A030 (OSNotifyCreateOperationRegion.c)
 *     IsPciBusAsyncWorker @ 0x1C000AA20 (IsPciBusAsyncWorker.c)
 *     OSNotifyCreateDevice @ 0x1C000BCD0 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateProcessor @ 0x1C0021458 (OSNotifyCreateProcessor.c)
 *     CmosConfigSpaceHandler @ 0x1C0037610 (CmosConfigSpaceHandler.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0038CA0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0039070 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0039180 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyDeviceCheck @ 0x1C003DA98 (OSNotifyDeviceCheck.c)
 *     AcpiSetupNativeMethodContext @ 0x1C003F820 (AcpiSetupNativeMethodContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C003FE90 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C0040280 (ACPIRootIrpQueryPower.c)
 *     ACPIRootInitialize @ 0x1C0065EA0 (ACPIRootInitialize.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0078CDC (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetParent(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v3 )
  {
    dword_1C005A228 = 0;
    v3 += 112LL;
    byte_1C005A22C = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
