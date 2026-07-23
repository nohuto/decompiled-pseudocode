/*
 * XREFs of ZwDeviceIoControlFile @ 0x140150700
 * Callers:
 *     PopFlushAndHold @ 0x1401EE844 (PopFlushAndHold.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1404B8788 (EtwpUpdateFileInfoDriverRegistration.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1404DD0CC (PfSnVolumeCheckSeekPenalty.c)
 *     BiGetPartitionInformation @ 0x1404FE044 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1404FE1C0 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x1404FE3D8 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1404FE510 (BiIsVolumePartitionInformationRetained.c)
 *     SiGetDiskPartitionInformation @ 0x140506AA0 (SiGetDiskPartitionInformation.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140523794 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140631B78 (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x14066DFEC (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x14066E1FC (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1406700EC (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14068E948 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1406917C0 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140691968 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140691B48 (SiIssueSynchronousIoctl.c)
 *     VfZwDeviceIoControlFile @ 0x1406D20A4 (VfZwDeviceIoControlFile.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407662E0 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x14078680C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140786954 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140787130 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x1407871F0 (RamdiskStart.c)
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
