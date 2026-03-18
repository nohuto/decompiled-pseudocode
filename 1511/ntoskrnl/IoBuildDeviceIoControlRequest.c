/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x140073DD0
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140106754 (FsRtlGetVirtualDiskNestingLevel.c)
 *     xHalGetPartialGeometry @ 0x1401AE034 (xHalGetPartialGeometry.c)
 *     RawQueryFsSizeInfo @ 0x140484B94 (RawQueryFsSizeInfo.c)
 *     sub_1404964E4 @ 0x1404964E4 (sub_1404964E4.c)
 *     NtApphelpCacheControl @ 0x14049C958 (NtApphelpCacheControl.c)
 *     IopGetSetObjectId @ 0x1404BCDCC (IopGetSetObjectId.c)
 *     FsRtlQueryCachedVdl @ 0x1404C34E0 (FsRtlQueryCachedVdl.c)
 *     IoVolumeDeviceToDosName @ 0x1404D7FD4 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuidPath @ 0x1404E7D88 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1404E7ED0 (IoVolumeDeviceNameToGuidPath.c)
 *     FstubGetDiskGeometry @ 0x1404E86F4 (FstubGetDiskGeometry.c)
 *     HalpGetFullGeometry @ 0x1404E8F68 (HalpGetFullGeometry.c)
 *     FsRtlIssueDeviceIoControl @ 0x1404E9A1C (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x1404EC1B0 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14050C180 (FsRtlIssueFileNotificationFsctl.c)
 *     RawPerformDevIoCtrl @ 0x140519170 (RawPerformDevIoCtrl.c)
 *     IopLoadFileSystemDriver @ 0x14051AFA0 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x140522480 (IopCreateArcName.c)
 *     IopGetVolumeId @ 0x1405F78EC (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F7CFC (IopInvalidateVolumesForDevice.c)
 *     IopSetRemoteLink @ 0x1405F91FC (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1405FEC4C (IopIssueSystemEnvironmentRequest.c)
 *     SmKmSendDeviceControl @ 0x14065AD50 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x14069E8FC (VhdiVerifyBootDisk.c)
 *     IopCreateArcNamesCd @ 0x14074F274 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1407538E4 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140782D38 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140786C50 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x14078750C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407876E4 (SbpStartLanman.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x140073E30 (IopBuildDeviceIoControlRequest.c)
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
