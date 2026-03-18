/*
 * XREFs of EngAcquireSemaphoreShared @ 0x1C00BEB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngAcquireSemaphoreShared(HSEMAPHORE hsem)
{
  __int64 v1; // r8

  if ( hsem )
    ExEnterPriorityRegionAndAcquireResourceShared(hsem);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", (__int64)hsem, v1);
}
