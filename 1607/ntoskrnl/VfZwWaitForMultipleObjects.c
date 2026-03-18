/*
 * XREFs of VfZwWaitForMultipleObjects @ 0x140720AF4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwWaitForMultipleObjects(unsigned int a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v9; // r9
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
  }
  LOBYTE(v9) = a4;
  return pXdvZwWaitForMultipleObjects(a1, a2, a3, v9, a5);
}
