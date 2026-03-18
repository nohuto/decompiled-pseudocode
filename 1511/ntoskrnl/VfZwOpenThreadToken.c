/*
 * XREFs of VfZwOpenThreadToken @ 0x1406D2DEC
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwOpenThreadToken(HANDLE ThreadHandle, ACCESS_MASK DesiredAccess, BOOLEAN OpenAsSelf, HANDLE *a4)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
  return pXdvZwOpenThreadToken(ThreadHandle, DesiredAccess, OpenAsSelf, a4);
}
