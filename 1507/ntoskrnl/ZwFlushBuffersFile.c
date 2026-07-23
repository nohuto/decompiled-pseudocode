/*
 * XREFs of ZwFlushBuffersFile @ 0x14017F950
 * Callers:
 *     PopFlushVolumeWorker @ 0x1403ECD88 (PopFlushVolumeWorker.c)
 *     RtlUnlockBootStatusData @ 0x140584278 (RtlUnlockBootStatusData.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 *     CmpFileFlush @ 0x14065BBC0 (CmpFileFlush.c)
 *     CmpWriteOffsetArrayToFile @ 0x14065CA3C (CmpWriteOffsetArrayToFile.c)
 *     VerifierZwFlushBuffersFile @ 0x140742594 (VerifierZwFlushBuffersFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
