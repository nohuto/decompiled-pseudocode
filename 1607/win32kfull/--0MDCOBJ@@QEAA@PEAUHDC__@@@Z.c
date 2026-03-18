/*
 * XREFs of ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02A69E8
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C01012F0 (NtGdiSelectBitmap.c)
 *     GreRealizePalette @ 0x1C01458E0 (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x1C02B4820 (NtGdiResizePalette.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

MDCOBJ *__fastcall MDCOBJ::MDCOBJ(MDCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
