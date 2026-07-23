/*
 * XREFs of ZwUnloadKeyEx @ 0x1800953C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  NTSTATUS result; // eax

  result = 428;
  __asm { syscall; Low latency system call }
  return result;
}
