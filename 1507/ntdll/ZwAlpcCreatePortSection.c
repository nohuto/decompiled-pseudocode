/*
 * XREFs of ZwAlpcCreatePortSection @ 0x180094080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreatePortSection(
        HANDLE PortHandle,
        ULONG Flags,
        HANDLE SectionHandle,
        SIZE_T SectionSize,
        PALPC_HANDLE AlpcSectionHandle,
        PSIZE_T ActualSectionSize)
{
  NTSTATUS result; // eax

  result = 120;
  __asm { syscall; Low latency system call }
  return result;
}
