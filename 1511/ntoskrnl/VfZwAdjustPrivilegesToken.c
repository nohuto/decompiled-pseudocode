/*
 * XREFs of VfZwAdjustPrivilegesToken @ 0x1406D1144
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
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
