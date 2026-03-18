/*
 * XREFs of xInsertGlyphbitsRFONTOBJ @ 0x1402063E4
 * Callers:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x14020638C (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400FC304 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400FC8C8 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x140183EE0 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1402601C0 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1402925C8 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?GetMaxGlyphSize@RFONTOBJ@@QEBA_KXZ @ 0x1403413F0 (-GetMaxGlyphSize@RFONTOBJ@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xInsertGlyphbitsRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA *a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  int v7; // eax
  __int64 v9; // rbx
  unsigned __int64 MaxGlyphSize; // rax
  unsigned int v11; // r15d
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // eax
  struct _GLYPHBITS *v16; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-90h] BYREF
  struct _GLYPHDATA v18; // [rsp+60h] [rbp-78h] BYREF

  v3 = *(_QWORD *)this;
  v4 = a3;
  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) == 0 )
  {
    v7 = *(_DWORD *)(v3 + 88);
    if ( v7 )
    {
      if ( v7 == 2 )
        return RFONTOBJ::bInsertGlyphbitsPath(this, a2, a3);
      v17[0] = *(_QWORD *)(v3 + 128);
      v9 = *(_QWORD *)(v17[0] + 96LL);
      if ( v9 == *(_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96) + 24136LL) )
      {
        v16 = 0LL;
        v15 = *(_DWORD *)(v3 + 640);
        *(_DWORD *)(v3 + 652) = v4 & 1 | 4;
        if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                             (PFFOBJ *)v17,
                             *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                             *(struct _FONTOBJ **)this,
                             a2->hg,
                             v15,
                             0LL,
                             &v16) != -1 )
        {
          a2->gdf.pgb = v16;
          return 1LL;
        }
      }
      else
      {
        memset_0(&v18, 0, sizeof(v18));
        MaxGlyphSize = RFONTOBJ::GetMaxGlyphSize(this);
        v11 = MaxGlyphSize;
        if ( MaxGlyphSize <= *(_QWORD *)(v3 + 592) - *(_QWORD *)(v3 + 584)
          || (v11 = PFFOBJ::QueryFontData(
                      (PFFOBJ *)v17,
                      *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                      *(struct _FONTOBJ **)this,
                      1u,
                      a2->hg,
                      &v18,
                      0LL,
                      0),
              v11 != -1) )
        {
          while ( 1 )
          {
            v12 = (_DWORD *)RFONTOBJ::pgbCheckGlyphCache(this, v11);
            v13 = v12;
            if ( v12 )
              break;
            if ( !v4 )
              return 0LL;
            RFONTOBJ::vFlushCache(this);
            v4 = 0;
          }
          v14 = PFFOBJ::QueryFontData(
                  (PFFOBJ *)v17,
                  *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                  *(struct _FONTOBJ **)this,
                  1u,
                  a2->hg,
                  &v18,
                  v12,
                  v11);
          if ( v14 != -1 )
          {
            a2->gdf.pgb = (GLYPHBITS *)v13;
            *(_QWORD *)(v3 + 584) += v14;
            return 1LL;
          }
        }
      }
    }
  }
  return 0LL;
}
