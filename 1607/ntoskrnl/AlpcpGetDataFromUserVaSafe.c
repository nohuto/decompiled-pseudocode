/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x1404C3208
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x140448B60 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404494D0 (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044B990 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x1404B26D4 (AlpcpProcessConnectionRequest.c)
 *     AlpcpGetDataFromMessage @ 0x1404B2E20 (AlpcpGetDataFromMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404B3100 (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 232));
}
