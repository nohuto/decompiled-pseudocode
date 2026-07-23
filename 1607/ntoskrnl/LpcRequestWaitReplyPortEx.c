/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x14049C3B4
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x14061A4BC (DbgkpSendApiMessageLpc.c)
 *     ExpRaiseHardError @ 0x1406B6484 (ExpRaiseHardError.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x14049D2A8 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(int a1, int a2, __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, KeGetCurrentThread()->PreviousMode, 2);
}
