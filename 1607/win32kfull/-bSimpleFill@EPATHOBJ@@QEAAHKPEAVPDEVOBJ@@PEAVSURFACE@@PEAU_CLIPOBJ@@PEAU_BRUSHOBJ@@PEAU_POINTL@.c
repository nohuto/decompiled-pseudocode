/*
 * XREFs of ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0015414
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C000AA78 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0015170 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0101A68 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0279520 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 * Callees:
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0015990 (-bSubOverflow@@YAHJJ@Z.c)
 *     EngFillPath @ 0x1C0015B00 (EngFillPath.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0149374 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014944C (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall EPATHOBJ::bSimpleFill(
        PATHOBJ *ppo,
        char a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  __m128i *v10; // r9
  int v11; // ebx
  __m128i *v14; // r9
  __int64 v15; // r8
  __m128i *v16; // r9
  int v18; // r13d
  __int64 (__fastcall *v19)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  int v20; // r12d
  __int64 (__fastcall *v21)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  _QWORD v22[4]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v23[32]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v24; // [rsp+98h] [rbp-1h]

  v10 = (__m128i *)ppo[1];
  v11 = 0;
  memset(v22, 0, sizeof(v22));
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
  PRECOMPUTE::vInit(v23, a4, v15, ppo, pco, 0LL, 0LL, mix, flOptions, 1);
  if ( v24 )
  {
    v18 = -1;
    if ( (ppo->fl & 1) != 0 )
    {
      if ( (a2 & 1) != 0 )
      {
        ++*((_DWORD *)a4 + 23);
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
          PushThreadGuardedObject(v22, ppo, vCleanupPathStackObj);
        v19 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2832LL);
        if ( v19 )
          v20 = v19((char *)a4 + 24, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
        else
          v20 = -1;
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
          PopThreadGuardedObject(v22);
        if ( v20 == 1 )
          goto LABEL_36;
        if ( v20 == -1 )
          goto LABEL_37;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
        goto LABEL_37;
    }
    ++*((_DWORD *)a4 + 23);
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
      PushThreadGuardedObject(v22, ppo, vCleanupPathStackObj);
    v21 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2832LL);
    if ( v21 )
      v18 = v21((char *)a4 + 24, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
      PopThreadGuardedObject(v22);
    if ( v18 != 1 )
    {
      if ( v18 == -1 )
        goto LABEL_37;
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v23);
LABEL_7:
      ++*((_DWORD *)a4 + 23);
      return EngFillPath((SURFOBJ *)((char *)a4 + 24), ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
    }
LABEL_36:
    v11 = 1;
    goto LABEL_37;
  }
  EngSetLastError(8u);
LABEL_37:
  PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v23);
  return v11;
}
