/*
 * XREFs of ZwAlpcCreatePortSection @ 0x140151520
 * Callers:
 *     VfZwAlpcCreatePortSection @ 0x1406D14C4 (VfZwAlpcCreatePortSection.c)
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
