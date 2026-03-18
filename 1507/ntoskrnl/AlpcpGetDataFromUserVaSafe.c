/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x14052F9E8
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x1404760D0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140529BA4 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x140529D38 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 168), *(unsigned __int16 *)(a1 + 224));
}
