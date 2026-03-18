/*
 * XREFs of xInsertMetricsPlusRFONTOBJ @ 0x1400C0964
 * Callers:
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400C05AC (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400C14FC (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1401C5AE4 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400C2180 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1400C2500 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400FBC50 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400FC304 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400FC8C8 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x140183B5C (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x140183EE0 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?GetMaxGlyphSize@RFONTOBJ@@QEBA_KXZ @ 0x1403413F0 (-GetMaxGlyphSize@RFONTOBJ@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xInsertMetricsPlusRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // rdi
  struct _GLYPHDATA *v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  unsigned __int64 MaxGlyphSize; // rax
  unsigned int v16; // ebx
  void *v17; // rax
  struct _GLYPHDATA *v18; // rcx
  void *v19; // r13
  unsigned int FontData; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // eax
  unsigned __int16 v24; // [rsp+40h] [rbp-59h] BYREF
  struct _GLYPHDATA *v25; // [rsp+48h] [rbp-51h] BYREF
  struct _GLYPHBITS *v26; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v27[3]; // [rsp+58h] [rbp-41h] BYREF
  _GLYPHDATA v28; // [rsp+70h] [rbp-29h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 2) != 0 )
  {
    v24 = a3;
    LODWORD(v25) = 0;
    RFONTOBJ::vXlatGlyphArray(this, &v24, 1u, (unsigned int *)&v25, 0, 0);
    v7 = (unsigned int)v25;
  }
  else
  {
    v7 = a3;
  }
  v8 = *(_QWORD *)this;
  if ( v7 == *(_DWORD *)(*(_QWORD *)this + 456LL) )
  {
    v9 = *(struct _GLYPHDATA **)(v6 + 8);
    if ( v9 )
    {
      *a2 = v9;
      return 1LL;
    }
  }
  if ( !*(_DWORD *)(v8 + 88) )
    return RFONTOBJ::bInsertMetrics(this, a2, a3);
  if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
  {
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 )
      return RFONTOBJ::bInsertMetricsPlusPath(this, a2, a3);
    v27[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
    v14 = *(_QWORD *)(v27[0] + 96LL);
    if ( v14 == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v12, v11, v13) + 96) + 24136LL) )
    {
      *(_DWORD *)(v8 + 652) = 6;
      v22 = *(_QWORD *)this;
      v25 = 0LL;
      v23 = *(_DWORD *)(v8 + 640);
      v26 = 0LL;
      if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                           (PFFOBJ *)v27,
                           *(struct DHPDEV__ **)(v22 + 112),
                           (struct _FONTOBJ *)v22,
                           v7,
                           v23,
                           &v25,
                           &v26) != -1 )
      {
        v25->gdf.pgb = v26;
        *a2 = v25;
        return 1LL;
      }
    }
    else
    {
      memset_0(&v28, 0, sizeof(v28));
      MaxGlyphSize = RFONTOBJ::GetMaxGlyphSize(this);
      v16 = MaxGlyphSize;
      if ( MaxGlyphSize <= *(_QWORD *)(v8 + 592) - *(_QWORD *)(v8 + 584)
        || (v16 = PFFOBJ::QueryFontData(
                    (PFFOBJ *)v27,
                    *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                    *(struct _FONTOBJ **)this,
                    1u,
                    v7,
                    &v28,
                    0LL,
                    0),
            v16 != -1) )
      {
        v17 = RFONTOBJ::pgbCheckGlyphCache(this, v16);
        v18 = &v28;
        v19 = v17;
        if ( !*(_DWORD *)(*(_QWORD *)this + 648LL) )
          v18 = *(struct _GLYPHDATA **)(v8 + 512);
        FontData = PFFOBJ::QueryFontData(
                     (PFFOBJ *)v27,
                     *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                     *(struct _FONTOBJ **)this,
                     1u,
                     v7,
                     v18,
                     v17,
                     v16);
        if ( FontData != -1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)this + 648LL) )
          {
            v21 = *(_QWORD *)(v8 + 512);
            *(_OWORD *)v21 = *(_OWORD *)&v28.gdf.pgb;
            *(_QWORD *)(v21 + 16) = *(_QWORD *)&v28.fxA;
          }
          *a2 = *(struct _GLYPHDATA **)(v8 + 512);
          *(_QWORD *)(v8 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 648LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
          if ( v19 )
            *(_QWORD *)(v8 + 584) += FontData;
          return 1LL;
        }
      }
    }
  }
  return 0LL;
}
