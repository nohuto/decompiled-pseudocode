/*
 * XREFs of ZwCreateJobObject @ 0x180094310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 161;
  __asm { syscall; Low latency system call }
  return result;
}
