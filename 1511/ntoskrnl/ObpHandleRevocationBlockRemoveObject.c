/*
 * XREFs of ObpHandleRevocationBlockRemoveObject @ 0x14049BF20
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 *     ObpProcessRemoveObjectQueue @ 0x14049BD74 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x14062DAAC (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

__int64 __fastcall ObpHandleRevocationBlockRemoveObject(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 > 2 )
    return ObpHandleRevocationBlockRemoveInsertedObject(a1, v1, 0LL, 0LL);
  return result;
}
