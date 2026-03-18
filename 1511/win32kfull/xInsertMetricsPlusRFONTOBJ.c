/*
 * XREFs of xInsertMetricsPlusRFONTOBJ @ 0x1C001A1AC
 * Callers:
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0025850 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C001AB14 (-ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C00234EC (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C0023620 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C00246E0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C01C2F10 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02CF990 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 */

__int64 __fastcall xInsertMetricsPlusRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  unsigned int v6; // r14d
  __int64 v7; // r13
  unsigned int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  void *v13; // rax
  struct _GLYPHDATA *v14; // rcx
  void *v15; // r13
  unsigned int v16; // eax
  __int64 v17; // rcx
  struct _GLYPHDATA *v19; // rax
  unsigned __int16 v20; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-39h] BYREF
  struct _GLYPHDATA v23; // [rsp+60h] [rbp-29h] BYREF

  v6 = 1;
  v7 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
  {
    v20 = a3;
    RFONTOBJ::vXlatGlyphArray(this, &v20, 1u, &v21, 0, 0);
    v8 = v21;
  }
  else
  {
    v8 = a3;
  }
  v9 = *(_QWORD *)this;
  if ( v8 == *(_DWORD *)(*(_QWORD *)this + 456LL) )
  {
    v19 = *(struct _GLYPHDATA **)(v7 + 8);
    if ( v19 )
    {
      *a2 = v19;
      return v6;
    }
  }
  if ( !*(_DWORD *)(v9 + 72) )
    return RFONTOBJ::bInsertMetrics(this, a2, a3);
  if ( !(unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
    return 0LL;
  v10 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 72LL) != 2 )
  {
    v11 = *(_QWORD *)(v10 + 80);
    memset(&v23, 0, sizeof(v23));
    v22[0] = v11;
    v12 = *(unsigned int *)(v9 + 648);
    if ( v12 >= *(_QWORD *)(v9 + 624) - *(_QWORD *)(v9 + 616) )
    {
      LODWORD(v12) = ulCallAndConvertFontOutput(
                       (struct PDEVOBJ *)v22,
                       (struct RFONT *)v10,
                       (struct _FONTOBJ *)v10,
                       v8,
                       &v23,
                       0LL,
                       0);
      if ( (_DWORD)v12 == -1 )
        return 0;
    }
    v13 = RFONTOBJ::pgbCheckGlyphCache(this, (unsigned int)v12);
    v14 = &v23;
    v15 = v13;
    if ( !*(_DWORD *)(*(_QWORD *)this + 652LL) )
      v14 = *(struct _GLYPHDATA **)(v9 + 536);
    v16 = ulCallAndConvertFontOutput(
            (struct PDEVOBJ *)v22,
            *(struct RFONT **)this,
            *(struct _FONTOBJ **)this,
            v8,
            v14,
            v13,
            v12);
    if ( v16 == -1 )
    {
      return 0;
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
      {
        v17 = *(_QWORD *)(v9 + 536);
        *(_OWORD *)v17 = *(_OWORD *)&v23.gdf.pgb;
        *(_QWORD *)(v17 + 16) = *(_QWORD *)&v23.fxA;
      }
      *a2 = *(struct _GLYPHDATA **)(v9 + 536);
      if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
        *(_QWORD *)(v9 + 536) += 24LL;
      else
        *(_QWORD *)(v9 + 536) += 64LL;
      if ( v15 )
        *(_QWORD *)(v9 + 616) += v16;
    }
    return v6;
  }
  return RFONTOBJ::bInsertMetricsPlusPath(this, a2, a3);
}
