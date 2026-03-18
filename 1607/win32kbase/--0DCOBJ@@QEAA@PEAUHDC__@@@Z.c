/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C
 * Callers:
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     GreSetupDCAttributes @ 0x1C0020D30 (GreSetupDCAttributes.c)
 *     GreGetClipBox @ 0x1C0045240 (GreGetClipBox.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 *     bDeleteDCInternal @ 0x1C005A4D0 (bDeleteDCInternal.c)
 *     GreGetNearestColor @ 0x1C005B330 (GreGetNearestColor.c)
 *     GreSelectBrush @ 0x1C005C6C0 (GreSelectBrush.c)
 *     GreSelectPalette @ 0x1C005C9C0 (GreSelectPalette.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0075850 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     GreGetDCPoint @ 0x1C0075BA0 (GreGetDCPoint.c)
 *     GreCleanDC @ 0x1C0077530 (GreCleanDC.c)
 *     GreSetLayout @ 0x1C0079D30 (GreSetLayout.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00853F0 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiCreateMetafileDC @ 0x1C0085650 (NtGdiCreateMetafileDC.c)
 *     GreSelectPen @ 0x1C00BD4A0 (GreSelectPen.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00C6E78 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreSetMagicColors @ 0x1C00CA4B8 (GreSetMagicColors.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00CCFD0 (GreCleanDCAndSetOwnerEx.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00BCF30 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00BD350 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 16);
  XDCOBJ::vLock(this, a2);
  return this;
}
