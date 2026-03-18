/*
 * XREFs of ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0130BC4
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0102FFC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027AEF0 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C027B48C (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 * Callees:
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0014178 (-bSubOverflow@@YAHJJ@Z.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0016688 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0130838 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0132714 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01327EC (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngStrokePath @ 0x1C013CBC0 (EngStrokePath.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall EPATHOBJ::bSimpleStroke(
        PATHOBJ *ppo,
        char a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  __m128i *v10; // r10
  int v11; // ebx
  char v13; // r12
  struct PDEVOBJ *v15; // r13
  __m128i *v16; // r10
  __int64 v17; // r8
  __int64 v18; // r9
  __m128i *v19; // r10
  int v20; // eax
  MIX v21; // r12d
  int v22; // r13d
  __int64 (__fastcall *v23)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  __int64 (__fastcall *v25)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  int v26; // r12d
  __int64 v27; // [rsp+58h] [rbp-49h] BYREF
  __int64 v28; // [rsp+60h] [rbp-41h]
  __int64 v29; // [rsp+68h] [rbp-39h]
  __int64 v30; // [rsp+70h] [rbp-31h]
  _BYTE v31[32]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v32; // [rsp+98h] [rbp-9h]

  v10 = (__m128i *)ppo[1];
  v28 = 0LL;
  v11 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v13 = a2;
  v27 = 0LL;
  v15 = a3;
  if ( bSubOverflow(_mm_cvtsi128_si32(_mm_srli_si128(v10[3], 8)), v10[3].m128i_i32[0])
    || bSubOverflow(_mm_srli_si128(v16[48LL], 8).m128i_i32[1], HIDWORD(v16[3].m128i_i64[0]))
    || _mm_cvtsi128_si32(_mm_srli_si128(v19[3], 8)) - v19[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v19[48LL], 8).m128i_i32[1] - HIDWORD(v19[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( !ppo->cCurves )
    return 1;
  v20 = *(_DWORD *)(v18 + 112);
  ++*(_DWORD *)(v18 + 92);
  if ( (v20 & 0x20) == 0 )
    goto LABEL_38;
  v21 = mix;
  PRECOMPUTE::vInit(v31, a4, v17, ppo, pco, pxo, plineattrs, mix, 0, 0, v27, v28, v29, v30);
  if ( !v32 )
  {
    EngSetLastError(8u);
    goto LABEL_20;
  }
  if ( (plineattrs->fl & 1) == 0 || (a2 & 2) != 0 )
  {
    v22 = -1;
    if ( (ppo->fl & 1) != 0 )
    {
      if ( (a2 & 1) != 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
          PushThreadGuardedObject(&v27, ppo, vCleanupPathStackObj);
        v25 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)a3 + 2832LL);
        if ( v25 )
          v26 = v25((char *)a4 + 24, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
        else
          v26 = -1;
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
          PopThreadGuardedObject(&v27);
        if ( v26 == 1 )
          goto LABEL_19;
        if ( v26 == -1 )
          goto LABEL_20;
        v21 = mix;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
        goto LABEL_20;
    }
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
      PushThreadGuardedObject(&v27, ppo, vCleanupPathStackObj);
    v23 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)a3 + 2832LL);
    if ( v23 )
      v22 = v23((char *)a4 + 24, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, v21);
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
      PopThreadGuardedObject(&v27);
    if ( v22 == 1 )
    {
LABEL_19:
      v11 = 1;
      goto LABEL_20;
    }
    if ( v22 != -1 )
    {
      v15 = a3;
      goto LABEL_9;
    }
LABEL_20:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v31);
    return v11;
  }
LABEL_9:
  PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v31);
  v13 = a2;
LABEL_38:
  if ( (plineattrs->fl & 1) != 0 )
  {
    if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, pxo, plineattrs) )
      return EPATHOBJ::bSimpleFill(ppo, v13, v15, a4, pco, pbo, pptlBrushOrg, mix, 2u);
    return 0;
  }
  return EngStrokePath((SURFOBJ *)((char *)a4 + 24), ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
}
