/*
 * XREFs of GreLockDisplayDevice @ 0x1C00459D0
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0045758 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     sub_1C0054204 @ 0x1C0054204 (sub_1C0054204.c)
 *     GreSuspendDirectDraw @ 0x1C0078370 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C00784E4 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007BBC0 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngUpdateSQMData@@YAXXZ @ 0x1C00B82D0 (-DxgkEngUpdateSQMData@@YAXXZ.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 */

__int64 __fastcall GreLockDisplayDevice(__int64 a1)
{
  EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 64));
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 64), 11LL);
}
