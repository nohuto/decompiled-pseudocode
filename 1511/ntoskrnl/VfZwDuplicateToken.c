/*
 * XREFs of VfZwDuplicateToken @ 0x1406D220C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x1406D4B50 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE a5,
        PHANDLE NewTokenHandle)
{
  __int64 v10; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckObjectAttributes(v10, retaddr);
    ViZwCheckVirtualAddress((int)NewTokenHandle, (int)retaddr);
  }
  return pXdvZwDuplicateToken(ExistingTokenHandle, DesiredAccess, ObjectAttributes, EffectiveOnly, a5, NewTokenHandle);
}
