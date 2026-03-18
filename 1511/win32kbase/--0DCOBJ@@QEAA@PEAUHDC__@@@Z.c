/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004373C
 * Callers:
 *     GreSetupDCAttributes @ 0x1C0025D50 (GreSetupDCAttributes.c)
 *     GreCleanDC @ 0x1C0042200 (GreCleanDC.c)
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     GreGetNearestColor @ 0x1C0046DA0 (GreGetNearestColor.c)
 *     GreCreateCompatibleDC @ 0x1C006C030 (GreCreateCompatibleDC.c)
 *     GreSetLayout @ 0x1C0075DC0 (GreSetLayout.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0083B80 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiCreateMetafileDC @ 0x1C0083E30 (NtGdiCreateMetafileDC.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00BB1A4 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreSetMagicColors @ 0x1C00BE85C (GreSetMagicColors.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00316F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
