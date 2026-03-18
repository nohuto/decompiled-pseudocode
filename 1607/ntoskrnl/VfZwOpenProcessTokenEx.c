/*
 * XREFs of VfZwOpenProcessTokenEx @ 0x14071EE10
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenProcessTokenEx(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a4, (int)retaddr);
  return pXdvZwOpenProcessTokenEx(a1, a2, a3, a4);
}
