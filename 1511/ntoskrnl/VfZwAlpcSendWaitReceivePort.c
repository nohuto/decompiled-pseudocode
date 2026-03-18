/*
 * XREFs of VfZwAlpcSendWaitReceivePort @ 0x1406D16CC
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcSendWaitReceivePort(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v11; // r8d
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v11, (int)retaddr);
    ViZwCheckVirtualAddress(a4, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
    ViZwCheckVirtualAddress(a6, (int)retaddr);
    ViZwCheckVirtualAddress(a7, (int)retaddr);
    ViZwCheckVirtualAddress(a8, (int)retaddr);
  }
  return pXdvZwAlpcSendWaitReceivePort(a1, a2, a3);
}
