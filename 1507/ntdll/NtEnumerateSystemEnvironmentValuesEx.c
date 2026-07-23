/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x180094610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, PULONG BufferLength)
{
  NTSTATUS result; // eax

  result = 209;
  __asm { syscall; Low latency system call }
  return result;
}
