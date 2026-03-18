/*
 * XREFs of LpcRequestWaitReplyPort @ 0x14050D090
 * Callers:
 *     IopSendMessageToTrackService @ 0x1405F8664 (IopSendMessageToTrackService.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1404AAC20 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPort(__int64 a1, __int64 a2, ULONG64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, 0, 2);
}
