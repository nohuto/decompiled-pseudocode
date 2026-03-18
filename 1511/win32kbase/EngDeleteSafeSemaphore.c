/*
 * XREFs of EngDeleteSafeSemaphore @ 0x1C00BED30
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C0059DB0 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  __int64 v1; // rdx
  int v2; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  GreAcquireHmgrSemaphore((__int64)pssem, v1, v2);
  if ( pssem->lCount == 1 )
  {
    GreDeleteSemaphore((PERESOURCE)pssem->hsem);
    pssem->hsem = 0LL;
  }
  --pssem->lCount;
  GreReleaseHmgrSemaphore(v5, v4, v6);
}
