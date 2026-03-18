/*
 * XREFs of xInsertGlyphbitsRFONTOBJ @ 0x1C00176FC
 * Callers:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C00234A4 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C001AB14 (-ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C00234EC (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02CF87C (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02CFD18 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall xInsertGlyphbitsRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  unsigned int v5; // ebp
  int v8; // eax
  unsigned __int64 v9; // r12
  void *v10; // rax
  GLYPHDEF v11; // r14
  unsigned int v12; // eax
  _QWORD v14[2]; // [rsp+40h] [rbp-98h] BYREF
  struct _GLYPHDATA v15; // [rsp+50h] [rbp-88h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 1;
  v5 = a3;
  if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 1) != 0 )
    return 0LL;
  v8 = *(_DWORD *)(v3 + 72);
  if ( !v8 )
    return 0LL;
  if ( v8 == 2 )
    return RFONTOBJ::bInsertGlyphbitsPath(this, a2, a3);
  v14[0] = *(_QWORD *)(v3 + 80);
  v9 = *(unsigned int *)(v3 + 648);
  if ( v9 >= *(_QWORD *)(v3 + 624) - *(_QWORD *)(v3 + 616) )
  {
    LODWORD(v9) = ulCallAndConvertFontOutput(
                    (struct PDEVOBJ *)v14,
                    (struct RFONT *)v3,
                    (struct _FONTOBJ *)v3,
                    a2->hg,
                    &v15,
                    0LL,
                    0);
    if ( (_DWORD)v9 == -1 )
      return 0;
  }
  while ( 1 )
  {
    v10 = RFONTOBJ::pgbCheckGlyphCache(this, (unsigned int)v9);
    v11.pgb = (GLYPHBITS *)v10;
    if ( v10 )
      break;
    if ( !v5 )
      return 0;
    RFONTOBJ::vFlushCache(this);
    v5 = 0;
  }
  v12 = ulCallAndConvertFontOutput(
          (struct PDEVOBJ *)v14,
          *(struct RFONT **)this,
          *(struct _FONTOBJ **)this,
          a2->hg,
          &v15,
          v10,
          v9);
  if ( v12 == -1 )
  {
    return 0;
  }
  else
  {
    a2->gdf = v11;
    *(_QWORD *)(v3 + 616) += v12;
  }
  return v4;
}
