/*
 * XREFs of ZwWaitForSingleObject @ 0x14017F070
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1401308BC (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140457C60 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x1404DE2D8 (PiDrvDbLoadNode.c)
 *     BiAcquireBcdSyncMutant @ 0x140570224 (BiAcquireBcdSyncMutant.c)
 *     BiGetPartitionInformation @ 0x140570C8C (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140570E08 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140571020 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140571158 (BiIsVolumePartitionInformationRetained.c)
 *     SiGetDiskPartitionInformation @ 0x14057FD78 (SiGetDiskPartitionInformation.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14058D558 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1405BB80C (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406B0028 (PfSnVolumeCheckIsSdBus.c)
 *     CsrShutdownSynchronization @ 0x1406C094C (CsrShutdownSynchronization.c)
 *     CMFFlushHitsFile @ 0x1406FAC30 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406FB330 (CMFSystemThreadRoutine.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14070E460 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1407112D8 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140711480 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140711660 (SiIssueSynchronousIoctl.c)
 *     VfZwWaitForSingleObject @ 0x140758570 (VfZwWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
