/*
 * XREFs of GreLockVisRgnShared @ 0x1C000ECC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C000B5B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreLockVisRgnShared(__int64 a1, __int64 a2, __int64 a3)
{
  PERESOURCE v3; // rdx
  __int64 v4; // r8
  PERESOURCE v5; // rdx
  __int64 v6; // r8
  PERESOURCE v7; // rdx

  v3 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v3 = ghsemDynamicModeChange;
  }
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (__int64)v3, a3);
  v5 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
    v5 = ghsemGreLock;
  }
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemGreLock", (__int64)v5, v4);
  v7 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
    v7 = ghsemDCVisRgn;
  }
  return EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDCVisRgn", (__int64)v7, v6);
}
