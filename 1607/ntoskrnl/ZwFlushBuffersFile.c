/*
 * XREFs of ZwFlushBuffersFile @ 0x14015AB50
 * Callers:
 *     PopFlushVolumeWorker @ 0x1403D0FC4 (PopFlushVolumeWorker.c)
 *     RtlUnlockBootStatusData @ 0x1405482EC (RtlUnlockBootStatusData.c)
 *     PopCreateHiberFile @ 0x14056D474 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x1405FE1B0 (CmReplaceKey.c)
 *     CmpFileFlush @ 0x1406042B8 (CmpFileFlush.c)
 *     CmpWriteOffsetArrayToFile @ 0x140604F5C (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
