/*
 * XREFs of ZwSetCachedSigningLevel @ 0x180094FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetCachedSigningLevel(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile)
{
  NTSTATUS result; // eax

  result = 366;
  __asm { syscall; Low latency system call }
  return result;
}
