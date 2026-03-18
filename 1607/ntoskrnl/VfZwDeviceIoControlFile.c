/*
 * XREFs of VfZwDeviceIoControlFile @ 0x14071E270
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckApcRequirement @ 0x140720CBC (ViZwCheckApcRequirement.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeviceIoControlFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v13; // r8d
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v13, (int)retaddr);
    ViZwCheckVirtualAddress(a4, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
    ViZwCheckVirtualAddress(a7, (int)retaddr);
    ViZwCheckVirtualAddress(a9, (int)retaddr);
    ViZwCheckApcRequirement((int)retaddr);
  }
  return pXdvZwDeviceIoControlFile(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
