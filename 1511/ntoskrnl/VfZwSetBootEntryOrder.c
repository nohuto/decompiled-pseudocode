/*
 * XREFs of VfZwSetBootEntryOrder @ 0x1406D41B4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
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
