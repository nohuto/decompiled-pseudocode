/*
 * XREFs of PpmIdleRemoveConcurrency @ 0x14013CB78
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleUpdateConcurrency @ 0x14013CC00 (PpmIdleUpdateConcurrency.c)
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
