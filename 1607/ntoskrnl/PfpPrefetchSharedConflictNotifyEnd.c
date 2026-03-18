/*
 * XREFs of PfpPrefetchSharedConflictNotifyEnd @ 0x140669018
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400C66BC (KeAbPostReleaseEx.c)
 *     PfpPrefetchSharedDeref @ 0x1403EDC40 (PfpPrefetchSharedDeref.c)
 */

void __fastcall PfpPrefetchSharedConflictNotifyEnd(volatile signed __int64 *BugCheckParameter2, unsigned __int64 a2)
{
  ULONG_PTR *v4; // rbx

  if ( a2 )
  {
    v4 = &PfGlobals;
    if ( BugCheckParameter2 )
      v4 = (ULONG_PTR *)BugCheckParameter2;
    KeAbPreAcquire((ULONG_PTR)v4, a2, 0);
    KeAbPostReleaseEx((ULONG_PTR)v4, a2);
  }
  if ( BugCheckParameter2 )
    PfpPrefetchSharedDeref(BugCheckParameter2);
}
