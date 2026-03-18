/*
 * XREFs of VfZwSetBootEntryOrder @ 0x140757D7C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetBootEntryOrder(ULONG *a1, PULONG Count)
{
  unsigned int v2; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (unsigned int)Count;
  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
  return pXdvZwSetBootEntryOrder(a1, (PULONG)v2);
}
