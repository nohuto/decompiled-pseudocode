/*
 * XREFs of PpmResetPerformanceAccumulation @ 0x1401307CC
 * Callers:
 *     PpmResetPerfTimes @ 0x140130768 (PpmResetPerfTimes.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall PpmResetPerformanceAccumulation(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  if ( (a1[3165].QuadPart & 0x8000000000LL) != 0 )
    a1[3000].QuadPart = __readmsr(0xDB2u);
  a1[2986].QuadPart = __rdtsc();
  result = KeQueryPerformanceCounter(0LL);
  a1[2990] = result;
  return result;
}
