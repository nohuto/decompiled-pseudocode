/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x1404B1FD4
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x14061A408 (DbgkpSendApiMessageLpc.c)
 *     ExpRaiseHardError @ 0x1406B634C (ExpRaiseHardError.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1404B2EC8 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(int a1, int a2, __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, KeGetCurrentThread()->PreviousMode, 2);
}
