/*
 * XREFs of VfZwCommitEnlistment @ 0x1407554AC
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwCommitEnlistment(HANDLE EnlistmentHandle, LARGE_INTEGER *a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
  return pXdvZwCommitEnlistment(EnlistmentHandle, a2);
}
