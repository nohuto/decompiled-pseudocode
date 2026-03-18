/*
 * XREFs of VfZwQuerySymbolicLinkObject @ 0x1407578C4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140758770 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQuerySymbolicLinkObject(HANDLE LinkHandle, UNICODE_STRING *a2, ULONG *a3)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckUnicodeString((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
  }
  return pXdvZwQuerySymbolicLinkObject(LinkHandle, a2, a3);
}
