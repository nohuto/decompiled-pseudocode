/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x140151720
 * Callers:
 *     PopUmpoProcessMessages @ 0x140092198 (PopUmpoProcessMessages.c)
 *     PopUmpoSendPowerMessage @ 0x140098C28 (PopUmpoSendPowerMessage.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 *     PopMonitorProcessLoop @ 0x140549504 (PopMonitorProcessLoop.c)
 *     VfZwAlpcSendWaitReceivePort @ 0x1406D16CC (VfZwAlpcSendWaitReceivePort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
