/*
 * XREFs of AMLIGetNameSpaceObject @ 0x1C000DA28
 * Callers:
 *     ACPIThermalActivateConstraint @ 0x1C0004D2C (ACPIThermalActivateConstraint.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0006480 (ACPIEcInitOpRegionHandler.c)
 *     ACPIGpeBuildEventMasks @ 0x1C0008D18 (ACPIGpeBuildEventMasks.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C000BCA8 (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIIoctlEvalPreProcessing @ 0x1C000C40C (ACPIIoctlEvalPreProcessing.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000CB88 (ACPIThermalAcquireCoolingInterfaces.c)
 *     LinkNodeCrackPrt @ 0x1C00163F8 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001A680 (ACPIThermalGetSensorDevice.c)
 *     ACPIDeviceRecordDependencies @ 0x1C001C5E4 (ACPIDeviceRecordDependencies.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C001E4C0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     AreDependenciesSatisfied @ 0x1C001FAEC (AreDependenciesSatisfied.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0021010 (ACPIBuildDevicePowerNodes.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C0022144 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0034684 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0034BB0 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0038C2C (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C003CA70 (ACPIInterruptDispatchEventDpc.c)
 *     RegisterOperationRegionHandler @ 0x1C0065B00 (RegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C006640C (ACPIRootInitialize.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C007A7A0 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C007A9F8 (ExternalRequestBiosNameDeviceAssociation.c)
 *     UnRegisterOperationRegionHandler @ 0x1C007C38C (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0086A48 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000DBA0 (AMLIGetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023800 (memmove.c)
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
