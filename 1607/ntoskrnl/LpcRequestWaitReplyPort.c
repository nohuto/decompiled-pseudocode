/*
 * XREFs of LpcRequestWaitReplyPort @ 0x1405487A0
 * Callers:
 *     IopSendMessageToTrackService @ 0x1406224EC (IopSendMessageToTrackService.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1404B2EC8 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPort(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, 0, 2);
}
