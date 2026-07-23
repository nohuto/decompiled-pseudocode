/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x1404AEF1C
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x14049CAB4 (AlpcpProcessConnectionRequest.c)
 *     AlpcpGetDataFromMessage @ 0x14049D200 (AlpcpGetDataFromMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x14049D4E0 (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 232));
}
