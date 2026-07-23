/*
 * XREFs of AlpcpGetDataFromMessage @ 0x14049D200
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x14049C9A4 (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpGetDataFromMessage(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 176) )
    return AlpcpGetDataFromUserVaSafe(a1, a2);
  else
    return AlpcpReadMessageData(a1, a2);
}
