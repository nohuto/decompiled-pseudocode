/*
 * XREFs of EngReleaseSemaphore @ 0x1C0076290
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __stdcall EngReleaseSemaphore(HSEMAPHORE hsem)
{
  __int64 v2; // rcx

  EtwTraceGreLockReleaseSemaphore((__int64)L"hsem");
  if ( hsem )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)hsem);
    PsLeavePriorityRegion(v2);
  }
}
