/*
 * XREFs of EngComputeGlyphSet @ 0x1C0017C40
 * Callers:
 *     pgsetComputeSymbolCP @ 0x1C0017ADC (pgsetComputeSymbolCP.c)
 *     cjComputeGLYPHSET_TEMPLATE @ 0x1C001C5E4 (cjComputeGLYPHSET_TEMPLATE.c)
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A44EC (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02ACFD0 (NtGdiEngComputeGlyphSet.c)
 * Callees:
 *     cUnicodeRangesSupported @ 0x1C0017CFC (cUnicodeRangesSupported.c)
 *     cComputeGlyphSet @ 0x1C0017F00 (cComputeGlyphSet.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 */

FD_GLYPHSET *__stdcall EngComputeGlyphSet(INT nCodePage, INT nFirstChar, INT cChars)
{
  __int64 v3; // rbx
  FD_GLYPHSET *v4; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebp
  int v10; // r14d
  FD_GLYPHSET *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8

  v3 = cChars;
  v4 = 0LL;
  if ( (unsigned int)cChars <= 0xFFFF )
  {
    v7 = PALLOCMEM2((unsigned int)(3 * cChars));
    v8 = v7;
    if ( v7 )
    {
      v9 = v7 + 2 * v3;
      v10 = cUnicodeRangesSupported(nCodePage, nFirstChar, v3, v7, v7 + 2 * v3);
      v11 = (FD_GLYPHSET *)EngAllocMem(0, 4 * ((int)v3 + 4 + 4 * v10), 0x736C6747u);
      v4 = v11;
      if ( v11 )
        cComputeGlyphSet(v8, v9, v3, v10, (__int64)v11);
      Win32FreePool(v8, v12, v13);
    }
  }
  return v4;
}
