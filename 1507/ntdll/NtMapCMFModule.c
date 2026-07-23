/*
 * XREFs of NtMapCMFModule @ 0x180094900
 * Callers:
 *     _ResCMapCMFModule @ 0x18000EED8 (_ResCMapCMFModule.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtMapCMFModule(
        ULONG What,
        ULONG Index,
        PULONG CacheIndexOut,
        PULONG CacheFlagsOut,
        PULONG ViewSizeOut,
        PVOID *BaseAddress)
{
  NTSTATUS result; // eax

  result = 256;
  __asm { syscall; Low latency system call }
  return result;
}
