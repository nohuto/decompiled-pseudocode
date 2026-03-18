/*
 * XREFs of ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02A5DC8
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C00DE890 (NtGdiSelectBitmap.c)
 *     GreRealizePalette @ 0x1C0111C40 (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x1C02B26C0 (NtGdiResizePalette.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025E4FC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

MDCOBJ *__fastcall MDCOBJ::MDCOBJ(MDCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
