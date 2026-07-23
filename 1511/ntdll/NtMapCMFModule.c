/*
 * XREFs of NtMapCMFModule @ 0x1800A7110
 * Callers:
 *     _ResCMapCMFModule @ 0x180048A28 (_ResCMapCMFModule.c)
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

  result = 259;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
