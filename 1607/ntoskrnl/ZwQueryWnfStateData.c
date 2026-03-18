/*
 * XREFs of ZwQueryWnfStateData @ 0x14015C680
 * Callers:
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
