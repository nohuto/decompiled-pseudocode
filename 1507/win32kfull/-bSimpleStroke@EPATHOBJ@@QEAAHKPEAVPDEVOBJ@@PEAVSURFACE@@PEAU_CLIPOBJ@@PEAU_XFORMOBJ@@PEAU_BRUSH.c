/*
 * XREFs of ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C00CD154
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C00CCE08 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00FE334 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C027BF44 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 * Callees:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00CC4F4 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00CD3F8 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C00CD54C (-bSubOverflow@@YAHJJ@Z.c)
 *     EngStrokePath @ 0x1C00CE630 (EngStrokePath.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C00D0530 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C00D0604 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

int __fastcall EPATHOBJ::bSimpleStroke(
        PATHOBJ *ppo,
        unsigned int a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *a7,
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
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // r13d
  __int64 (__fastcall *v26)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *); // rax
  __int64 (__fastcall *v27)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *); // rax
  int v28; // r12d
  BRUSHOBJ *pbo; // [rsp+28h] [rbp-79h]
  _QWORD v30[4]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v31[32]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v32; // [rsp+98h] [rbp-9h]

  v10 = (__m128i *)ppo[1];
  v11 = 0;
  v13 = a2;
  memset(v30, 0, sizeof(v30));
  v15 = a3;
  if ( !(unsigned int)bSubOverflow(_mm_cvtsi128_si32(_mm_srli_si128(v10[3], 8)), v10[3].m128i_i32[0])
    && !(unsigned int)bSubOverflow(_mm_srli_si128(v16[48LL], 8).m128i_i32[1], HIDWORD(v16[3].m128i_i64[0]))
    && _mm_cvtsi128_si32(_mm_srli_si128(v19[3], 8)) - v19[3].m128i_i32[0] >= 0
    && (int)(_mm_srli_si128(v19[48LL], 8).m128i_i32[1] - HIDWORD(v19[3].m128i_i64[0])) >= 0 )
  {
    if ( !ppo->cCurves )
      return 1;
    v20 = *(_DWORD *)(v18 + 112);
    ++*(_DWORD *)(v18 + 92);
    if ( (v20 & 0x20) == 0 )
      goto LABEL_7;
    PRECOMPUTE::vInit(v31, a4, v17, ppo, pco, pxo, plineattrs, mix, 0, 0);
    if ( v32 )
    {
      v24 = a2;
      if ( (plineattrs->fl & 1) != 0 && (a2 & 2) == 0 )
      {
LABEL_13:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v31);
        v13 = a2;
LABEL_7:
        if ( (plineattrs->fl & 1) == 0 )
          return EngStrokePath((SURFOBJ *)((char *)a4 + 24), ppo, pco, pxo, a7, pptlBrushOrg, plineattrs, mix);
        if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)ppo, (__m128i **)ppo, pxo, plineattrs) )
          return EPATHOBJ::bSimpleFill(ppo, v13, v15, a4, pco, a7, pptlBrushOrg, mix, 2u);
        return 0;
      }
      v25 = -1;
      if ( (ppo->fl & 1) != 0 )
      {
        if ( (a2 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
            PushThreadGuardedObject(v30, ppo, vCleanupPathStackObj);
          v27 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *))(*(_QWORD *)a3 + 2832LL);
          if ( v27 )
          {
            pbo = a7;
            v28 = v27((char *)a4 + 24, ppo, pco, pxo);
          }
          else
          {
            v28 = -1;
          }
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
            PopThreadGuardedObject(v30, v24, v22, v23, pbo);
          if ( v28 == 1 )
            goto LABEL_23;
          if ( v28 == -1 )
            goto LABEL_24;
        }
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
          goto LABEL_24;
      }
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
        PushThreadGuardedObject(v30, ppo, vCleanupPathStackObj);
      v26 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *))(*(_QWORD *)a3 + 2832LL);
      if ( v26 )
      {
        pbo = a7;
        v25 = v26((char *)a4 + 24, ppo, pco, pxo);
      }
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
        PopThreadGuardedObject(v30, v24, v22, v23, pbo);
      if ( v25 == 1 )
      {
LABEL_23:
        v11 = 1;
        goto LABEL_24;
      }
      if ( v25 != -1 )
      {
        v15 = a3;
        goto LABEL_13;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
LABEL_24:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v31);
    return v11;
  }
  return 0;
}
