/*
 * XREFs of EngLineTo @ 0x1401874C0
 * Callers:
 *     OffLineTo @ 0x140064D40 (OffLineTo.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140067810 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     W32kCddLineTo @ 0x140187440 (W32kCddLineTo.c)
 *     ?BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14030B830 (-BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14030DAA0 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     NtGdiEngLineTo @ 0x14032D480 (NtGdiEngLineTo.c)
 * Callees:
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x140067E34 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ??0PRECOMPUTE@@QEAA@PEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400A25C4 (--0PRECOMPUTE@@QEAA@PEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LIN.c)
 *     EngDeletePath @ 0x1400D7FA0 (EngDeletePath.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x140114F8C (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1401877F8 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 *     EngCreatePath @ 0x140296890 (EngCreatePath.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

BOOL __stdcall EngLineTo(
        SURFOBJ *pso,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix)
{
  unsigned __int64 v11; // r14
  int v12; // edi
  PATHOBJ *v14; // rax
  PATHOBJ *v15; // r15
  __int64 v16; // rbx
  PATHOBJ *Path; // rax
  PATHOBJ *v18; // rbx
  PATHOBJ *v19; // rcx
  int v20; // eax
  struct REGION *v21; // [rsp+50h] [rbp-B0h] BYREF
  POINTFIX ptfx; // [rsp+58h] [rbp-A8h] BYREF
  POINTFIX pptfx; // [rsp+60h] [rbp-A0h] BYREF
  SURFOBJ *v24; // [rsp+68h] [rbp-98h] BYREF
  BRUSHOBJ *v25; // [rsp+70h] [rbp-90h]
  struct _LINEATTRS v26; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v27[6]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v28[56]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v29; // [rsp+108h] [rbp+8h]
  __int64 v30; // [rsp+120h] [rbp+20h]
  int v31; // [rsp+128h] [rbp+28h]
  int v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+160h] [rbp+60h]

  v24 = pso;
  v25 = pbo;
  ptfx.y = 16 * y1;
  v11 = (unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL);
  v12 = 0;
  pptfx.x = 16 * x2;
  ptfx.x = 16 * x1;
  pptfx.y = 16 * y2;
  if ( !*(_WORD *)(v11 + 0x64) )
  {
    v24 = *(SURFOBJ **)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x30);
    if ( v24 )
      PDEVOBJ::vSync((PDEVOBJ *)&v24, pso, 0LL, 0);
    if ( (!pco || pco->iDComplexity != 3) && mix == 3341 )
    {
      vSolidLine((struct SURFACE *)v11, 0LL, &ptfx, pco, pbo->iSolidColor);
      return 1;
    }
    memset(&v26, 0, sizeof(v26));
    Path = EngCreatePath();
    v18 = Path;
    if ( !Path )
      return v12;
    if ( PATHOBJ_bMoveTo(Path, ptfx) )
    {
      if ( PATHOBJ_bPolyLineTo(v18, &pptfx, 1u) )
        v12 = bStrokeCosmetic((struct SURFACE *)v11, v18, pco, pbo, &v26, mix);
    }
    v19 = v18;
LABEL_19:
    EngDeletePath(v19);
    return v12;
  }
  memset(&v26, 0, sizeof(v26));
  v26.elWidth.l = 1;
  v14 = EngCreatePath();
  v15 = v14;
  if ( !v14 )
    return v12;
  if ( !PATHOBJ_bMoveTo(v14, ptfx) || !PATHOBJ_bPolyLineTo(v15, &pptfx, 1u) )
  {
LABEL_30:
    v19 = v15;
    goto LABEL_19;
  }
  v16 = *(_QWORD *)(v11 + 48);
  v30 = 0LL;
  v31 = 0;
  v32 = 1;
  v33 = 0LL;
  v29 = 0LL;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
  if ( pco )
    goto LABEL_23;
  if ( !v21 )
  {
LABEL_29:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
    goto LABEL_30;
  }
  if ( prclBounds )
  {
    RGNOBJ::vSet((RGNOBJ *)&v21, prclBounds);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v28, v21, (const struct ERECTL *)prclBounds, 0);
    pco = (CLIPOBJ *)v28;
LABEL_23:
    PRECOMPUTE::PRECOMPUTE(v27, v11, v16, (__int64)v15, (__int64)pco, 0LL, (__int64)&v26, mix, 0, 0);
    if ( v27[4] )
    {
      if ( (*(_DWORD *)(v11 + 112) & 0x20) != 0 )
        v20 = (*(__int64 (__fastcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))(v16 + 2792))(
                v24,
                v15,
                pco,
                0LL,
                v25,
                0LL,
                &v26,
                mix);
      else
        v20 = ((__int64 (__fastcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))EngStrokePath)(
                v24,
                v15,
                pco,
                0LL,
                v25,
                0LL,
                &v26,
                mix);
      v12 = v20;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v27);
    goto LABEL_29;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
  return 0;
}
