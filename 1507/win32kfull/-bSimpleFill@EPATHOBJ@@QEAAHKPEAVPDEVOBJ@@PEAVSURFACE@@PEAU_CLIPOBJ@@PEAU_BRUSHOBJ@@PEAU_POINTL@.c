/*
 * XREFs of ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00CD3F8
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C00CCE08 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C00CD154 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00FE334 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027BDF0 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 * Callees:
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C00CD54C (-bSubOverflow@@YAHJJ@Z.c)
 *     EngFillPath @ 0x1C00CD5A0 (EngFillPath.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C00D0530 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C00D0604 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall EPATHOBJ::bSimpleFill(
        PATHOBJ *ppo,
        char a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        struct _POINTL *a7,
        MIX mix,
        FLONG flOptions)
{
  __m128i *v10; // r9
  int v11; // ebx
  __m128i *v14; // r9
  __int64 v15; // r8
  __m128i *v16; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r13d
  __int64 (__fastcall *v22)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *); // rax
  int v23; // r12d
  __int64 (__fastcall *v24)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *); // rax
  POINTL *pptlBrushOrg; // [rsp+28h] [rbp-71h]
  _QWORD v26[4]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v27[32]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v28; // [rsp+98h] [rbp-1h]

  v10 = (__m128i *)ppo[1];
  v11 = 0;
  memset(v26, 0, sizeof(v26));
  if ( (unsigned int)bSubOverflow(_mm_cvtsi128_si32(_mm_srli_si128(v10[3], 8)), v10[3].m128i_i32[0])
    || (unsigned int)bSubOverflow(_mm_srli_si128(v14[48LL], 8).m128i_i32[1], HIDWORD(v14[3].m128i_i64[0]))
    || _mm_cvtsi128_si32(_mm_srli_si128(v16[3], 8)) - v16[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v16[48LL], 8).m128i_i32[1] - HIDWORD(v16[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( !ppo->cCurves )
    return 1;
  if ( (*((_DWORD *)a4 + 28) & 0x40) == 0
    || ((a2 & 8) == 0 || (flOptions & 2) == 0) && ((flOptions & 2) != 0 || (a2 & 4) == 0) )
  {
    goto LABEL_7;
  }
  PRECOMPUTE::vInit(v27, a4, v15, ppo, pco, 0LL, 0LL, mix, flOptions, 1);
  if ( v28 )
  {
    v21 = -1;
    if ( (ppo->fl & 1) != 0 )
    {
      if ( (a2 & 1) != 0 )
      {
        ++*((_DWORD *)a4 + 23);
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
          PushThreadGuardedObject(v26, ppo, vCleanupPathStackObj);
        v22 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *))(*(_QWORD *)a3 + 2840LL);
        if ( v22 )
        {
          pptlBrushOrg = a7;
          v23 = v22((char *)a4 + 24, ppo, pco, pbo);
        }
        else
        {
          v23 = -1;
        }
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
          PopThreadGuardedObject(v26, v18, v19, v20, pptlBrushOrg);
        if ( v23 == 1 )
          goto LABEL_36;
        if ( v23 == -1 )
          goto LABEL_37;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
        goto LABEL_37;
    }
    ++*((_DWORD *)a4 + 23);
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
      PushThreadGuardedObject(v26, ppo, vCleanupPathStackObj);
    v24 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *))(*(_QWORD *)a3 + 2840LL);
    if ( v24 )
    {
      pptlBrushOrg = a7;
      v21 = v24((char *)a4 + 24, ppo, pco, pbo);
    }
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
      PopThreadGuardedObject(v26, v18, v19, v20, pptlBrushOrg);
    if ( v21 != 1 )
    {
      if ( v21 == -1 )
        goto LABEL_37;
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v27);
LABEL_7:
      ++*((_DWORD *)a4 + 23);
      return EngFillPath((SURFOBJ *)((char *)a4 + 24), ppo, pco, pbo, a7, mix, flOptions);
    }
LABEL_36:
    v11 = 1;
    goto LABEL_37;
  }
  EngSetLastError(8u);
LABEL_37:
  PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v27);
  return v11;
}
