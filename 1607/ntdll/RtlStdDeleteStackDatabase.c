/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x1800F25D0
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1800F29C0 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
