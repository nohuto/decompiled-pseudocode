/*
 * XREFs of ZwCreateFile @ 0x14015AC90
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x14010B61C (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x14014A234 (LdrpMapResourceFile.c)
 *     PopFlushVolumeWorker @ 0x1403D0FC4 (PopFlushVolumeWorker.c)
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x140495608 (EtwpCreateDirectoryFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1404D1584 (CmpOpenFileWithExtremePrejudice.c)
 *     PspIoRateEntryActivate @ 0x1404D4244 (PspIoRateEntryActivate.c)
 *     CmpInitBackupHive @ 0x14054DED8 (CmpInitBackupHive.c)
 *     PopGetPolicyDeviceObject @ 0x14056C8B4 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x140578960 (FsRtlpOpenDev.c)
 *     CmpSendBootDeviceUsageNotification @ 0x140604380 (CmpSendBootDeviceUsageNotification.c)
 *     IopBootLogToFile @ 0x140620EFC (IopBootLogToFile.c)
 *     SmKmStoreFileOpenVolume @ 0x140699848 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14069B2B0 (SmpUtilsGetControlDevice.c)
 *     WheapWriteTriageDump @ 0x1406BB330 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x1406F2000 (KdPullRemoteFile.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 *     VhdiMountVhdFile @ 0x1407D2DF0 (VhdiMountVhdFile.c)
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
