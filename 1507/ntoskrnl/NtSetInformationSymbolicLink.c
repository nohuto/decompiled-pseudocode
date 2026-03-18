/*
 * XREFs of NtSetInformationSymbolicLink @ 0x1406AAE50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtSetInformationSymbolicLink(void *a1, int a2, __int64 a3, int a4)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v7; // ebx
  _DWORD *v8; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = ObReferenceObjectByHandle(a1, 1u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
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
