/*
 * XREFs of EngInitializeSafeSemaphore @ 0x1C00BD720
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C002439C (GreCreateSemaphoreInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 */

BOOL __stdcall EngInitializeSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  int v1; // edx
  int v2; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  BOOL v7; // ebx
  HSEMAPHORE SemaphoreInternal; // rax

  GreAcquireHmgrSemaphore((__int64)pssem, v1, v2);
  v7 = 0;
  if ( pssem->lCount
    || (SemaphoreInternal = (HSEMAPHORE)GreCreateSemaphoreInternal(), (pssem->hsem = SemaphoreInternal) != 0LL) )
  {
    ++pssem->lCount;
    v7 = 1;
  }
  GreReleaseHmgrSemaphore(v5, v4, v6);
  return v7;
}
