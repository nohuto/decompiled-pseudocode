/*
 * XREFs of VfZwSetVolumeInformationFile @ 0x140720998
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetVolumeInformationFile(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, (int)retaddr);
    ViZwCheckVirtualAddress(a3, (int)retaddr);
  }
  return pXdvZwSetVolumeInformationFile(a1, a2, a3, a4);
}
