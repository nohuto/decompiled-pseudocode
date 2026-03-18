/*
 * XREFs of xInsertMetricsPlusRFONTOBJ @ 0x1C00FC984
 * Callers:
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C002B168 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C002A394 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C002E568 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002F568 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00FCCD8 (-ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C01BF598 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02D2A3C (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 */

__int64 __fastcall xInsertMetricsPlusRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  unsigned int v6; // r14d
  __int64 v7; // r13
  unsigned int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // r13
  unsigned __int64 v11; // rsi
  void *v12; // rax
  struct _GLYPHDATA *v13; // rcx
  void *v14; // r13
  unsigned int v15; // eax
  __int64 v16; // rcx
  struct _GLYPHDATA *v18; // rax
  unsigned __int16 v19; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-39h] BYREF
  struct _GLYPHDATA v22; // [rsp+60h] [rbp-29h] BYREF

  v6 = 1;
  v7 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
  {
    v19 = a3;
    RFONTOBJ::vXlatGlyphArray(this, &v19, 1, &v20, 0, 0);
    v8 = v20;
  }
  else
  {
    v8 = a3;
  }
  v9 = *(_QWORD *)this;
  if ( v8 == *(_DWORD *)(*(_QWORD *)this + 456LL) )
  {
    v18 = *(struct _GLYPHDATA **)(v7 + 8);
    if ( v18 )
    {
      *a2 = v18;
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
    v21[0] = *(_QWORD *)(v10 + 80);
    memset(&v22, 0, sizeof(v22));
    v11 = *(unsigned int *)(v9 + 648);
    if ( v11 >= *(_QWORD *)(v9 + 624) - *(_QWORD *)(v9 + 616) )
    {
      LODWORD(v11) = ulCallAndConvertFontOutput(
                       (struct PDEVOBJ *)v21,
                       (struct RFONT *)v10,
                       (struct _FONTOBJ *)v10,
                       v8,
                       &v22,
                       0LL,
                       0);
      if ( (_DWORD)v11 == -1 )
        return 0;
    }
    v12 = RFONTOBJ::pgbCheckGlyphCache(this, (unsigned int)v11);
    v13 = &v22;
    v14 = v12;
    if ( !*(_DWORD *)(*(_QWORD *)this + 652LL) )
      v13 = *(struct _GLYPHDATA **)(v9 + 536);
    v15 = ulCallAndConvertFontOutput(
            (struct PDEVOBJ *)v21,
            *(struct RFONT **)this,
            *(struct _FONTOBJ **)this,
            v8,
            v13,
            v12,
            v11);
    if ( v15 == -1 )
    {
      return 0;
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
      {
        v16 = *(_QWORD *)(v9 + 536);
        *(_OWORD *)v16 = *(_OWORD *)&v22.gdf.pgb;
        *(_QWORD *)(v16 + 16) = *(_QWORD *)&v22.fxA;
      }
      *a2 = *(struct _GLYPHDATA **)(v9 + 536);
      if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
        *(_QWORD *)(v9 + 536) += 24LL;
      else
        *(_QWORD *)(v9 + 536) += 64LL;
      if ( v14 )
        *(_QWORD *)(v9 + 616) += v15;
    }
    return v6;
  }
  return RFONTOBJ::bInsertMetricsPlusPath(this, a2, a3);
}
