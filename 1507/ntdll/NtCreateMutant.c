/*
 * XREFs of NtCreateMutant @ 0x180094370
 * Callers:
 *     _ResCreateMutex @ 0x1800F9C0C (_ResCreateMutex.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  NTSTATUS result; // eax

  result = 167;
  __asm { syscall; Low latency system call }
  return result;
}
