/*
 * XREFs of NtInitializeRegistry @ 0x180094800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtInitializeRegistry(USHORT BootCondition)
{
  NTSTATUS result; // eax

  result = 240;
  __asm { syscall; Low latency system call }
  return result;
}
