/*
 * XREFs of GreUnlockSprite @ 0x1C0065AF0
 * Callers:
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C006596C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00659E0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockSprite()
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite");
  return GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemSprite);
}
