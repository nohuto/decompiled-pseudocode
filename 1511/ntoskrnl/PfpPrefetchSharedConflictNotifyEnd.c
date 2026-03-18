/*
 * XREFs of PfpPrefetchSharedConflictNotifyEnd @ 0x140630DFC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PfpPrefetchSharedDeref @ 0x1404DD1A0 (PfpPrefetchSharedDeref.c)
 */

void __fastcall PfpPrefetchSharedConflictNotifyEnd(volatile signed __int64 *BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR *v4; // rbx

  if ( a2 )
  {
    v4 = &PfGlobals;
    if ( BugCheckParameter2 )
      v4 = (ULONG_PTR *)BugCheckParameter2;
    KeAbPreAcquire((ULONG_PTR)v4, a2, 0LL);
    KeAbPostReleaseEx((ULONG_PTR)v4, a2);
  }
  if ( BugCheckParameter2 )
    PfpPrefetchSharedDeref(BugCheckParameter2);
}
