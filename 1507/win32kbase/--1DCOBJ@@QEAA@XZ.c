/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58
 * Callers:
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C000F250 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     GreSetLayout @ 0x1C0012430 (GreSetLayout.c)
 *     GreCreateCompatibleDC @ 0x1C00165F0 (GreCreateCompatibleDC.c)
 *     GreGetNearestColor @ 0x1C0025760 (GreGetNearestColor.c)
 *     GreGetClipBox @ 0x1C0026E80 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C00279E0 (GreIntersectClipRect.c)
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C003A070 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C00417F0 (NtGdiDeleteObjectApp.c)
 *     GreSetupDCAttributes @ 0x1C0042690 (GreSetupDCAttributes.c)
 *     NtGdiCreateCompatibleDC @ 0x1C0042910 (NtGdiCreateCompatibleDC.c)
 *     GreCleanDC @ 0x1C0050BE0 (GreCleanDC.c)
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 *     GreGetDCPoint @ 0x1C0054BF0 (GreGetDCPoint.c)
 *     GreGetDeviceCaps @ 0x1C0056DB0 (GreGetDeviceCaps.c)
 *     GreSelectPalette @ 0x1C005A950 (GreSelectPalette.c)
 *     GreSelectBrush @ 0x1C005AFC0 (GreSelectBrush.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005BEBC (-vCleanupDCs@@YAXK@Z.c)
 *     bDeleteDCInternal @ 0x1C005C1D0 (bDeleteDCInternal.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005DAF0 (pConvertDfbSurfaceToDibInternal.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0069220 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiCreateMetafileDC @ 0x1C0069580 (NtGdiCreateMetafileDC.c)
 *     GreSelectPen @ 0x1C00AF3F0 (GreSelectPen.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B02CC (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00B0E84 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00B9298 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreSetMagicColors @ 0x1C00BD108 (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C00BE2A0 (GreIntersectVisRect.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00BF750 (GreCleanDCAndSetOwnerEx.c)
 *     GreRestoreDCInternal @ 0x1C00BF7E0 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00AF360 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
  PopThreadGuardedObject((_QWORD *)this + 2);
}
