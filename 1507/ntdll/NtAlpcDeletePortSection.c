/*
 * XREFs of NtAlpcDeletePortSection @ 0x1800940C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcDeletePortSection(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE SectionHandle)
{
  NTSTATUS result; // eax

  result = 124;
  __asm { syscall; Low latency system call }
  return result;
}
