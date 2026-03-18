/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x1400ED0DC
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140111B64 (FsRtlGetVirtualDiskNestingLevel.c)
 *     NtApphelpCacheControl @ 0x1404B93AC (NtApphelpCacheControl.c)
 *     IopGetSetObjectId @ 0x1404CB9B0 (IopGetSetObjectId.c)
 *     FsRtlQueryCachedVdl @ 0x1404E2B8C (FsRtlQueryCachedVdl.c)
 *     IoVolumeDeviceToDosName @ 0x14050814C (IoVolumeDeviceToDosName.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x14051DCA4 (ExpHwidSendSynchronousIrpToDevice.c)
 *     FsRtlIssueDeviceIoControl @ 0x14052CB78 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x14052D04C (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D194 (IoVolumeDeviceNameToGuidPath.c)
 *     FsRtlBalanceReads @ 0x14052DFB0 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140546D48 (FsRtlIssueFileNotificationFsctl.c)
 *     IopCreateArcName @ 0x14054FC84 (IopCreateArcName.c)
 *     ?Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z @ 0x140574D84 (-Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z.c)
 *     IopGetVolumeId @ 0x1406216AC (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x140621ABC (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x140621F44 (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x1406230A4 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140628C80 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x140682F50 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140683084 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x14069897C (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x1406E54BC (VhdiVerifyBootDisk.c)
 *     IopCreateArcNamesCd @ 0x140798420 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140798A1C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x1407CE504 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1407D2DF0 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1407D36AC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407D3884 (SbpStartLanman.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1400E9780 (IopBuildDeviceIoControlRequest.c)
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
