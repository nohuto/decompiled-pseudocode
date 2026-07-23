/*
 * XREFs of ZwDeviceIoControlFile @ 0x14017F0D0
 * Callers:
 *     PopFlushAndHold @ 0x14023CEFC (PopFlushAndHold.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140457C60 (PfSnVolumeCheckSeekPenalty.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14054AE9C (EtwpUpdateFileInfoDriverRegistration.c)
 *     BiGetPartitionInformation @ 0x140570C8C (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140570E08 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140571020 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140571158 (BiIsVolumePartitionInformationRetained.c)
 *     SiGetDiskPartitionInformation @ 0x14057FD78 (SiGetDiskPartitionInformation.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14058F2E0 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406B0028 (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x1406F18F8 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1406F1BB4 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1406F3C98 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14070E460 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1407112D8 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140711480 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140711660 (SiIssueSynchronousIoctl.c)
 *     VfZwDeviceIoControlFile @ 0x140755C6C (VfZwDeviceIoControlFile.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407E9120 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x1407FC9D8 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1407FCB20 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1407FD2E8 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
