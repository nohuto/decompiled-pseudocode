/*
 * XREFs of PipIsProviderStarted @ 0x1406012F8
 * Callers:
 *     IoResolveDependency @ 0x14013888C (IoResolveDependency.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140458ED0 (PipCheckForUnsatisfiedDependencies.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsProviderStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 >= 776 && (v1 == 776 || v1 > 779 && v1 <= 781);
}
