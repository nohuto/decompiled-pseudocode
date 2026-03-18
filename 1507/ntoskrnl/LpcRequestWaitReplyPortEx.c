/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x1405325E0
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x140409B74 (DbgkpSendApiMessageLpc.c)
 *     ExpRaiseHardError @ 0x1406F7B94 (ExpRaiseHardError.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1405326A4 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(int a1, int a2, __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, KeGetCurrentThread()->PreviousMode, 2);
}
