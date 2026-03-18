/*
 * XREFs of ZwAlpcSetInformation @ 0x140180110
 * Callers:
 *     VfZwAlpcSetInformation @ 0x140755380 (VfZwAlpcSetInformation.c)
 *     PopUmpoInitializeChannel @ 0x1407E46C0 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1407E6004 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSetInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
