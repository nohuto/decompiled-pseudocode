/*
 * XREFs of pgsetComputeSymbolCP @ 0x1C0124BA4
 * Callers:
 *     cjComputeGLYPHSET_TEMPLATE @ 0x1C012489C (cjComputeGLYPHSET_TEMPLATE.c)
 * Callees:
 *     EngComputeGlyphSet @ 0x1C0124D00 (EngComputeGlyphSet.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

char *pgsetComputeSymbolCP()
{
  int v0; // esi
  char *v1; // rbx
  FD_GLYPHSET *v2; // rax
  FD_GLYPHSET *v3; // rbp
  __int64 cRuns; // r14
  char *v5; // rax
  __int64 v6; // r13
  __int64 v7; // r15
  __m128i *v8; // rdi
  WCRUN *awcrun; // r14
  signed __int64 v10; // r12
  __int64 cGlyphs; // rax
  __int64 v12; // rdx
  signed int v13; // ecx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v17; // rsi
  char *v18; // r14
  __int64 v19; // r15
  __int64 v20; // rax

  v0 = 0;
  v1 = 0LL;
  v2 = EngComputeGlyphSet(0, 0, 256);
  v3 = v2;
  if ( v2 )
  {
    cRuns = (int)v2->cRuns;
    v5 = (char *)EngAllocMem(0, 16 * ((int)cRuns + 122), 0x64667454u);
    v1 = v5;
    if ( v5 )
    {
      *(_DWORD *)v5 = 16 * (cRuns + 122);
      v6 = 0LL;
      *((_DWORD *)v5 + 1) = 4;
      v7 = cRuns;
      v8 = (__m128i *)&v5[16 * (int)cRuns + 32];
      *((_DWORD *)v5 + 2) = 480;
      *((_DWORD *)v5 + 3) = cRuns + 1;
      if ( (int)cRuns > 0 )
      {
        awcrun = v3->awcrun;
        v10 = v5 - (char *)v3;
        do
        {
          if ( awcrun->wcLow >= 0xF000u )
            break;
          *(WCHAR *)((char *)&awcrun->wcLow + v10) = awcrun->wcLow;
          *(USHORT *)((char *)&awcrun->cGlyphs + v10) = awcrun->cGlyphs;
          *(HGLYPH **)((char *)&awcrun->phg + v10) = (HGLYPH *)v8;
          memmove(v8, awcrun->phg, 4LL * awcrun->cGlyphs);
          cGlyphs = awcrun->cGlyphs;
          ++v0;
          ++v6;
          ++awcrun;
          v8 = (__m128i *)((char *)v8 + 4 * cGlyphs);
        }
        while ( v6 < v7 );
      }
      v12 = v0;
      v13 = 32;
      v14 = 16LL * v0;
      *(_DWORD *)&v1[v14 + 16] = 14741536;
      *(_QWORD *)&v1[v14 + 24] = v8;
      do
      {
        v15 = _mm_cvtsi32_si128(v13);
        v13 += 4;
        *v8++ = _mm_add_epi32(_mm_shuffle_epi32(v15, 0), (__m128i)_xmm);
      }
      while ( v13 < 256 );
      if ( v0 < v7 )
      {
        v17 = (__int64)&v1[v14 + 34];
        v18 = (char *)((char *)v3 - v1);
        v19 = v7 - v12;
        do
        {
          *(_WORD *)(v17 - 2) = *(_WORD *)&v18[v17 - 18];
          *(_WORD *)v17 = *(_WORD *)&v18[v17 - 16];
          *(_QWORD *)(v17 + 6) = v8;
          memmove(v8, *(const void **)&v18[v17 - 10], 4LL * *(unsigned __int16 *)&v18[v17 - 16]);
          v20 = *(unsigned __int16 *)&v18[v17 - 16];
          v17 += 16LL;
          v8 = (__m128i *)((char *)v8 + 4 * v20);
          --v19;
        }
        while ( v19 );
      }
    }
    EngFreeMem(v3);
  }
  return v1;
}
