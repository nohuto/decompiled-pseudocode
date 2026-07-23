/*
 * XREFs of ZwResetEvent @ 0x140181BB0
 * Callers:
 *     PfSnVolumeCheckSeekPenalty @ 0x140457C60 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x14055A084 (PiDrvDbLoadNodeWorkerCallback.c)
 *     BiGetPartitionInformation @ 0x140570C8C (BiGetPartitionInformation.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140571020 (BiIssueGetDriveLayoutIoctl.c)
 *     SiGetDiskPartitionInformation @ 0x14057FD78 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406B0028 (PfSnVolumeCheckIsSdBus.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14070E460 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1407112D8 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140711480 (SiGetDriveLayoutInformation.c)
 *     VfZwResetEvent @ 0x140757CF4 (VfZwResetEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResetEvent(HANDLE EventHandle, PLONG NumberOfWaitingThreads)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
