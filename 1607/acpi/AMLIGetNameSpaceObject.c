/*
 * XREFs of AMLIGetNameSpaceObject @ 0x1C0014844
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C0007414 (ACPIEcInitOpRegionHandler.c)
 *     ACPIIoctlEvalPreProcessing @ 0x1C0007998 (ACPIIoctlEvalPreProcessing.c)
 *     ACPIThermalActivateConstraint @ 0x1C00080EC (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1C000A438 (ACPIThermalGetSensorDevice.c)
 *     ACPIGpeBuildEventMasks @ 0x1C000DA68 (ACPIGpeBuildEventMasks.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C00135A4 (ACPIThermalAcquireCoolingInterfaces.c)
 *     LinkNodeCrackPrt @ 0x1C0021C44 (LinkNodeCrackPrt.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C002499C (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIDeviceRecordDependencies @ 0x1C0025914 (ACPIDeviceRecordDependencies.c)
 *     AreDependenciesSatisfied @ 0x1C00266BC (AreDependenciesSatisfied.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C00285EC (ACPIBuildDevicePowerNodes.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00286B8 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C0029580 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B530 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0043B48 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C00444EC (ACPIBuildMissingEjectionRelations.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C004B088 (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0050AE4 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIRootInitialize @ 0x1C0081114 (ACPIRootInitialize.c)
 *     RegisterOperationRegionHandler @ 0x1C008DF98 (RegisterOperationRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C009B700 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C009B958 (ExternalRequestBiosNameDeviceAssociation.c)
 *     UnRegisterOperationRegionHandler @ 0x1C009D98C (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A92B8 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C0014CB8 (AMLIGetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
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
