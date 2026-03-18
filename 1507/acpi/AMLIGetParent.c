/*
 * XREFs of AMLIGetParent @ 0x1C000B88C
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C00072FC (OSNotifyCreateProcessor.c)
 *     AMLIIterateParentNext @ 0x1C0007700 (AMLIIterateParentNext.c)
 *     GetOpRegionScope @ 0x1C00081A4 (GetOpRegionScope.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00090D0 (PciConfigSpaceHandlerWorker.c)
 *     IsPciDeviceWorker @ 0x1C0009AF0 (IsPciDeviceWorker.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A110 (OSNotifyCreateOperationRegion.c)
 *     IsPciBusAsyncWorker @ 0x1C000A950 (IsPciBusAsyncWorker.c)
 *     OSNotifyCreateDevice @ 0x1C000B8EC (OSNotifyCreateDevice.c)
 *     CmosConfigSpaceHandler @ 0x1C0036A20 (CmosConfigSpaceHandler.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C00380B0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0038480 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0038590 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyDeviceCheck @ 0x1C003DEA8 (OSNotifyDeviceCheck.c)
 *     AcpiSetupNativeMethodContext @ 0x1C003FCE0 (AcpiSetupNativeMethodContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C00403E0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C00407D0 (ACPIRootIrpQueryPower.c)
 *     ACPIRootInitialize @ 0x1C006640C (ACPIRootInitialize.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0078B7C (AcpiArblibAllocateArbiterInstance.c)
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
    dword_1C005A218 = 0;
    v3 += 112LL;
    byte_1C005A21C = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
