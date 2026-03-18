/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x14015AAE0
 * Callers:
 *     PopUmpoProcessMessage @ 0x1403F7B28 (PopUmpoProcessMessage.c)
 *     PopMonitorProcessLoop @ 0x14057E790 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
