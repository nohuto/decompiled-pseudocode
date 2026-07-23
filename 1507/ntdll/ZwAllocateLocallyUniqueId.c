/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x180093FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateLocallyUniqueId(PLUID Luid)
{
  NTSTATUS result; // eax

  result = 111;
  __asm { syscall; Low latency system call }
  return result;
}
