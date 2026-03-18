/*
 * XREFs of ZwFlushBuffersFile @ 0x14015A5E0
 * Callers:
 *     PopFlushVolumeWorker @ 0x1403D0FC4 (PopFlushVolumeWorker.c)
 *     RtlUnlockBootStatusData @ 0x140547DAC (RtlUnlockBootStatusData.c)
 *     PopCreateHiberFile @ 0x14056CF34 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x1405FE0FC (CmReplaceKey.c)
 *     CmpFileFlush @ 0x140604204 (CmpFileFlush.c)
 *     CmpWriteOffsetArrayToFile @ 0x140604EA8 (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock, v2);
}
