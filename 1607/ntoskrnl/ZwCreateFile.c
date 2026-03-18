/*
 * XREFs of ZwCreateFile @ 0x14015A720
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x140087428 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x140149CC4 (LdrpMapResourceFile.c)
 *     PopFlushVolumeWorker @ 0x1403D0FC4 (PopFlushVolumeWorker.c)
 *     CmpOpenHiveFile @ 0x1403F9400 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x140494B78 (EtwpCreateDirectoryFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1404EF4C0 (CmpOpenFileWithExtremePrejudice.c)
 *     PspIoRateEntryActivate @ 0x1404F1AB0 (PspIoRateEntryActivate.c)
 *     CmpInitBackupHive @ 0x14054DB38 (CmpInitBackupHive.c)
 *     PopGetPolicyDeviceObject @ 0x14056C374 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x140578420 (FsRtlpOpenDev.c)
 *     CmpSendBootDeviceUsageNotification @ 0x1406042CC (CmpSendBootDeviceUsageNotification.c)
 *     IopBootLogToFile @ 0x140620E48 (IopBootLogToFile.c)
 *     SmKmStoreFileOpenVolume @ 0x140699764 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14069B1CC (SmpUtilsGetControlDevice.c)
 *     WheapWriteTriageDump @ 0x1406BB1F8 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x1406F2368 (KdPullRemoteFile.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 *     VhdiMountVhdFile @ 0x1407D2DF0 (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(FileHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
