/*
 * XREFs of ZwAlpcSetInformation @ 0x140151740
 * Callers:
 *     VfZwAlpcSetInformation @ 0x1406D17B8 (VfZwAlpcSetInformation.c)
 *     PopUmpoInitializeChannel @ 0x14076F050 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x14076FF8C (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSetInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
