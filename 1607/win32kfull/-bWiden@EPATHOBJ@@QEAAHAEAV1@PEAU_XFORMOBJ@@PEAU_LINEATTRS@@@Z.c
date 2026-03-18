/*
 * XREFs of ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00147C4
 * Callers:
 *     EngStrokePath @ 0x1C000F530 (EngStrokePath.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0015170 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     NtGdiFrameRgn @ 0x1C0139550 (NtGdiFrameRgn.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014944C (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngStrokeAndFillPath @ 0x1C027B650 (EngStrokeAndFillPath.c)
 *     NtGdiWidenPath @ 0x1C02A68B0 (NtGdiWidenPath.c)
 * Callees:
 *     ?vMakeItWide@WIDENER@@QEAAXAEAVEPATHOBJ@@@Z @ 0x1C00131F0 (-vMakeItWide@WIDENER@@QEAAXAEAVEPATHOBJ@@@Z.c)
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0013280 (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bValid@WIDENER@@QEAAHXZ @ 0x1C0013938 (-bValid@WIDENER@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?bEfToL@EFLOAT@@QEAAHAEAJ@Z @ 0x1C01BF490 (-bEfToL@EFLOAT@@QEAAHAEAJ@Z.c)
 *     ?vReComputeBounds@EPATHOBJ@@QEAAXXZ @ 0x1C02CB1D8 (-vReComputeBounds@EPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall EPATHOBJ::bWiden(EPATHOBJ *this, __m128i **a2, struct _XFORMOBJ *a3, struct _LINEATTRS *a4)
{
  unsigned int v7; // edi
  FLOAT_LONG v8; // xmm0_4
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  FLOAT_LONG v11[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v12[824]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[168]; // [rsp+378h] [rbp+278h] BYREF
  _BYTE v14[160]; // [rsp+420h] [rbp+320h] BYREF
  _BYTE v15[176]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _DWORD v16[8]; // [rsp+570h] [rbp+470h] BYREF

  WIDENER::WIDENER((WIDENER *)v12, a2, (struct MATRIX **)a3, a4);
  v7 = WIDENER::bValid((WIDENER *)v12);
  if ( v7 )
  {
    WIDENER::vMakeItWide((WIDENER *)v12, this);
    LODWORD(v8.e) = a4->elWidth;
    v10 = 0;
    v11[0] = v8;
    EFLOAT::bEfToL((EFLOAT *)v11, &v10);
    v16[5] = 0;
    v16[6] = 0;
    v16[0] = v10;
    v16[1] = v10;
    v16[2] = v10;
    v16[4] = v10;
    v16[3] = -v10;
    v16[7] = -v10;
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)v16, (struct _VECTORFX *)v16, 4uLL, 1) )
      EPATHOBJ::vReComputeBounds(this);
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v15);
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v14);
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v13);
  return v7;
}
