/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x1404AAB5C
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x1404AAA54 (DbgkpSendApiMessageLpc.c)
 *     ExpRaiseHardError @ 0x1406735D8 (ExpRaiseHardError.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1404AAC20 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(int a1, int a2, __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, KeGetCurrentThread()->PreviousMode, 2);
}
