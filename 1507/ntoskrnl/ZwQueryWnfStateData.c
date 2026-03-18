/*
 * XREFs of ZwQueryWnfStateData @ 0x140181910
 * Callers:
 *     PopBatteryWorker @ 0x14056B280 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
