/*
 * XREFs of ZwCreateEvent @ 0x140150F20
 * Callers:
 *     CmpCreateEvent @ 0x1403DD924 (CmpCreateEvent.c)
 *     BiGetPartitionInformation @ 0x1404FE044 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1404FE1C0 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x1404FE3D8 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1404FE510 (BiIsVolumePartitionInformationRetained.c)
 *     SiGetDiskPartitionInformation @ 0x140506AA0 (SiGetDiskPartitionInformation.c)
 *     PiDrvDbCreateNode @ 0x140525298 (PiDrvDbCreateNode.c)
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x14054149C (PfpCreateEvent.c)
 *     SmCreateEvent @ 0x140545D88 (SmCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x140549770 (IoCreateNotificationEvent.c)
 *     IoCreateSynchronizationEvent @ 0x1405F9DE0 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x140640950 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x140676460 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140676B60 (CMFSystemThreadRoutine.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14068E948 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1406917C0 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140691968 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140691B48 (SiIssueSynchronousIoctl.c)
 *     VfZwCreateEvent @ 0x1406D1B00 (VfZwCreateEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x14075AC8C (DbgkpCreateNotificationEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
