/*
 * XREFs of ?ndisCmCleanupSessionState@@YAXXZ @ 0x1C0061514
 * Callers:
 *     ndisCmCleanupWorkRoutine @ 0x1C00D8250 (ndisCmCleanupWorkRoutine.c)
 * Callees:
 *     <none>
 */

void ndisCmCleanupSessionState(void)
{
  KIRQL v0; // al
  unsigned int v1; // r8d
  __int64 i; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
  v1 = ndisCmSessionCount;
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    if ( *((_QWORD *)ndisCmSession + 3 * i + 1) )
    {
      KeReleaseSpinLock(&ndisCmSessionLock, v0);
      v0 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      v1 = ndisCmSessionCount;
    }
  }
  KeReleaseSpinLock(&ndisCmSessionLock, v0);
}
