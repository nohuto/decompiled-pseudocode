/*
 * XREFs of ZwCreateFile @ 0x1401510C0
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x140002660 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x140140BCC (LdrpMapResourceFile.c)
 *     PopFlushVolumeWorker @ 0x1403A3C40 (PopFlushVolumeWorker.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1403B5538 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x1404C9A74 (EtwpCreateDirectoryFile.c)
 *     CmpInitBackupHive @ 0x140521568 (CmpInitBackupHive.c)
 *     FsRtlpOpenDev @ 0x140544D40 (FsRtlpOpenDev.c)
 *     PopGetPolicyDeviceObject @ 0x14054C1F8 (PopGetPolicyDeviceObject.c)
 *     CmpSendBootDeviceUsageNotification @ 0x1405E4D74 (CmpSendBootDeviceUsageNotification.c)
 *     IopBootLogToFile @ 0x1405F7140 (IopBootLogToFile.c)
 *     SmpUtilsGetControlDevice @ 0x140659EB0 (SmpUtilsGetControlDevice.c)
 *     SmKmStoreFileOpenVolume @ 0x14065BB3C (SmKmStoreFileOpenVolume.c)
 *     WheapWriteTriageDump @ 0x140678AC8 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x1406AE0E0 (KdPullRemoteFile.c)
 *     VfZwCreateFile @ 0x1406D1B78 (VfZwCreateFile.c)
 *     EmInitSystem @ 0x14075EBD4 (EmInitSystem.c)
 *     VhdiMountVhdFile @ 0x140786C50 (VhdiMountVhdFile.c)
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
