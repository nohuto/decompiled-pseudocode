/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x1800E92C0
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1800E96B0 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
