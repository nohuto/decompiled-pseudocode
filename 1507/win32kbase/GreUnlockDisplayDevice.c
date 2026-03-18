/*
 * XREFs of GreUnlockDisplayDevice @ 0x1C0061400
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0031698 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0060EE0 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0061054 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0061290 (DrvNotifyModeChangeStartStop.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C00824D0 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngUpdateSQMData@@YAXXZ @ 0x1C00B5BE0 (-DxgkEngUpdateSQMData@@YAXXZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockDisplayDevice(__int64 a1, __int64 a2, __int64 a3)
{
  EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 64), a3);
  return GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(a1 + 64));
}
