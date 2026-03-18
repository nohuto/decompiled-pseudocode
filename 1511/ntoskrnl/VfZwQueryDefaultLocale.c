/*
 * XREFs of VfZwQueryDefaultLocale @ 0x1406D32F0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQueryDefaultLocale(BOOLEAN a1, DWORD *a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
  return pXdvZwQueryDefaultLocale(a1, a2);
}
