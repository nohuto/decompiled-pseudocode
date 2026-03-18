/*
 * XREFs of VfZwSetSystemTime @ 0x140758220
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetSystemTime(LARGE_INTEGER *a1, LARGE_INTEGER *a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
  }
  return pXdvZwSetSystemTime(a1, a2);
}
