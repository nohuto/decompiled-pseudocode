/*
 * XREFs of VfZwRollbackEnlistment @ 0x1406D4174
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwRollbackEnlistment(HANDLE EnlistmentHandle, LARGE_INTEGER *a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
  return pXdvZwRollbackEnlistment(EnlistmentHandle, a2);
}
