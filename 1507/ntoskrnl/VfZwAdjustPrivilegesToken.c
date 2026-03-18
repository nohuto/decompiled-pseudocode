/*
 * XREFs of VfZwAdjustPrivilegesToken @ 0x140754D0C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwAdjustPrivilegesToken(
        HANDLE TokenHandle,
        PTOKEN_PRIVILEGES PreviousState,
        struct _TOKEN_PRIVILEGES *ReturnLength,
        ULONG a4,
        struct _TOKEN_PRIVILEGES *PreviousStatea,
        ULONG *ReturnLengtha)
{
  BOOLEAN v8; // r15
  int v10; // r8d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v8 = (unsigned __int8)PreviousState;
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v10, (int)retaddr);
    ViZwCheckVirtualAddress((int)PreviousStatea, (int)retaddr);
    ViZwCheckVirtualAddress((int)ReturnLengtha, (int)retaddr);
  }
  return pXdvZwAdjustPrivilegesToken(TokenHandle, v8, ReturnLength, a4, PreviousStatea, ReturnLengtha);
}
