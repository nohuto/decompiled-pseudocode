/*
 * XREFs of AlpcpGetDataFromMessage @ 0x140482550
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x140482368 (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     <none>
 */

void *__fastcall AlpcpGetDataFromMessage(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 168) )
    return (void *)AlpcpGetDataFromUserVaSafe(a1, a2);
  else
    return AlpcpReadMessageData(a1, a2);
}
