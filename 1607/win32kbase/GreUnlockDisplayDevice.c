/*
 * XREFs of GreUnlockDisplayDevice @ 0x1C0065B20
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C0065420 (GreSuspendDirectDraw.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0065808 (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C006596C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00659E0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C00699B0 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockDisplayDevice(__int64 a1)
{
  EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()");
  return GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(a1 + 64));
}
