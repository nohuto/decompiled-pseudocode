/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x14015AD80
 * Callers:
 *     PopUmpoProcessMessages @ 0x140009EEC (PopUmpoProcessMessages.c)
 *     PopUmpoSendPowerMessage @ 0x1400FB738 (PopUmpoSendPowerMessage.c)
 *     PopMonitorProcessLoop @ 0x14057E790 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x14061A524 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
