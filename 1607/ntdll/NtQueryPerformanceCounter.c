/*
 * XREFs of NtQueryPerformanceCounter @ 0x1800A6A40
 * Callers:
 *     LdrpGenSecurityCookie @ 0x18002F0A4 (LdrpGenSecurityCookie.c)
 *     RtlQueryPerformanceCounter @ 0x18005BEE0 (RtlQueryPerformanceCounter.c)
 *     RtlHeapTrkInitialize @ 0x18008F3E0 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x18008F8C0 (RtlpHeapTrkGenerateHashRandoms.c)
 *     RtlpHeapTrkInterceptor @ 0x180090FB0 (RtlpHeapTrkInterceptor.c)
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
