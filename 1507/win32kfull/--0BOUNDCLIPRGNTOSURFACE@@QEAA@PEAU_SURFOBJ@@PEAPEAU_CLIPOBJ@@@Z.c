/*
 * XREFs of ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00CE854
 * Callers:
 *     EngStrokeAndFillPath @ 0x1C0006A30 (EngStrokeAndFillPath.c)
 *     EngStrokePath @ 0x1C00CE630 (EngStrokePath.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bContain@ERECTL@@QEAAHAEAU_RECTL@@@Z @ 0x1C009DABC (-bContain@ERECTL@@QEAAHAEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

BOUNDCLIPRGNTOSURFACE *__fastcall BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE(
        BOUNDCLIPRGNTOSURFACE *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ **a3)
{
  struct RGNOBJ *p_top; // rsi
  struct REGION *v6; // rax
  struct REGION *v7; // rdx
  struct _RECTL v9; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-40h] BYREF
  struct REGION *v11; // [rsp+40h] [rbp-30h] BYREF
  int v12; // [rsp+48h] [rbp-28h]
  struct _RECTL v13; // [rsp+50h] [rbp-20h] BYREF

  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 1;
  if ( a3 )
  {
    if ( *a3 )
    {
      p_top = (struct RGNOBJ *)&(*a3)[2].rclBounds.top;
      *(SIZEL *)&v13.right = a2->sizlBitmap;
      *(_QWORD *)&v13.left = 0LL;
      v9 = *(struct _RECTL *)(*(_QWORD *)p_top + 88LL);
      if ( !ERECTL::bContain((ERECTL *)&v13, &v9) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
        v6 = v11;
        *((_QWORD *)this + 19) = v11;
        if ( v6
          && v10[0]
          && *(_QWORD *)&v9.left
          && (RGNOBJ::vSet((RGNOBJ *)&v9, &v13),
              RGNOBJ::bMerge((RGNOBJ *)v10, p_top, (struct RGNOBJ *)&v9, BYTE1(gafjRgnOp)))
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v10) != 1 )
        {
          RGNOBJ::bSwap((RGNOBJ *)&v11, (struct RGNOBJ *)v10);
          v7 = v11;
          *((_QWORD *)this + 19) = v11;
          XCLIPOBJ::vSetup(this, v7, (struct ERECTL *)&v13, 1);
          *a3 = (struct _CLIPOBJ *)this;
        }
        else
        {
          *((_DWORD *)this + 40) = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
        if ( v12 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
      }
    }
  }
  return this;
}
