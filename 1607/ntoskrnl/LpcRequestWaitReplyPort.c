/*
 * XREFs of LpcRequestWaitReplyPort @ 0x140548CE0
 * Callers:
 *     IopSendMessageToTrackService @ 0x1406225A0 (IopSendMessageToTrackService.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x14049D2A8 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPort(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, 0, 2);
}
