/*
 * XREFs of ZwCreateEvent @ 0x14017F8F0
 * Callers:
 *     CmpCreateEvent @ 0x14044B5C0 (CmpCreateEvent.c)
 *     BiGetPartitionInformation @ 0x140570C8C (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140570E08 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140571020 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140571158 (BiIsVolumePartitionInformationRetained.c)
 *     SiGetDiskPartitionInformation @ 0x14057FD78 (SiGetDiskPartitionInformation.c)
 *     SepInitializationPhase1 @ 0x1405931F0 (SepInitializationPhase1.c)
 *     PiDrvDbCreateNode @ 0x1405956B0 (PiDrvDbCreateNode.c)
 *     PfpCreateEvent @ 0x1405B7260 (PfpCreateEvent.c)
 *     SmCreateEvent @ 0x1405BD254 (SmCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x1405C0C30 (IoCreateNotificationEvent.c)
 *     IoCreateSynchronizationEvent @ 0x14067406C (IoCreateSynchronizationEvent.c)
 *     CsrShutdownSynchronization @ 0x1406C094C (CsrShutdownSynchronization.c)
 *     CMFFlushHitsFile @ 0x1406FAC30 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406FB330 (CMFSystemThreadRoutine.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14070E460 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1407112D8 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140711480 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140711660 (SiIssueSynchronousIoctl.c)
 *     VfZwCreateEvent @ 0x1407556C8 (VfZwCreateEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x1407DE814 (DbgkpCreateNotificationEvent.c)
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
