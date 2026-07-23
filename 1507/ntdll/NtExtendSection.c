/*
 * XREFs of NtExtendSection @ 0x180094630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  NTSTATUS result; // eax

  result = 211;
  __asm { syscall; Low latency system call }
  return result;
}
