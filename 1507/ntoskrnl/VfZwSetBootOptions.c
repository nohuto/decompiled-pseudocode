/*
 * XREFs of VfZwSetBootOptions @ 0x140757DB8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetBootOptions(_BOOT_OPTIONS *a1, ULONG FieldsToChange)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
  return pXdvZwSetBootOptions(a1, FieldsToChange);
}
