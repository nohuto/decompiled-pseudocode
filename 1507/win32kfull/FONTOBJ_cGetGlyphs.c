/*
 * XREFs of FONTOBJ_cGetGlyphs @ 0x1C0285CD0
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02AE900 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02CE944 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetGlyphs(FONTOBJ *pfo, ULONG iMode, ULONG cGlyph, HGLYPH *phg, PVOID *ppvGlyph)
{
  HGLYPH v5; // eax
  ULONG v6; // ebx
  struct _GLYPHPOS v8; // [rsp+20h] [rbp-28h] BYREF
  FONTOBJ *v9; // [rsp+68h] [rbp+20h] BYREF

  if ( !phg )
    return 0;
  v5 = *phg;
  v9 = pfo;
  v8.hg = v5;
  if ( (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside((RFONTOBJ *)&v9, &v8, iMode) )
  {
    v6 = 1;
    *ppvGlyph = v8.pgdf;
  }
  else
  {
    v6 = 0;
  }
  v9 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
  return v6;
}
