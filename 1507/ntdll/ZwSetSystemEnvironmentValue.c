/*
 * XREFs of ZwSetSystemEnvironmentValue @ 0x1800951C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING VariableValue)
{
  NTSTATUS result; // eax

  result = 396;
  __asm { syscall; Low latency system call }
  return result;
}
