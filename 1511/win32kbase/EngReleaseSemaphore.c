/*
 * XREFs of EngReleaseSemaphore @ 0x1C006E7A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

void __stdcall EngReleaseSemaphore(HSEMAPHORE hsem)
{
  __int64 v1; // r8
  __int64 v3; // rcx

  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(hsem, &LockRelease, v1, hsem);
  if ( hsem )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)hsem);
    PsLeavePriorityRegion(v3);
  }
}
