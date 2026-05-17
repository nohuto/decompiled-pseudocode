/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x1800E4760
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1800E4B50 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
