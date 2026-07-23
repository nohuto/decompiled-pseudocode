/*
 * XREFs of ZwFlushBuffersFile @ 0x140150F80
 * Callers:
 *     PopFlushVolumeWorker @ 0x1403A3C40 (PopFlushVolumeWorker.c)
 *     RtlUnlockBootStatusData @ 0x14050CE8C (RtlUnlockBootStatusData.c)
 *     PopCreateHiberFile @ 0x14054BA2C (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x1405DFF68 (CmReplaceKey.c)
 *     CmpFileFlush @ 0x1405E4CAC (CmpFileFlush.c)
 *     CmpWriteOffsetArrayToFile @ 0x1405E5958 (CmpWriteOffsetArrayToFile.c)
 *     VerifierZwFlushBuffersFile @ 0x1406C0D54 (VerifierZwFlushBuffersFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
