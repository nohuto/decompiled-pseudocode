/*
 * XREFs of ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C0079F30
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C006E360 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall DxgkEngVisRgnUniq(__int64 a1, __int64 a2, __int64 a3)
{
  PERESOURCE v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // r8

  v3 = ghsemVisRgnUniqueness;
  if ( ghsemVisRgnUniqueness )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemVisRgnUniqueness);
    v3 = ghsemVisRgnUniqueness;
  }
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemVisRgnUniqueness", (__int64)v3, a3);
  v4 = giVisRgnUniqueness + WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemVisRgnUniqueness", (__int64)ghsemVisRgnUniqueness, v5);
  GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
  return v4;
}
