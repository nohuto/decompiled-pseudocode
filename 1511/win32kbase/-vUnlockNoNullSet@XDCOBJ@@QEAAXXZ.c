/*
 * XREFs of ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EC0
 * Callers:
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     GreCleanDC @ 0x1C0042200 (GreCleanDC.c)
 *     GreGetNearestColor @ 0x1C0046DA0 (GreGetNearestColor.c)
 *     bDeleteDCInternal @ 0x1C006BEB0 (bDeleteDCInternal.c)
 *     GreCreateCompatibleDC @ 0x1C006C030 (GreCreateCompatibleDC.c)
 *     GreSetLayout @ 0x1C0075DC0 (GreSetLayout.c)
 *     NtGdiCreateMetafileDC @ 0x1C0083E30 (NtGdiCreateMetafileDC.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0088810 (--1DCOBJ@@QEAA@XZ.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00BB1A4 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreSetMagicColors @ 0x1C00BE85C (GreSetMagicColors.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vUnlockNoNullSet(XDCOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XDCOBJ::RestoreAttributes(this);
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  }
}
