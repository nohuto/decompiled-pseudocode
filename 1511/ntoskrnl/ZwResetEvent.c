/*
 * XREFs of ZwResetEvent @ 0x140153240
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1404BDD10 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1404DD0CC (PfSnVolumeCheckSeekPenalty.c)
 *     BiGetPartitionInformation @ 0x1404FE044 (BiGetPartitionInformation.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x1404FE3D8 (BiIssueGetDriveLayoutIoctl.c)
 *     SiGetDiskPartitionInformation @ 0x140506AA0 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140631B78 (PfSnVolumeCheckIsSdBus.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14068E948 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1406917C0 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140691968 (SiGetDriveLayoutInformation.c)
 *     VfZwResetEvent @ 0x1406D412C (VfZwResetEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResetEvent(HANDLE EventHandle, PLONG NumberOfWaitingThreads)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
