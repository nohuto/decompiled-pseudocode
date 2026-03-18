/*
 * XREFs of VfZwSetSystemInformation @ 0x1407207D8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetSystemInformation(unsigned int a1, __int64 a2, unsigned int a3)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a2, (int)retaddr);
  return pXdvZwSetSystemInformation(a1, a2, a3);
}
