/*
 * XREFs of ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0015170
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C000AA78 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0101A68 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0279674 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 * Callees:
 *     EngStrokePath @ 0x1C000F530 (EngStrokePath.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00147C4 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0015414 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0015990 (-bSubOverflow@@YAHJJ@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0149374 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014944C (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

int __fastcall EPATHOBJ::bSimpleStroke(
        PATHOBJ *ppo,
        unsigned int a2,
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
  unsigned int v13; // r12d
  struct PDEVOBJ *v15; // r13
  __m128i *v16; // r10
  __int64 v17; // r8
  __int64 v18; // r9
  __m128i *v19; // r10
  int v20; // eax
  MIX v21; // r12d
  int v23; // r13d
  __int64 (__fastcall *v24)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  __int64 (__fastcall *v25)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  int v26; // r12d
  _QWORD v27[4]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v28[32]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v29; // [rsp+98h] [rbp-9h]

  v10 = (__m128i *)ppo[1];
  v11 = 0;
  v13 = a2;
  memset(v27, 0, sizeof(v27));
  v15 = a3;
  if ( (unsigned int)bSubOverflow(_mm_cvtsi128_si32(_mm_srli_si128(v10[3], 8)), v10[3].m128i_i32[0])
    || (unsigned int)bSubOverflow(_mm_srli_si128(v16[48LL], 8).m128i_i32[1], HIDWORD(v16[3].m128i_i64[0]))
    || _mm_cvtsi128_si32(_mm_srli_si128(v19[3], 8)) - v19[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v19[48LL], 8).m128i_i32[1] - HIDWORD(v19[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( ppo->cCurves )
  {
    v20 = *(_DWORD *)(v18 + 112);
    ++*(_DWORD *)(v18 + 92);
    if ( (v20 & 0x20) == 0 )
    {
LABEL_10:
      if ( (plineattrs->fl & 1) == 0 )
        return EngStrokePath((SURFOBJ *)((char *)a4 + 24), ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
      if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)ppo, (__m128i **)ppo, pxo, plineattrs) )
        return EPATHOBJ::bSimpleFill(ppo, v13, v15, a4, pco, pbo, pptlBrushOrg, mix, 2u);
      return 0;
    }
    v21 = mix;
    PRECOMPUTE::vInit(v28, a4, v17, ppo, pco, pxo, plineattrs, mix, 0, 0);
    if ( !v29 )
    {
      EngSetLastError(8u);
      goto LABEL_22;
    }
    if ( (plineattrs->fl & 1) != 0 && (a2 & 2) == 0 )
    {
LABEL_9:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v28);
      v13 = a2;
      goto LABEL_10;
    }
    v23 = -1;
    if ( (ppo->fl & 1) != 0 )
    {
      if ( (a2 & 1) != 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
          PushThreadGuardedObject(v27, ppo, vCleanupPathStackObj);
        v25 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)a3 + 2824LL);
        if ( v25 )
          v26 = v25((char *)a4 + 24, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
        else
          v26 = -1;
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
          PopThreadGuardedObject(v27);
        if ( v26 == 1 )
          goto LABEL_21;
        if ( v26 == -1 )
          goto LABEL_22;
        v21 = mix;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
        goto LABEL_22;
    }
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
      PushThreadGuardedObject(v27, ppo, vCleanupPathStackObj);
    v24 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)a3 + 2824LL);
    if ( v24 )
      v23 = v24((char *)a4 + 24, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, v21);
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
      PopThreadGuardedObject(v27);
    if ( v23 != 1 )
    {
      if ( v23 != -1 )
      {
        v15 = a3;
        goto LABEL_9;
      }
LABEL_22:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v28);
      return v11;
    }
LABEL_21:
    v11 = 1;
    goto LABEL_22;
  }
  return 1;
}
