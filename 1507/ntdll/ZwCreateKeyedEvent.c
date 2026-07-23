/*
 * XREFs of ZwCreateKeyedEvent @ 0x180094340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateKeyedEvent(
        PHANDLE KeyedEventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  NTSTATUS result; // eax

  result = 164;
  __asm { syscall; Low latency system call }
  return result;
}
