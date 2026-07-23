/*
 * XREFs of ZwWaitForSingleObject @ 0x1401506A0
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400EFA60 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiDeletePartitionResources @ 0x1401D91C8 (MiDeletePartitionResources.c)
 *     PiDrvDbLoadNode @ 0x140444A94 (PiDrvDbLoadNode.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1404DD0CC (PfSnVolumeCheckSeekPenalty.c)
 *     BiAcquireBcdSyncMutant @ 0x1404FD784 (BiAcquireBcdSyncMutant.c)
 *     BiGetPartitionInformation @ 0x1404FE044 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1404FE1C0 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x1404FE3D8 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1404FE510 (BiIsVolumePartitionInformationRetained.c)
 *     SiGetDiskPartitionInformation @ 0x140506AA0 (SiGetDiskPartitionInformation.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140519EF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140544C64 (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140631B78 (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x140640950 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x140676460 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140676B60 (CMFSystemThreadRoutine.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14068E948 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1406917C0 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140691968 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140691B48 (SiIssueSynchronousIoctl.c)
 *     VfZwWaitForSingleObject @ 0x1406D49A8 (VfZwWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
