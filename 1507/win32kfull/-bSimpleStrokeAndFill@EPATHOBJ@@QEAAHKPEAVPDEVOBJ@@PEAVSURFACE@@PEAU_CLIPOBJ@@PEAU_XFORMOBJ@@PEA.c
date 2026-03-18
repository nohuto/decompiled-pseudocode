/*
 * XREFs of ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C00CCE08
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     EngStrokeAndFillPath @ 0x1C0006A30 (EngStrokeAndFillPath.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C00CD154 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00CD3F8 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C00CD54C (-bSubOverflow@@YAHJJ@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C00D0530 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C00D0604 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall EPATHOBJ::bSimpleStrokeAndFill(
        PATHOBJ *ppo,
        unsigned int a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *a7,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  __m128i *v12; // r10
  int v13; // ebx
  __m128i *v16; // r10
  struct PDEVOBJ *v17; // r8
  __int64 v18; // r9
  __m128i *v19; // r10
  unsigned int v20; // r11d
  int v21; // eax
  int v22; // edi
  MIX v23; // r14d
  unsigned int v24; // ecx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // r13d
  __int64 (__fastcall *v30)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *); // rax
  __int64 (__fastcall *v31)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *); // rax
  BRUSHOBJ *pboStroke; // [rsp+28h] [rbp-89h]
  _QWORD v33[4]; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v34[32]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-9h]

  v12 = (__m128i *)ppo[1];
  v13 = 0;
  memset(v33, 0, sizeof(v33));
  if ( (unsigned int)bSubOverflow(_mm_cvtsi128_si32(_mm_srli_si128(v12[3], 8)), v12[3].m128i_i32[0])
    || (unsigned int)bSubOverflow(_mm_srli_si128(v16[48LL], 8).m128i_i32[1], HIDWORD(v16[3].m128i_i64[0]))
    || _mm_cvtsi128_si32(_mm_srli_si128(v19[3], 8)) - v19[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v19[48LL], 8).m128i_i32[1] - HIDWORD(v19[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( !ppo->cCurves )
    return 1;
  v21 = *(_DWORD *)(v18 + 112);
  v22 = 1;
  ++*(_DWORD *)(v18 + 92);
  v23 = mixFill;
  if ( (v21 & 0x80u) != 0 )
  {
    PRECOMPUTE::vInit(v34, a4, v17, ppo, pco, pxo, plineattrs, mixFill, flOptions, 2);
    if ( !v35 )
    {
      EngSetLastError(8u);
      goto LABEL_30;
    }
    v28 = a2;
    if ( (plineattrs->fl & 1) == 0 || (a2 & 2) != 0 )
    {
      v29 = -1;
      if ( (ppo->fl & 1) != 0 )
      {
        if ( (a2 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
            PushThreadGuardedObject(v33, ppo, vCleanupPathStackObj);
          v30 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *))(*(_QWORD *)a3 + 2848LL);
          if ( v30 )
          {
            pboStroke = a7;
            v29 = v30((char *)a4 + 24, ppo, pco, pxo);
          }
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
            PopThreadGuardedObject(v33, v28, v26, v27, pboStroke);
          if ( v29 == 1 )
            goto LABEL_29;
          if ( v29 == -1 )
            goto LABEL_30;
          v29 = -1;
        }
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
          goto LABEL_30;
      }
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
        PushThreadGuardedObject(v33, ppo, vCleanupPathStackObj);
      v31 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *))(*(_QWORD *)a3 + 2848LL);
      if ( v31 )
      {
        pboStroke = a7;
        v29 = v31((char *)a4 + 24, ppo, pco, pxo);
      }
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
        PopThreadGuardedObject(v33, v28, v26, v27, pboStroke);
      if ( v29 == 1 )
      {
LABEL_29:
        v13 = 1;
LABEL_30:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
        return v13;
      }
      if ( v29 == -1 )
        goto LABEL_30;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
    v17 = a3;
    v20 = a2;
  }
  if ( (plineattrs->fl & 1) != 0
    && ((_BYTE)mixFill != 13 || (unsigned int)(*(_DWORD *)(*((_QWORD *)a4 + 6) + 2164LL) - 1) > 1) )
  {
    return EngStrokeAndFillPath(
             (SURFOBJ *)((char *)a4 + 24),
             ppo,
             pco,
             pxo,
             a7,
             plineattrs,
             pbo,
             pptlBrushOrg,
             mixFill,
             flOptions);
  }
  v24 = mixFill;
  if ( ((__int64)pbo[5].pvRbrush & 0x8000) == 0 )
    v24 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( ((__int64)a7[5].pvRbrush & 0x8000) == 0 )
    v23 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( !(unsigned int)EPATHOBJ::bSimpleFill(ppo, v20, v17, a4, pco, pbo, pptlBrushOrg, v24, flOptions)
    || !(unsigned int)EPATHOBJ::bSimpleStroke(ppo, a2, a3, a4, pco, pxo, a7, pptlBrushOrg, plineattrs, v23) )
  {
    return 0;
  }
  return v22;
}
