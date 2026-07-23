/*
 * XREFs of ZwCompareTokens @ 0x180094260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompareTokens(HANDLE FirstTokenHandle, HANDLE SecondTokenHandle, PBOOLEAN Equal)
{
  NTSTATUS result; // eax

  result = 150;
  __asm { syscall; Low latency system call }
  return result;
}
