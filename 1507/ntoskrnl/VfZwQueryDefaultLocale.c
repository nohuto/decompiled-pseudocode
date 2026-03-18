/*
 * XREFs of VfZwQueryDefaultLocale @ 0x140756EB8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQueryDefaultLocale(BOOLEAN a1, DWORD *a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
  return pXdvZwQueryDefaultLocale(a1, a2);
}
