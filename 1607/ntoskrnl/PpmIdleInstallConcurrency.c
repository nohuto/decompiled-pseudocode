/*
 * XREFs of PpmIdleInstallConcurrency @ 0x140146524
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleUpdateConcurrency @ 0x140146564 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleInstallConcurrency(__int64 a1, KSPIN_LOCK *a2)
{
  KeQueryPerformanceCounter(0LL);
  PpmIdleUpdateConcurrency(a2);
  *(_QWORD *)(a1 + 24192) = a2;
  return 0LL;
}
