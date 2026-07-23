/*
 * XREFs of ZwCreateFile @ 0x14017FA90
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x1401667A8 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x14016E980 (LdrpMapResourceFile.c)
 *     PopFlushVolumeWorker @ 0x1403ECD88 (PopFlushVolumeWorker.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x1404AC88C (EtwpCreateDirectoryFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14055B714 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpInitBackupHive @ 0x1405985E0 (CmpInitBackupHive.c)
 *     FsRtlpOpenDev @ 0x1405BB8E8 (FsRtlpOpenDev.c)
 *     PopGetPolicyDeviceObject @ 0x1405C355C (PopGetPolicyDeviceObject.c)
 *     CmpSendBootDeviceUsageNotification @ 0x14065BC88 (CmpSendBootDeviceUsageNotification.c)
 *     IopBootLogToFile @ 0x140670F04 (IopBootLogToFile.c)
 *     SmpUtilsGetControlDevice @ 0x1406DC5F4 (SmpUtilsGetControlDevice.c)
 *     SmKmStoreFileOpenVolume @ 0x1406DE390 (SmKmStoreFileOpenVolume.c)
 *     WheapWriteTriageDump @ 0x1406FD2E4 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x14072E134 (KdPullRemoteFile.c)
 *     VfZwCreateFile @ 0x140755740 (VfZwCreateFile.c)
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
 *     VhdiMountVhdFile @ 0x1407FCE1C (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
