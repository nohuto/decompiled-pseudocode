/*
 * XREFs of VfZwSetBootOptions @ 0x1406D41F0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetBootOptions(_BOOT_OPTIONS *a1, ULONG FieldsToChange)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
  return pXdvZwSetBootOptions(a1, FieldsToChange);
}
