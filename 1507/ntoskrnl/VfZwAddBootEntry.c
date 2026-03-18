/*
 * XREFs of VfZwAddBootEntry @ 0x140754C5C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwAddBootEntry(UNICODE_STRING *a1, UNICODE_STRING *a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
  }
  return pXdvZwAddBootEntry(a1, a2);
}
