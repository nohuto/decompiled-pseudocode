/*
 * XREFs of NtQueryPerformanceCounter @ 0x1800A56E0
 * Callers:
 *     LdrpGenSecurityCookie @ 0x18000E50C (LdrpGenSecurityCookie.c)
 *     RtlQueryPerformanceCounter @ 0x18004A7B0 (RtlQueryPerformanceCounter.c)
 *     RtlpHeapTrkInterceptor @ 0x180094F10 (RtlpHeapTrkInterceptor.c)
 *     RtlHeapTrkInitialize @ 0x1800E6560 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800E6DAC (RtlpHeapTrkGenerateHashRandoms.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryPerformanceCounter()
{
  __int64 result; // rax

  result = 49LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
