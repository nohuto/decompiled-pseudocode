/*
 * XREFs of ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B40
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002BB60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002C9A0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005A02C (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C005A300 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     GreCreatePatternBrushInternal @ 0x1C005B700 (GreCreatePatternBrushInternal.c)
 *     GreSuspendDirectDraw @ 0x1C0065420 (GreSuspendDirectDraw.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00659E0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C1AE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreSetMagicColors @ 0x1C00CA4B8 (GreSetMagicColors.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x1C00CCEBC (--1SURFREFGC@@QEAA@XZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(DYNAMICMODECHANGESHARELOCK *this)
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
}
