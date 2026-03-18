/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C0025504
 * Callers:
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     GreSetupDCAttributes @ 0x1C0020D30 (GreSetupDCAttributes.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetClipBox @ 0x1C0045240 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C00453F0 (GreIntersectClipRect.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 *     GreGetNearestColor @ 0x1C005B330 (GreGetNearestColor.c)
 *     GreSelectBrush @ 0x1C005C6C0 (GreSelectBrush.c)
 *     GreSelectPalette @ 0x1C005C9C0 (GreSelectPalette.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C006B5F0 (pConvertDfbSurfaceToDibInternal.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0075850 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     GreGetDCPoint @ 0x1C0075BA0 (GreGetDCPoint.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00853F0 (NtGdiGetDeviceCapsAll.c)
 *     GreSelectPen @ 0x1C00BD4A0 (GreSelectPen.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00BE240 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00BEDE4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C00CA4B8 (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C00CBA80 (GreIntersectVisRect.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00CCFD0 (GreCleanDCAndSetOwnerEx.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>((char *)this + 16);
}
