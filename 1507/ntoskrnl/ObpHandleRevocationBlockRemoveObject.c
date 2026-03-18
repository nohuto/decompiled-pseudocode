/*
 * XREFs of ObpHandleRevocationBlockRemoveObject @ 0x140524370
 * Callers:
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCheckInitiatorHint @ 0x140111C20 (IopCheckInitiatorHint.c)
 *     ObpProcessRemoveObjectQueue @ 0x140474070 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1406AB630 (ObpHandleRevocationBlockRemoveInsertedObject.c)
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
