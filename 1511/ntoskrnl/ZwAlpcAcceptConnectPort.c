/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x140151480
 * Callers:
 *     PopUmpoProcessMessage @ 0x140449588 (PopUmpoProcessMessage.c)
 *     PopMonitorProcessLoop @ 0x140549504 (PopMonitorProcessLoop.c)
 *     VfZwAlpcAcceptConnectPort @ 0x1406D126C (VfZwAlpcAcceptConnectPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
