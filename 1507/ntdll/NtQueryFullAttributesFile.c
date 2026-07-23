/*
 * XREFs of NtQueryFullAttributesFile @ 0x180094BE0
 * Callers:
 *     _ResGetFileAttributesEx @ 0x1800FA684 (_ResGetFileAttributesEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  NTSTATUS result; // eax

  result = 302;
  __asm { syscall; Low latency system call }
  return result;
}
