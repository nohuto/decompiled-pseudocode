/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x1404C0D64
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     AlpcpUnlockMessage @ 0x1404091E8 (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040B470 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpRemoveResourcePort @ 0x14042B344 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x1404C0ED8 (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(__int64 *a1)
{
  ULONG_PTR v1; // rdi
  __int64 v3; // rcx

  v1 = a1[3];
  if ( v1 )
  {
    AlpcpLockForCachedReferenceBlob(a1[3]);
    *(_QWORD *)(v1 + 96) = 0LL;
    a1[3] = 0LL;
    AlpcpUnlockMessage(v1);
  }
  v3 = a1[1];
  if ( v3 )
    AlpcDeleteBlobByHandle(v3, a1[2], a1);
  if ( *a1 )
  {
    AlpcpRemoveResourcePort(*a1, (__int64)a1);
    ObfDereferenceObject((PVOID)*a1);
  }
  return 0LL;
}
