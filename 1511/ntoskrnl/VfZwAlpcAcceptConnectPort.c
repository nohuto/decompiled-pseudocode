/*
 * XREFs of VfZwAlpcAcceptConnectPort @ 0x1406D126C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x1406D4B50 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcAcceptConnectPort(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8)
{
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
    ViZwCheckVirtualAddress(a7, (int)retaddr);
    ViZwCheckVirtualAddress(a8, (int)retaddr);
    ViZwCheckObjectAttributes(a4, retaddr);
  }
  return pXdvZwAlpcAcceptConnectPort(a1, a2, a3);
}
