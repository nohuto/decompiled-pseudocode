/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00D8488
 * Callers:
 *     GreHintSpriteBlt @ 0x1C00D6900 (GreHintSpriteBlt.c)
 *     GreGetDxSharedSurface @ 0x1C00D6ACC (GreGetDxSharedSurface.c)
 *     GreGetDxRgn @ 0x1C025E870 (GreGetDxRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C025EAD8 (GreGetHwndUpdateIds.c)
 *     GreHintDxUpdate @ 0x1C025EE58 (GreHintDxUpdate.c)
 *     GreSetHwndPresentFlags @ 0x1C025F2C0 (GreSetHwndPresentFlags.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00D84C0 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00D8510 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2, HSPRITE a3)
{
  *(_QWORD *)this = 0LL;
  if ( a2 )
    a3 = DWMALTSPRITEREF::hspLookupWindow(a2);
  if ( a3 )
    DWMALTSPRITEREF::AltLockSpriteObj(this, a3);
  return this;
}
