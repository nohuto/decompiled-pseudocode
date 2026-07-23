/*
 * XREFs of NtOpenEvent @ 0x180093D00
 * Callers:
 *     WaitForWerSvc @ 0x180002094 (WaitForWerSvc.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 64;
  __asm { syscall; Low latency system call }
  return result;
}
