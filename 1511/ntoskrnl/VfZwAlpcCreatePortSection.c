/*
 * XREFs of VfZwAlpcCreatePortSection @ 0x1406D14C4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwAlpcCreatePortSection(
        HANDLE PortHandle,
        ULONG Flags,
        HANDLE SectionHandle,
        SIZE_T SectionSize,
        PALPC_HANDLE AlpcSectionHandle,
        PSIZE_T ActualSectionSize)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)AlpcSectionHandle, (int)retaddr);
    ViZwCheckVirtualAddress((int)ActualSectionSize, (int)retaddr);
  }
  return pXdvZwAlpcCreatePortSection(
           PortHandle,
           Flags,
           SectionHandle,
           SectionSize,
           AlpcSectionHandle,
           ActualSectionSize);
}
