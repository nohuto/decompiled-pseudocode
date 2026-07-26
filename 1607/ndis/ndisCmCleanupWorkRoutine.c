/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1C00D7940
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmCleanupSessionState@@YAXXZ @ 0x1C0065060 (-ndisCmCleanupSessionState@@YAXXZ.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&ndisCmWorkItemQueued, 0);
  if ( ndisCmSessionCount )
    ndisCmCleanupSessionState();
}
