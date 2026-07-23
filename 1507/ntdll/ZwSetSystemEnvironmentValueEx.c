/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x1800951D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        ULONG ValueLength,
        ULONG Attributes)
{
  NTSTATUS result; // eax

  result = 397;
  __asm { syscall; Low latency system call }
  return result;
}
