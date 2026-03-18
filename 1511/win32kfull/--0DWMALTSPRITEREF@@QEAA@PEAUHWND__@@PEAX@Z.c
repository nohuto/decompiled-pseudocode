/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C003BE24
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C0101A80 (GreGetDxSharedSurface.c)
 *     GreHintSpriteBlt @ 0x1C0145A60 (GreHintSpriteBlt.c)
 *     GreGetDxRgn @ 0x1C0260F50 (GreGetDxRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C0261194 (GreGetHwndUpdateIds.c)
 *     GreHintDxUpdate @ 0x1C026152C (GreHintDxUpdate.c)
 *     GreSetHwndPresentFlags @ 0x1C026196C (GreSetHwndPresentFlags.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C003BE5C (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C003BEAC (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2, HSPRITE a3)
{
  *(_QWORD *)this = 0LL;
  if ( a2 )
    a3 = DWMSPRITEREF::hspLookupWindow(a2);
  if ( a3 )
    DWMALTSPRITEREF::AltLockSpriteObj(this, a3);
  return this;
}
