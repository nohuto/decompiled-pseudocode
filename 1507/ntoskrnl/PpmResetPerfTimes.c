/*
 * XREFs of PpmResetPerfTimes @ 0x140159A44
 * Callers:
 *     PpmResetPerfEngineForProcessor @ 0x14014EB9C (PpmResetPerfEngineForProcessor.c)
 *     PpmCheckReset @ 0x14016F4D4 (PpmCheckReset.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x1400A7330 (PpmSnapPerformanceAccumulation.c)
 *     PpmResetPerformanceAccumulation @ 0x140159AA8 (PpmResetPerformanceAccumulation.c)
 */

__int64 __fastcall PpmResetPerfTimes(LARGE_INTEGER *a1)
{
  LARGE_INTEGER *QuadPart; // rdi
  __int64 result; // rax

  QuadPart = (LARGE_INTEGER *)a1[3021].QuadPart;
  if ( QuadPart )
  {
    PpmResetPerformanceAccumulation();
    PpmSnapPerformanceAccumulation(a1, 1u, 0, 0, QuadPart + 3);
    QuadPart[1] = QuadPart[3];
    *QuadPart = QuadPart[4];
    result = QuadPart[5].QuadPart;
    QuadPart[2].QuadPart = result;
  }
  return result;
}
