/*
 * XREFs of AMLIGetNameSpaceObject @ 0x1C000E05C
 * Callers:
 *     AreDependenciesSatisfied @ 0x1C0006980 (AreDependenciesSatisfied.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0006BD4 (ACPIEcInitOpRegionHandler.c)
 *     ACPIThermalActivateConstraint @ 0x1C00079E8 (ACPIThermalActivateConstraint.c)
 *     ACPIGpeBuildEventMasks @ 0x1C00089F4 (ACPIGpeBuildEventMasks.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C000C1B8 (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIIoctlEvalPreProcessing @ 0x1C000C91C (ACPIIoctlEvalPreProcessing.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000CEB4 (ACPIThermalAcquireCoolingInterfaces.c)
 *     LinkNodeCrackPrt @ 0x1C00172D4 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001AA64 (ACPIThermalGetSensorDevice.c)
 *     ACPIDeviceRecordDependencies @ 0x1C001C82C (ACPIDeviceRecordDependencies.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C001F350 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0021828 (ACPIBuildDevicePowerNodes.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C00228C4 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0024420 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0035304 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0035830 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C003982C (ACPIIsPowerNodeMissingDependencies.c)
 *     RegisterOperationRegionHandler @ 0x1C0065B10 (RegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C0065EA0 (ACPIRootInitialize.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C007A900 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C007AB58 (ExternalRequestBiosNameDeviceAssociation.c)
 *     UnRegisterOperationRegionHandler @ 0x1C007C56C (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0086A64 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000E5B4 (AMLIGetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 */

__int64 __fastcall AMLIGetNameSpaceObject(_BYTE *Src)
{
  size_t v2; // rbx
  _BYTE *PoolWithTag; // rdi
  KIRQL v4; // bl
  unsigned int v5; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = -1LL;
  do
    ++v2;
  while ( Src[v2] );
  if ( v2 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, Src, v2);
  PoolWithTag[v2] = 0;
  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = AMLIGetNameSpaceObjectNoLock(PoolWithTag);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v5;
}
