/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1401800F0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400D11BC (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1400EE0C4 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     PopMonitorProcessLoop @ 0x1405C0B10 (PopMonitorProcessLoop.c)
 *     VfZwAlpcSendWaitReceivePort @ 0x140755294 (VfZwAlpcSendWaitReceivePort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
