/*
 * XREFs of ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02CE944
 * Callers:
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C002DD54 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C0285CD0 (FONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0032254 (-ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02CED3C (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertGlyphbitsLookaside(RFONTOBJ *this, struct _GLYPHPOS *a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // edi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  HGLYPH hg; // r9d
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  if ( a3 == 2 )
    return RFONTOBJ::bInsertPathLookaside(this, a2);
  v6 = *(_QWORD *)this;
  v7 = *(_DWORD *)(*(_QWORD *)this + 352LL) + 64;
  if ( v7 < 0x50 )
    return 0LL;
  v8 = 0;
  if ( *(_QWORD *)(v6 + 640) < (unsigned __int64)v7 )
  {
    v9 = *(_QWORD *)(v6 + 632);
    if ( v9 )
      Win32FreePool(v9);
    *(_QWORD *)(*(_QWORD *)this + 632LL) = PALLOCMEM2(v7, 1667326791LL, 1);
    v10 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 632LL) )
    {
      *(_QWORD *)(v10 + 640) = 0LL;
      return 0LL;
    }
    *(_QWORD *)(v10 + 640) = v7;
  }
  hg = a2->hg;
  v12 = *(_QWORD *)this;
  v13 = *(_QWORD *)(*(_QWORD *)this + 632LL);
  v14 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  if ( (unsigned int)ulCallAndConvertFontOutput(
                       (struct PDEVOBJ *)&v14,
                       (struct DHPDEV__ **)v12,
                       (struct _FONTOBJ *)v12,
                       hg,
                       (struct _GLYPHDATA *)v13,
                       (struct _GLYPHBITS *)(v13 + 64),
                       *(_DWORD *)(v12 + 352)) != -1 )
  {
    a2->pgdf = (GLYPHDEF *)v13;
    v8 = 1;
    *(_QWORD *)v13 = v13 + 64;
  }
  return v8;
}
