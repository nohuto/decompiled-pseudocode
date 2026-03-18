/*
 * XREFs of AMLIGetParent @ 0x1C000D028
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C000B1B0 (OSNotifyCreateProcessor.c)
 *     AMLIIterateParentNext @ 0x1C000B518 (AMLIIterateParentNext.c)
 *     IsPciDeviceWorker @ 0x1C000BCF0 (IsPciDeviceWorker.c)
 *     GetOpRegionScope @ 0x1C000C06C (GetOpRegionScope.c)
 *     OSNotifyCreateDevice @ 0x1C000CC5C (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000D088 (OSNotifyCreateOperationRegion.c)
 *     IsPciBusAsyncWorker @ 0x1C000DD00 (IsPciBusAsyncWorker.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C001CF10 (PciConfigSpaceHandlerWorker.c)
 *     CmosConfigSpaceHandler @ 0x1C0048090 (CmosConfigSpaceHandler.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0049E20 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C004A3D0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004A560 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyDeviceCheck @ 0x1C00512D0 (OSNotifyDeviceCheck.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0053C90 (AcpiSetupNativeMethodContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0054EC0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C00560E0 (ACPIRootIrpQueryPower.c)
 *     ACPIRootInitialize @ 0x1C0081114 (ACPIRootInitialize.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0099468 (AcpiArblibAllocateArbiterInstance.c)
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
    dword_1C0074698 = 0;
    v3 += 120LL;
    byte_1C007469C = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
