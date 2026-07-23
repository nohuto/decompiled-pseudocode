/*
 * XREFs of ZwAlpcCreatePortSection @ 0x14017FEF0
 * Callers:
 *     VfZwAlpcCreatePortSection @ 0x14075508C (VfZwAlpcCreatePortSection.c)
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
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
