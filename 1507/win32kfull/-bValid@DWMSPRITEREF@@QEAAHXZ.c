/*
 * XREFs of ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0010394
 * Callers:
 *     GreReferenceObject @ 0x1C000BE2C (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C000C01C (GreDereferenceObject.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C000D1CC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00A08F4 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     NtGdiSetColorSpace @ 0x1C02B1510 (NtGdiSetColorSpace.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DWMSPRITEREF::bValid(DWMSPRITEREF *this)
{
  return *((_QWORD *)this + 4) != 0LL;
}
