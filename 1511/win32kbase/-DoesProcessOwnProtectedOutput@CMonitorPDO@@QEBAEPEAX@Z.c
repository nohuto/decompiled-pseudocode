/*
 * XREFs of ?DoesProcessOwnProtectedOutput@CMonitorPDO@@QEBAEPEAX@Z @ 0x1C00831E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMonitorPDO::DoesProcessOwnProtectedOutput(void **this, void *a2)
{
  return a2 == this[7];
}
