/*
 * XREFs of EngQueryPerformanceFrequency @ 0x1C00BD8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall EngQueryPerformanceFrequency(LONGLONG *pFrequency)
{
  KeQueryPerformanceCounter((PLARGE_INTEGER)pFrequency);
}
