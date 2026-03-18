/*
 * XREFs of VfZwSetInformationJobObject @ 0x1407205C0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetInformationJobObject(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a3, (int)retaddr);
  return pXdvZwSetInformationJobObject(a1, a2, a3, a4);
}
