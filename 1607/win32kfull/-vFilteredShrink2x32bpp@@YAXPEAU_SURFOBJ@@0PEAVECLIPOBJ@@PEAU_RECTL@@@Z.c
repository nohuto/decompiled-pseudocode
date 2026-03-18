/*
 * XREFs of ?vFilteredShrink2x32bpp@@YAXPEAU_SURFOBJ@@0PEAVECLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C028825C
 * Callers:
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C02877F0 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00418B4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?vFilteredShrinkRectangle2x32bpp@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C0288320 (-vFilteredShrinkRectangle2x32bpp@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 */

void __fastcall vFilteredShrink2x32bpp(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct ECLIPOBJ *this,
        struct _RECTL *a4)
{
  unsigned int v8; // ebx
  int i; // edi
  struct _RECTL v10; // [rsp+30h] [rbp-1A8h] BYREF
  _DWORD v11[84]; // [rsp+40h] [rbp-198h] BYREF

  XCLIPOBJ::cEnumStart(this, 0, 0, 4u, 0);
  do
  {
    v8 = 0;
    for ( i = XCLIPOBJ::bEnum(this, 0x144u, (char *)v11, 0LL); v8 < v11[0]; ++v8 )
    {
      if ( bIntersect((const struct _RECTL *)&v11[4 * v8 + 1], a4, &v10) )
        vFilteredShrinkRectangle2x32bpp(a1, a2, &v10);
    }
  }
  while ( i );
}
