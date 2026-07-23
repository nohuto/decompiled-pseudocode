/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x1400EAF4C
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1401120C8 (FsRtlGetVirtualDiskNestingLevel.c)
 *     NtApphelpCacheControl @ 0x1404A50E4 (NtApphelpCacheControl.c)
 *     IopGetSetObjectId @ 0x1404B13DC (IopGetSetObjectId.c)
 *     FsRtlQueryCachedVdl @ 0x1404C5AF0 (FsRtlQueryCachedVdl.c)
 *     IoVolumeDeviceToDosName @ 0x1404EB0DC (IoVolumeDeviceToDosName.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140500D54 (ExpHwidSendSynchronousIrpToDevice.c)
 *     FsRtlIssueDeviceIoControl @ 0x14052D0B8 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x14052D58C (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D6D4 (IoVolumeDeviceNameToGuidPath.c)
 *     FsRtlBalanceReads @ 0x14052E4F0 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140547288 (FsRtlIssueFileNotificationFsctl.c)
 *     IopCreateArcName @ 0x1405501C4 (IopCreateArcName.c)
 *     ?Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z @ 0x1405752C4 (-Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z.c)
 *     IopGetVolumeId @ 0x140621760 (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x140621B70 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x140621FF8 (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x140623158 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140628D34 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x140683034 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140683168 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x140698A60 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x1406E55F4 (VhdiVerifyBootDisk.c)
 *     IopCreateArcNamesCd @ 0x140798420 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140798A1C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x1407CE504 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1407D2DF0 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1407D36AC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407D3884 (SbpStartLanman.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1400E7620 (IopBuildDeviceIoControlRequest.c)
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
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  return (PIRP)IopBuildDeviceIoControlRequest(
                 IoControlCode,
                 (__int64)DeviceObject,
                 InputBuffer,
                 InputBufferLength,
                 OutputBuffer,
                 OutputBufferLength,
                 InternalDeviceIoControl,
                 (__int64)Event,
                 (__int64)IoStatusBlock,
                 retaddr);
}
