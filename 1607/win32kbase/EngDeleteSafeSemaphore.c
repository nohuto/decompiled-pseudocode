/*
 * XREFs of EngDeleteSafeSemaphore @ 0x1C00CAA00
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C006A130 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  int v1; // edx
  int v2; // r8d
  __int64 v4; // rcx

  GreAcquireHmgrSemaphore((__int64)pssem, v1, v2);
  if ( pssem->lCount == 1 )
  {
    GreDeleteSemaphore((PERESOURCE)pssem->hsem);
    pssem->hsem = 0LL;
  }
  --pssem->lCount;
  GreReleaseHmgrSemaphore(v4);
}
