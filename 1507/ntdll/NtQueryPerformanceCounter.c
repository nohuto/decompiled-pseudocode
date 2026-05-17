/*
 * XREFs of NtQueryPerformanceCounter @ 0x180093C10
 * Callers:
 *     LdrpGenSecurityCookie @ 0x1800414D8 (LdrpGenSecurityCookie.c)
 *     RtlQueryPerformanceCounter @ 0x180059550 (RtlQueryPerformanceCounter.c)
 *     RtlHeapTrkInitialize @ 0x1800E0E00 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800E16EC (RtlpHeapTrkGenerateHashRandoms.c)
 *     RtlpHeapTrkInterceptor @ 0x1800E1810 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryPerformanceCounter()
{
  __int64 result; // rax

  result = 49LL;
  __asm { syscall; Low latency system call }
  return result;
}
