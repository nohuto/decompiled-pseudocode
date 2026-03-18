/*
 * XREFs of ZwQueryWnfStateData @ 0x140152FA0
 * Callers:
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
