/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x14017FE50
 * Callers:
 *     PopUmpoProcessMessage @ 0x1404FFA1C (PopUmpoProcessMessage.c)
 *     PopMonitorProcessLoop @ 0x1405C0B10 (PopMonitorProcessLoop.c)
 *     VfZwAlpcAcceptConnectPort @ 0x140754E34 (VfZwAlpcAcceptConnectPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
