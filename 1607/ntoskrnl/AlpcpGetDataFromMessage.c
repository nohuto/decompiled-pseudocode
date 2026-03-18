/*
 * XREFs of AlpcpGetDataFromMessage @ 0x1404B2E20
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x1404B25C4 (AlpcpReceiveLegacyConnectionReply.c)
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
