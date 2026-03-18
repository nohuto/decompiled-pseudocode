/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x140006EE4
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140139A14 (FsRtlGetVirtualDiskNestingLevel.c)
 *     xHalGetPartialGeometry @ 0x1401E48AC (xHalGetPartialGeometry.c)
 *     FsRtlQueryCachedVdl @ 0x14040AA88 (FsRtlQueryCachedVdl.c)
 *     RawQueryFsSizeInfo @ 0x14040C604 (RawQueryFsSizeInfo.c)
 *     sub_14040C7E8 @ 0x14040C7E8 (sub_14040C7E8.c)
 *     IopGetSetObjectId @ 0x14040D278 (IopGetSetObjectId.c)
 *     IoVolumeDeviceToDosName @ 0x14040D36C (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x14040D608 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x14056254C (IoVolumeDeviceToGuidPath.c)
 *     HalpGetFullGeometry @ 0x1405630A4 (HalpGetFullGeometry.c)
 *     FstubGetDiskGeometry @ 0x1405633DC (FstubGetDiskGeometry.c)
 *     FsRtlIssueDeviceIoControl @ 0x140563D0C (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x1405645F4 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140583464 (FsRtlIssueFileNotificationFsctl.c)
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     IopGetVolumeId @ 0x140671774 (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x140671B84 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x140672054 (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x140673358 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140679794 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x1406C6E80 (RawPerformDevIoCtrl.c)
 *     SmKmSendDeviceControl @ 0x1406DD5A4 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x14071EF58 (VhdiVerifyBootDisk.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1407B6270 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x1407F94BC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1407FCE1C (VhdiMountVhdFile.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x140006F40 (IopBuildDeviceIoControlRequest.c)
 */

PIRP __stdcall IoBuildDeviceIoControlRequest(
        ULONG IoControlCode,
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+58h] [rbp+0h]

  return (PIRP)IopBuildDeviceIoControlRequest(
                 IoControlCode,
                 DeviceObject,
                 InputBuffer,
                 InputBufferLength,
                 OutputBuffer,
                 OutputBufferLength,
                 InternalDeviceIoControl,
                 Event,
                 IoStatusBlock,
                 retaddr);
}
