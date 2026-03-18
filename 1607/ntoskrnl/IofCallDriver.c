/*
 * XREFs of IofCallDriver @ 0x14002E060
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14008DEA4 (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x14008E368 (IoSynchronousPageWriteEx.c)
 *     IoSynchronousCallDriver @ 0x1400AC630 (IoSynchronousCallDriver.c)
 *     CcSetValidData @ 0x1400C6024 (CcSetValidData.c)
 *     IoCallDriverWithTracing @ 0x1400EBBFC (IoCallDriverWithTracing.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140111B64 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PopQueueQuerySetIrp @ 0x14012B068 (PopQueueQuerySetIrp.c)
 *     PopDequeueQuerySetIrp @ 0x14012B7CC (PopDequeueQuerySetIrp.c)
 *     PoCallDriver @ 0x14013063C (PoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x140220B4C (SmKmIssueVolumeIo.c)
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1403DA1F0 (IopShutdownBaseFileSystems.c)
 *     RawReadWriteDeviceControl @ 0x1403E9AF8 (RawReadWriteDeviceControl.c)
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 *     PnpAsynchronousCall @ 0x1403F1BB0 (PnpAsynchronousCall.c)
 *     FsRtlGetFileSize @ 0x14042C454 (FsRtlGetFileSize.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
 *     IopDeleteFile @ 0x1404463A0 (IopDeleteFile.c)
 *     CmpGetVolumeClusterSize @ 0x140481F90 (CmpGetVolumeClusterSize.c)
 *     NtApphelpCacheControl @ 0x1404B93AC (NtApphelpCacheControl.c)
 *     IopFilterResourceRequirementsCall @ 0x1404C8FAC (IopFilterResourceRequirementsCall.c)
 *     IopGetSetObjectId @ 0x1404CB9B0 (IopGetSetObjectId.c)
 *     PnpQueryInterface @ 0x1404CDDFC (PnpQueryInterface.c)
 *     FsRtlQueryKernelEaFile @ 0x1404CE198 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404D1560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryCachedVdl @ 0x1404E2B8C (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1404E8078 (IoSetInformation.c)
 *     FsRtlSetKernelEaFile @ 0x1404E8D6C (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1404ED434 (FsRtlSetFileSize.c)
 *     WmipForwardWmiIrp @ 0x14050514C (WmipForwardWmiIrp.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 *     CmpFileFlushAndPurge @ 0x140506A2C (CmpFileFlushAndPurge.c)
 *     IoVolumeDeviceToDosName @ 0x14050814C (IoVolumeDeviceToDosName.c)
 *     IopGetFileInformation @ 0x140509FD0 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14050A128 (IopQueryXxxInformation.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x14051DCA4 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IopGetSetSecurityObject @ 0x140521470 (IopGetSetSecurityObject.c)
 *     FsRtlIssueDeviceIoControl @ 0x14052CB78 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x14052D04C (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D194 (IoVolumeDeviceNameToGuidPath.c)
 *     FsRtlBalanceReads @ 0x14052DFB0 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140546D48 (FsRtlIssueFileNotificationFsctl.c)
 *     IopCreateArcName @ 0x14054FC84 (IopCreateArcName.c)
 *     PopThermalWorker @ 0x140573F40 (PopThermalWorker.c)
 *     ?Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z @ 0x140574D84 (-Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z.c)
 *     PiPagePathSetState @ 0x14057D324 (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14061DA90 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14061EA48 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x1406216AC (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x140621ABC (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x140621F44 (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x1406230A4 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x140623CF0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x140628C60 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x140629384 (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x140649D84 (IopEjectDevice.c)
 *     PopBatteryQueryStatus @ 0x14066F124 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x14066F638 (PopBatteryWaitTag.c)
 *     PopFanWorker @ 0x140673168 (PopFanWorker.c)
 *     RawPerformDevIoCtrl @ 0x140682F50 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140683084 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1406834A4 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x140697148 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x14069897C (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x140698A2C (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x1406E54BC (VhdiVerifyBootDisk.c)
 *     VfIrpSendSynchronousIrp @ 0x14070BF00 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x14071AD00 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x14071ADC8 (ViFilterDispatchPnp.c)
 *     IopCreateArcNamesCd @ 0x140798420 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140798A1C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x1407CE504 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1407D2DF0 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1407D36AC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407D3884 (SbpStartLanman.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *v2; // rax
  UCHAR MajorFunction; // r9
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( pIofCallDriver )
    return pIofCallDriver(DeviceObject, Irp, retaddr);
  if ( --Irp->CurrentLocation <= 0 )
    KeBugCheckEx(0x35u, (ULONG_PTR)Irp, 0LL, 0LL, 0LL);
  v2 = Irp->Tail.Overlay.CurrentStackLocation - 1;
  Irp->Tail.Overlay.CurrentStackLocation = v2;
  MajorFunction = v2->MajorFunction;
  v2->DeviceObject = DeviceObject;
  if ( MajorFunction == 22 && (unsigned __int8)(v2->MinorFunction - 2) <= 1u )
    return IopPoHandleIrp(Irp);
  else
    return ((__int64 (*)(void))DeviceObject->DriverObject->MajorFunction[MajorFunction])();
}
