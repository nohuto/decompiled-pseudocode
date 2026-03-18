/*
 * XREFs of PipIsProviderStarted @ 0x14062B344
 * Callers:
 *     IoResolveDependency @ 0x1401428E4 (IoResolveDependency.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1403F4C84 (PipCheckForUnsatisfiedDependencies.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsProviderStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 >= 776 && (v1 == 776 || v1 > 779 && v1 <= 781);
}
