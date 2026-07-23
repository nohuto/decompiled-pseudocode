/*
 * XREFs of ZwDeviceIoControlFile @ 0x14015A2D0
 * Callers:
 *     PopFlushAndHold @ 0x140207180 (PopFlushAndHold.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140496D98 (EtwpUpdateFileInfoDriverRegistration.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1404D8734 (PfSnVolumeCheckSeekPenalty.c)
 *     BiGetPartitionInformation @ 0x14053EFF0 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14053F0F4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x14053F2C8 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x14053F390 (BiIsVolumePartitionInformationRetained.c)
 *     SiGetDiskPartitionInformation @ 0x140542728 (SiGetDiskPartitionInformation.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FF60 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140669DD0 (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x1406B0E3C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1406B104C (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1406B2F14 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1406D3270 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1406D6198 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x1406D62C0 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1406D6420 (SiIssueSynchronousIoctl.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407BD360 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x1407D29AC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1407D2AF4 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1407D32D0 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
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
