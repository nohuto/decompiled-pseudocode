/*
 * XREFs of NtCreateWaitablePort @ 0x1800944C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateWaitablePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectionInfoLength,
        ULONG MaxMessageLength,
        ULONG MaxPoolUsage)
{
  NTSTATUS result; // eax

  result = 188;
  __asm { syscall; Low latency system call }
  return result;
}
