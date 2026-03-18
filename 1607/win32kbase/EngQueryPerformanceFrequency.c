/*
 * XREFs of EngQueryPerformanceFrequency @ 0x1C00CAD00
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
