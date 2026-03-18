/*
 * XREFs of VfZwAlpcConnectPort @ 0x1406D133C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x1406D4B50 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcConnectPort(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, (int)retaddr);
    ViZwCheckVirtualAddress(a4, (int)retaddr);
    ViZwCheckVirtualAddress(a6, (int)retaddr);
    ViZwCheckVirtualAddress(a7, (int)retaddr);
    ViZwCheckVirtualAddress(a8, (int)retaddr);
    ViZwCheckVirtualAddress(a9, (int)retaddr);
    ViZwCheckVirtualAddress(a10, (int)retaddr);
    ViZwCheckVirtualAddress(a11, (int)retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckUnicodeString(a2, (int)retaddr);
  }
  return pXdvZwAlpcConnectPort(a1, a2, a3);
}
