/*
 * XREFs of ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0149374
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C000AA78 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngLineTo @ 0x1C00100C0 (EngLineTo.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0015170 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0015414 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0149120 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C026B310 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026C270 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 * Callees:
 *     <none>
 */

void __fastcall PRECOMPUTE::~PRECOMPUTE(PRECOMPUTE *this)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    *(_QWORD *)(v1 + 16) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 40LL) = 0LL;
    v7 = *(_QWORD *)this;
    v8 = *((_QWORD *)this + 1);
    v9 = *((_QWORD *)this + 2);
    v10 = *((_QWORD *)this + 3);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
    *(_DWORD *)(*((_QWORD *)this + 4) + 48LL) = 0;
    v5 = *(_QWORD *)(*((_QWORD *)this + 4) + 56LL);
    if ( v5 )
      Win32FreePool(v5, v3, v4);
    *(_QWORD *)(*((_QWORD *)this + 4) + 56LL) = 0LL;
    *(_DWORD *)(*((_QWORD *)this + 4) + 64LL) = 0;
    v6 = *(_QWORD *)(*((_QWORD *)this + 4) + 72LL);
    if ( v6 )
      Win32FreePool(v6, v3, v4);
    *(_QWORD *)(*((_QWORD *)this + 4) + 72LL) = 0LL;
  }
}
