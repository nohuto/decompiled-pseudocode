/*
 * XREFs of ?ndisCmLazyInitializeCleanup@@YAXXZ @ 0x1C0065150
 * Callers:
 *     NdisSetSessionCompartmentId @ 0x1C00653A0 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     <none>
 */

void ndisCmLazyInitializeCleanup(void)
{
  if ( !_InterlockedCompareExchange(&ndisCmCleanupScheduled, 1, 0) )
    KeSetCoalescableTimer(&ndisCmCleanupTimer, (LARGE_INTEGER)-300000000LL, 0x7530u, 0x1D4Cu, &ndisCmCleanupDpc);
}
