/*
 * XREFs of VfZwAlpcCreateSectionView @ 0x1406D15B4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, _ALPC_DATA_VIEW_ATTR *a3)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
  return pXdvZwAlpcCreateSectionView(PortHandle, Flags, a3);
}
