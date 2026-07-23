/*
 * XREFs of VfZwAlpcCreateResourceReserve @ 0x1406D1558
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwAlpcCreateResourceReserve(HANDLE PortHandle, ULONG Flags, SIZE_T MessageSize, HANDLE *a4)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
  return pXdvZwAlpcCreateResourceReserve(PortHandle, Flags, MessageSize, a4);
}
