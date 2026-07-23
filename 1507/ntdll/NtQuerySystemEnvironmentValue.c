/*
 * XREFs of NtQuerySystemEnvironmentValue @ 0x180094D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQuerySystemEnvironmentValue(
        PUNICODE_STRING VariableName,
        PWSTR VariableValue,
        USHORT ValueLength,
        PUSHORT ReturnLength)
{
  NTSTATUS result; // eax

  result = 325;
  __asm { syscall; Low latency system call }
  return result;
}
