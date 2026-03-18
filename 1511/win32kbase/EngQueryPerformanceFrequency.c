/*
 * XREFs of EngQueryPerformanceFrequency @ 0x1C00BF030
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
