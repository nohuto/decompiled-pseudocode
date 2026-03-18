/*
 * XREFs of NtSetEventBoostPriority @ 0x1406F0A44
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeSetEventBoostPriority @ 0x1402018D4 (KeSetEventBoostPriority.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtSetEventBoostPriority(HANDLE EventHandle)
{
  int v1; // edi
  PVOID v2; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v1 = ObReferenceObjectByHandle(
         EventHandle,
         2u,
         (POBJECT_TYPE)ExEventObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v1 >= 0 )
  {
    v2 = Object;
    if ( (*(_BYTE *)Object & 0x7F) != 0 )
      KeSetEventBoostPriority((__int64)Object, 0LL);
    else
      v1 = -1073741788;
    ObfDereferenceObject(v2);
  }
  return v1;
}
