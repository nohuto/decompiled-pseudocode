/*
 * XREFs of NtMakeTemporaryObject @ 0x140494204
 * Callers:
 *     IopReassignSystemRoot @ 0x14076F68C (IopReassignSystemRoot.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObMakeTemporaryObject @ 0x140494274 (ObMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1406520E0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __stdcall NtMakeTemporaryObject(HANDLE Handle)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v5; // [rsp+50h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(Handle, 0x10000u, 0LL, KeGetCurrentThread()->PreviousMode, &Object, &v5);
  v3 = result;
  if ( result >= 0 )
  {
    ObMakeTemporaryObject(Object);
    if ( (v5.HandleAttributes & 4) != 0 )
      SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
    ObfDereferenceObject(Object);
    return v3;
  }
  return result;
}
