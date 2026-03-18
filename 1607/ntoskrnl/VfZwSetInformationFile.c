/*
 * XREFs of VfZwSetInformationFile @ 0x140720548
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetInformationFile(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, (int)retaddr);
    ViZwCheckVirtualAddress(a3, (int)retaddr);
  }
  return pXdvZwSetInformationFile(a1, a2, a3, a4);
}
