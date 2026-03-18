/*
 * XREFs of VfZwTranslateFilePath @ 0x140720A10
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwTranslateFilePath(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, (int)retaddr);
    ViZwCheckVirtualAddress(a3, (int)retaddr);
    ViZwCheckVirtualAddress(a4, (int)retaddr);
  }
  return pXdvZwTranslateFilePath(a1, a2, a3, a4);
}
