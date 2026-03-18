/*
 * XREFs of ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02CF87C
 * Callers:
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C00176FC (xInsertGlyphbitsRFONTOBJ.c)
 * Callees:
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C001CE68 (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C00234EC (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C01534D8 (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02CFD18 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bInsertGlyphbitsPath(RFONTOBJ *this, struct _GLYPHDATA *a2, int a3)
{
  __int64 v3; // r15
  unsigned int v7; // ebx
  unsigned int v8; // esi
  EPATHFONTOBJ *v9; // rax
  EPATHOBJ *v10; // rdi
  _BYTE v12[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+48h] [rbp-A0h]
  __int64 v14; // [rsp+F0h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v14 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v12);
  v7 = 0;
  if ( v13
    && (unsigned int)PDEVOBJ::QueryFontData(
                       (PDEVOBJ *)&v14,
                       *(struct DHPDEV__ **)(*(_QWORD *)this + 104LL),
                       *(struct _FONTOBJ **)this,
                       2u,
                       a2->hg,
                       0LL,
                       v12,
                       0) != -1 )
  {
    v8 = EPATHOBJ::cjSize((EPATHOBJ *)v12) + 440;
    while ( 1 )
    {
      v9 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache(this, v8);
      v10 = v9;
      if ( v9 )
        break;
      if ( !a3 )
        goto LABEL_8;
      RFONTOBJ::vFlushCache(this);
      a3 = 0;
    }
    EPATHFONTOBJ::vInit(v9, v8);
    EPATHOBJ::bClone(v10, (struct EPATHOBJ *)v12);
    a2->gdf.pgb = (GLYPHBITS *)v10;
    v7 = 1;
    *(_QWORD *)(v3 + 616) += v8;
  }
LABEL_8:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v12);
  return v7;
}
