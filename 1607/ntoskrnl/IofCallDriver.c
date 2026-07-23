/*
 * XREFs of IofCallDriver @ 0x14002DBE0
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14008D604 (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x14008DAC8 (IoSynchronousPageWriteEx.c)
 *     IoSynchronousCallDriver @ 0x1400AAB98 (IoSynchronousCallDriver.c)
 *     CcSetValidData @ 0x1400C3EC4 (CcSetValidData.c)
 *     IoCallDriverWithTracing @ 0x1400E9A6C (IoCallDriverWithTracing.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1401120C8 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PopQueueQuerySetIrp @ 0x14012B5D8 (PopQueueQuerySetIrp.c)
 *     PopDequeueQuerySetIrp @ 0x14012BD3C (PopDequeueQuerySetIrp.c)
 *     PoCallDriver @ 0x140130BAC (PoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x140220978 (SmKmIssueVolumeIo.c)
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1403DA1F0 (IopShutdownBaseFileSystems.c)
 *     RawReadWriteDeviceControl @ 0x1403EB128 (RawReadWriteDeviceControl.c)
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 *     PnpAsynchronousCall @ 0x1403F0A74 (PnpAsynchronousCall.c)
 *     FsRtlGetFileSize @ 0x14042B324 (FsRtlGetFileSize.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     IopDeleteFile @ 0x140445270 (IopDeleteFile.c)
 *     CmpGetVolumeClusterSize @ 0x140480CE4 (CmpGetVolumeClusterSize.c)
 *     NtApphelpCacheControl @ 0x1404A50E4 (NtApphelpCacheControl.c)
 *     IopGetSetObjectId @ 0x1404B13DC (IopGetSetObjectId.c)
 *     FsRtlQueryKernelEaFile @ 0x1404B33F8 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404B5000 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryCachedVdl @ 0x1404C5AF0 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1404CA404 (IoSetInformation.c)
 *     FsRtlSetKernelEaFile @ 0x1404CB0F8 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1404CF4EC (FsRtlSetFileSize.c)
 *     WmipForwardWmiIrp @ 0x1404E80DC (WmipForwardWmiIrp.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 *     CmpFileFlushAndPurge @ 0x1404E99BC (CmpFileFlushAndPurge.c)
 *     IoVolumeDeviceToDosName @ 0x1404EB0DC (IoVolumeDeviceToDosName.c)
 *     IopGetFileInformation @ 0x1404ECF60 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x1404ED0B8 (IopQueryXxxInformation.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140500D54 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 *     IopFilterResourceRequirementsCall @ 0x14050D21C (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x14050E494 (PnpQueryInterface.c)
 *     FsRtlIssueDeviceIoControl @ 0x14052D0B8 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x14052D58C (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D6D4 (IoVolumeDeviceNameToGuidPath.c)
 *     FsRtlBalanceReads @ 0x14052E4F0 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140547288 (FsRtlIssueFileNotificationFsctl.c)
 *     IopCreateArcName @ 0x1405501C4 (IopCreateArcName.c)
 *     PopThermalWorker @ 0x140574480 (PopThermalWorker.c)
 *     ?Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z @ 0x1405752C4 (-Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z.c)
 *     PiPagePathSetState @ 0x14057D7D0 (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14061DB44 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14061EAFC (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140621760 (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x140621B70 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x140621FF8 (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x140623158 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x140623DA4 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x140628D14 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x140629438 (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x140649E68 (IopEjectDevice.c)
 *     PopBatteryQueryStatus @ 0x14066F208 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x14066F71C (PopBatteryWaitTag.c)
 *     PopFanWorker @ 0x14067324C (PopFanWorker.c)
 *     RawPerformDevIoCtrl @ 0x140683034 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140683168 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x140683588 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14069722C (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x140698A60 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x140698B10 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x1406E55F4 (VhdiVerifyBootDisk.c)
 *     VfIrpSendSynchronousIrp @ 0x14070BF30 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x14071AD00 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x14071ADC8 (ViFilterDispatchPnp.c)
 *     IopCreateArcNamesCd @ 0x140798420 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140798A1C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x1407CE504 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1407D2DF0 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1407D36AC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407D3884 (SbpStartLanman.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
