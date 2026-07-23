/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x180094D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQuerySystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        PULONG ValueLength,
        PULONG Attributes)
{
  NTSTATUS result; // eax

  result = 326;
  __asm { syscall; Low latency system call }
  return result;
}
