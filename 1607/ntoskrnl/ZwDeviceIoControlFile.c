/*
 * XREFs of ZwDeviceIoControlFile @ 0x140159D60
 * Callers:
 *     PopFlushAndHold @ 0x140207354 (PopFlushAndHold.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140496308 (EtwpUpdateFileInfoDriverRegistration.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1404F57A8 (PfSnVolumeCheckSeekPenalty.c)
 *     BiGetPartitionInformation @ 0x14053EAB0 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14053EBB4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x14053ED88 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x14053EE50 (BiIsVolumePartitionInformationRetained.c)
 *     SiGetDiskPartitionInformation @ 0x1405421E8 (SiGetDiskPartitionInformation.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FA20 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140669CEC (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x1406B0D04 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1406B0F14 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1406B2DDC (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1406D3138 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1406D6060 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x1406D6188 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1406D62E8 (SiIssueSynchronousIoctl.c)
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
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
