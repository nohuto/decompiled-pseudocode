/*
 * XREFs of NtCreateDebugObject @ 0x1800942A0
 * Callers:
 *     DbgUiConnectToDbg @ 0x1800BBE80 (DbgUiConnectToDbg.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateDebugObject(
        PHANDLE DebugObjectHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  NTSTATUS result; // eax

  result = 154;
  __asm { syscall; Low latency system call }
  return result;
}
