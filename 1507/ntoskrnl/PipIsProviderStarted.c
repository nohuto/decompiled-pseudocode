/*
 * XREFs of PipIsProviderStarted @ 0x14067BF08
 * Callers:
 *     IoResolveDependency @ 0x1401681EC (IoResolveDependency.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1404E22B4 (PipCheckForUnsatisfiedDependencies.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsProviderStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 >= 776 && (v1 == 776 || v1 > 779 && v1 <= 781);
}
