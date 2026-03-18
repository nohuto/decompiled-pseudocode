/*
 * XREFs of IofCallDriver @ 0x140048540
 * Callers:
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     CcSetValidData @ 0x1400CF694 (CcSetValidData.c)
 *     IoSynchronousPageWriteEx @ 0x140112630 (IoSynchronousPageWriteEx.c)
 *     IoSynchronousCallDriver @ 0x140127F70 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x14012D4C8 (IoAsynchronousPageWrite.c)
 *     PopDequeueQuerySetIrp @ 0x14013682C (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x14013733C (PopQueueQuerySetIrp.c)
 *     HalExamineMBR @ 0x1401389D8 (HalExamineMBR.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140139A14 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PoCallDriver @ 0x140139D50 (PoCallDriver.c)
 *     xHalGetPartialGeometry @ 0x1401E48AC (xHalGetPartialGeometry.c)
 *     SmKmIssueVolumeIo @ 0x1402579C0 (SmKmIssueVolumeIo.c)
 *     IoShutdownSystem @ 0x1403FE27C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1403FE590 (IopShutdownBaseFileSystems.c)
 *     FsRtlQueryCachedVdl @ 0x14040AA88 (FsRtlQueryCachedVdl.c)
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 *     RawReadWriteDeviceControl @ 0x14040BAF0 (RawReadWriteDeviceControl.c)
 *     RawQueryFsSizeInfo @ 0x14040C604 (RawQueryFsSizeInfo.c)
 *     sub_14040C7E8 @ 0x14040C7E8 (sub_14040C7E8.c)
 *     IopGetSetObjectId @ 0x14040D278 (IopGetSetObjectId.c)
 *     IoVolumeDeviceToDosName @ 0x14040D36C (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x14040D608 (NtApphelpCacheControl.c)
 *     PnpQueryInterface @ 0x14040DEB4 (PnpQueryInterface.c)
 *     IopGetFileInformation @ 0x140428218 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14042A8D8 (IopQueryXxxInformation.c)
 *     IopFilterResourceRequirementsCall @ 0x14045D284 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140461980 (PnpAsynchronousCall.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     FsRtlGetFileSize @ 0x1404711C4 (FsRtlGetFileSize.c)
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     CmpGetVolumeClusterSize @ 0x1404AE73C (CmpGetVolumeClusterSize.c)
 *     FsRtlSetFileSize @ 0x1404B1144 (FsRtlSetFileSize.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     WmipForwardWmiIrp @ 0x1404D215C (WmipForwardWmiIrp.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 *     CmpFileFlushAndPurge @ 0x1404D6564 (CmpFileFlushAndPurge.c)
 *     FsRtlQueryKernelEaFile @ 0x140530A5C (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140541F58 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x140554078 (FsRtlSetKernelEaFile.c)
 *     IoSetInformation @ 0x14055B32C (IoSetInformation.c)
 *     IoSetPartitionInformation @ 0x14055FBF8 (IoSetPartitionInformation.c)
 *     IoVolumeDeviceToGuidPath @ 0x14056254C (IoVolumeDeviceToGuidPath.c)
 *     IoReadPartitionTable @ 0x140562AE0 (IoReadPartitionTable.c)
 *     HalpGetFullGeometry @ 0x1405630A4 (HalpGetFullGeometry.c)
 *     FstubReadSectors @ 0x140563264 (FstubReadSectors.c)
 *     FstubGetDiskGeometry @ 0x1405633DC (FstubGetDiskGeometry.c)
 *     FsRtlIssueDeviceIoControl @ 0x140563D0C (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x1405645F4 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140583464 (FsRtlIssueFileNotificationFsctl.c)
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     PiPagePathSetState @ 0x1405C0A08 (PiPagePathSetState.c)
 *     PopThermalWorker @ 0x1405C3BD8 (PopThermalWorker.c)
 *     FsRtlQueryInformationFile @ 0x14066D780 (FsRtlQueryInformationFile.c)
 *     IoWritePartitionTable @ 0x14066ED20 (IoWritePartitionTable.c)
 *     FstubWriteSector @ 0x140670158 (FstubWriteSector.c)
 *     IopGetVolumeId @ 0x140671774 (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x140671B84 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x140672054 (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x140673358 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x140674678 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x140679774 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x140679EEC (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x1406940A4 (IopEjectDevice.c)
 *     PopBatteryQueryStatus @ 0x1406B6AAC (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x1406B7074 (PopBatteryWaitTag.c)
 *     PopFanWorker @ 0x1406BB3D4 (PopFanWorker.c)
 *     RawQueryFileSystemInformation @ 0x1406C6C80 (RawQueryFileSystemInformation.c)
 *     RawPerformDevIoCtrl @ 0x1406C6E80 (RawPerformDevIoCtrl.c)
 *     SmStorePhysicalRequestIssue @ 0x1406DA294 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x1406DD5A4 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1406DD654 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x14071EF58 (VhdiVerifyBootDisk.c)
 *     VfIrpSendSynchronousIrp @ 0x14074169C (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140752714 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1407527DC (ViFilterDispatchPnp.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1407B6270 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x1407F94BC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1407FCE1C (VhdiMountVhdFile.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
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
