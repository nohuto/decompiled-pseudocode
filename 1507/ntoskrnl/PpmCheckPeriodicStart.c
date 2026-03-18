/*
 * XREFs of PpmCheckPeriodicStart @ 0x1400E7140
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

__int64 __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, int a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&dword_14032E2A8, Executive, 0, 0, &Timeout) )
    return PpmEventTraceFailedPerfCheckStart(PpmCheckLastExecutionTime);
  PpmCheckMakeupCount = a3;
  return PpmCheckStart(0LL);
}
