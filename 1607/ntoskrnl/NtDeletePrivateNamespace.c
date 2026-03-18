/*
 * XREFs of NtDeletePrivateNamespace @ 0x140668A8C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140477960 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRemoveNamespaceFromTable @ 0x1404D5BE0 (ObpRemoveNamespaceFromTable.c)
 */

NTSTATUS __fastcall NtDeletePrivateNamespace(void *a1)
{
  NTSTATUS result; // eax
  _DWORD *v2; // rbx
  int v3; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v5; // [rsp+50h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(
             a1,
             0x10000u,
             ObpDirectoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             &v5);
  if ( result >= 0 )
  {
    v2 = Object;
    if ( *((_QWORD *)Object + 41) )
    {
      v3 = ObpVerifyCreatorAccessCheck((__int64)Object + 400);
      if ( v3 >= 0 )
        v3 = ObpRemoveNamespaceFromTable(v2);
    }
    else
    {
      v3 = -1073741816;
    }
    ObfDereferenceObject(v2);
    return v3;
  }
  return result;
}
