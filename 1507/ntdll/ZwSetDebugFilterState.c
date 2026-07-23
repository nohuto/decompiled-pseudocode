/*
 * XREFs of ZwSetDebugFilterState @ 0x180095000
 * Callers:
 *     DbgSetDebugFilterState @ 0x1800CAD10 (DbgSetDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  NTSTATUS result; // eax

  result = 368;
  __asm { syscall; Low latency system call }
  return result;
}
