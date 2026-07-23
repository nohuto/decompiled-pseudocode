/*
 * XREFs of VfZwAlpcCreatePortSection @ 0x14075508C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
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
