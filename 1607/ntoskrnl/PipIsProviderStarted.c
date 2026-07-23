/*
 * XREFs of PipIsProviderStarted @ 0x14062B3F8
 * Callers:
 *     IoResolveDependency @ 0x140142E54 (IoResolveDependency.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1403F3B48 (PipCheckForUnsatisfiedDependencies.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsProviderStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 >= 776 && (v1 == 776 || v1 > 779 && v1 <= 781);
}
