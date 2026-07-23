/*
 * XREFs of NtQueryPerformanceCounter @ 0x1800A6A40
 * Callers:
 *     LdrpGenSecurityCookie @ 0x18002F094 (LdrpGenSecurityCookie.c)
 *     RtlQueryPerformanceCounter @ 0x18005BED0 (RtlQueryPerformanceCounter.c)
 *     RtlHeapTrkInitialize @ 0x18008F3D0 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x18008F8B0 (RtlpHeapTrkGenerateHashRandoms.c)
 *     RtlpHeapTrkInterceptor @ 0x180090FA0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter, PLARGE_INTEGER PerformanceFrequency)
{
  NTSTATUS result; // eax

  result = 49;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
