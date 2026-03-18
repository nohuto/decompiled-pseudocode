/*
 * XREFs of NtSetInformationSymbolicLink @ 0x14062D3C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtSetInformationSymbolicLink(void *a1, int a2, __int64 a3, int a4)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v7; // ebx
  _DWORD *v8; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = ObReferenceObjectByHandle(a1, 2u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v8 = Object;
    if ( a2 == 1 )
    {
      if ( a4 )
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
  return (unsigned int)v7;
}
