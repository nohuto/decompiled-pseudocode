/*
 * XREFs of LpcRequestWaitReplyPort @ 0x140584464
 * Callers:
 *     IopSendMessageToTrackService @ 0x1406725FC (IopSendMessageToTrackService.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1405326A4 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPort(__int64 a1, __int64 a2, ULONG64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, 0, 2);
}
