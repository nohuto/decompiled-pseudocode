/*
 * XREFs of NtSetInformationSymbolicLink @ 0x14062D3C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // si
  int v7; // ebx
  _DWORD *v8; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = ObReferenceObjectByHandle(LinkHandle, 2u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v8 = Object;
    if ( SymbolicLinkInformationClass == SymbolicLinkGlobalInformation )
    {
      if ( SymbolicLinkInformationLength )
      {
        v7 = -1073741820;
      }
      else if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        v8[7] |= 1u;
        v7 = 0;
      }
      else
      {
        v7 = -1073741727;
      }
    }
    else
    {
      v7 = -1073741821;
    }
    ObfDereferenceObject(v8);
  }
  return v7;
}
