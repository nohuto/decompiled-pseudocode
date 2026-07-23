/*
 * XREFs of ZwFsControlFile @ 0x180093C90
 * Callers:
 *     RtlpReferenceCurrentDirectory @ 0x180039024 (RtlpReferenceCurrentDirectory.c)
 *     RtlUnlockBootStatusData @ 0x180079310 (RtlUnlockBootStatusData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 57;
  __asm { syscall; Low latency system call }
  return result;
}
