/*
 * XREFs of ZwCreatePort @ 0x1800943B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectionInfoLength,
        ULONG MaxMessageLength,
        ULONG MaxPoolUsage)
{
  NTSTATUS result; // eax

  result = 171;
  __asm { syscall; Low latency system call }
  return result;
}
