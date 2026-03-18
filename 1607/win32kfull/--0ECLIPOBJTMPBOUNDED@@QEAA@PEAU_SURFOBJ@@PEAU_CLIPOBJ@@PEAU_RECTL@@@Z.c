/*
 * XREFs of ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02580A0
 * Callers:
 *     NtGdiEngGradientFill @ 0x1C02ADD60 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02AE150 (NtGdiEngLineTo.c)
 *     NtGdiEngStretchBlt @ 0x1C02AE9C0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AEE10 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AF350 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02AF6D0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02AF9F0 (NtGdiEngTextOut.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bContain@ERECTL@@QEAAHAEAU_RECTL@@@Z @ 0x1C0035590 (-bContain@ERECTL@@QEAAHAEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

ECLIPOBJTMPBOUNDED *__fastcall ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED(
        ECLIPOBJTMPBOUNDED *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4)
{
  struct REGION **v4; // rdi
  SURFACE *v9; // rax
  LONG cx; // edx
  LONG cy; // ecx
  bool v12; // cc
  struct _RECTL v14; // [rsp+20h] [rbp-30h] BYREF
  struct _RECTL v15; // [rsp+30h] [rbp-20h] BYREF

  v4 = (struct REGION **)((char *)this + 152);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 18) = 0LL;
  RGNMEMOBJTMP::RGNMEMOBJTMP((ECLIPOBJTMPBOUNDED *)((char *)this + 152));
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = 0;
  v9 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(a2);
  if ( !SURFACE::bClipEngRenderingsToSurfaceBounds(v9) )
    goto LABEL_2;
  cx = 0x7FFFFFF;
  *(_QWORD *)&v14.left = 0LL;
  cy = 0x7FFFFFF;
  if ( a2->sizlBitmap.cy < 0x7FFFFFF )
    cy = a2->sizlBitmap.cy;
  v12 = a2->sizlBitmap.cx < 0x7FFFFFF;
  v14.bottom = cy;
  if ( v12 )
    cx = a2->sizlBitmap.cx;
  v14.right = cx;
  if ( a3 && a3->iDComplexity )
  {
    v15 = *(struct _RECTL *)(*(_QWORD *)&a3[2].rclBounds.top + 88LL);
    if ( ERECTL::bContain((ERECTL *)&v14, &v15) )
    {
LABEL_2:
      *((_QWORD *)this + 21) = a3;
      *((_BYTE *)this + 176) = 1;
      return this;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
    if ( *v4 )
    {
      if ( *(_QWORD *)&v15.left )
      {
        RGNOBJ::vSet((RGNOBJ *)&v15, &v14);
        if ( RGNOBJ::bMerge(
               (RGNOBJ *)v4,
               (struct RGNOBJ *)&a3[2].rclBounds.top,
               (struct RGNOBJ *)&v15,
               BYTE1(gafjRgnOp)) )
        {
          XCLIPOBJ::vSetup(this, *v4, (struct ERECTL *)&v14, 1);
          *((_QWORD *)this + 21) = this;
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
  }
  else if ( *v4 )
  {
    if ( a4 )
      ERECTL::operator*=(&v14, a4);
    RGNOBJ::vSet((RGNOBJ *)v4, &v14);
    XCLIPOBJ::vSetup(this, *v4, (struct ERECTL *)&v14, 1);
    *((_QWORD *)this + 21) = this;
  }
  return this;
}
