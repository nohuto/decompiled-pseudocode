/*
 * XREFs of PpmIdleRemoveConcurrency @ 0x140146A4C
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleUpdateConcurrency @ 0x140146AD4 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleRemoveConcurrency(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi

  v1 = *(KSPIN_LOCK **)(a1 + 24192);
  if ( v1 )
  {
    KeQueryPerformanceCounter(0LL);
    PpmIdleUpdateConcurrency(v1);
    *(_QWORD *)(a1 + 24192) = 0LL;
  }
  return 0LL;
}
