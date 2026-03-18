/*
 * XREFs of pcpComputeGlyphset @ 0x1C0117494
 * Callers:
 *     bVtfdLoadFont @ 0x1C0115284 (bVtfdLoadFont.c)
 *     bConvertFontRes @ 0x1C01175F0 (bConvertFontRes.c)
 * Callees:
 *     cUnicodeRangesSupported @ 0x1C000F81C (cUnicodeRangesSupported.c)
 *     cComputeGlyphSet @ 0x1C000FA30 (cComputeGlyphSet.c)
 *     vSort @ 0x1C000FBD0 (vSort.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ulCharsetToCodePage @ 0x1C0116034 (ulCharsetToCodePage.c)
 */

_DWORD *__fastcall pcpComputeGlyphset(__int64 *a1, int a2, int a3, unsigned __int8 a4)
{
  __int64 v4; // r10
  _DWORD *v5; // rbx
  unsigned int v7; // ecx
  int v9; // r12d
  unsigned int v10; // esi
  int v11; // r9d
  unsigned int v12; // edi
  _WORD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned int v16; // r13d
  _DWORD *v17; // rax
  _DWORD *v18; // rsi
  unsigned int v19; // edx
  unsigned int i; // esi

  v4 = *a1;
  v5 = 0LL;
  if ( !*a1 )
    goto LABEL_11;
  do
  {
    if ( *(_DWORD *)(v4 + 4) == a2 && *(_BYTE *)(v4 + 12) == a4 && *(_DWORD *)(v4 + 8) == a3 )
      break;
    v4 = *(_QWORD *)(v4 + 16);
  }
  while ( v4 );
  if ( v4 )
  {
    v7 = *(_DWORD *)v4 + 1;
    if ( v7 >= *(_DWORD *)v4 )
    {
      *(_DWORD *)v4 = v7;
      return (_DWORD *)v4;
    }
  }
  else
  {
LABEL_11:
    v9 = 0;
    v10 = ulCharsetToCodePage(a4);
    v12 = v11 - a2 + 1;
    if ( v12 <= 0x100 )
    {
      v13 = PALLOCMEM2(0x5A0uLL, 1936484167LL, 0);
      v14 = (__int64)v13;
      if ( v13 )
      {
        v15 = (__int64)(v13 + 240);
        if ( v10 == 42 )
        {
          v10 = 0;
          v9 = 1;
        }
        v16 = cUnicodeRangesSupported(v10, a2, v12, v13 + 240, v13);
        if ( v9 )
        {
          v19 = a2;
          for ( i = v12; v19 < v12 + a2; ++v19 )
          {
            if ( i >= 0x1E0 )
              break;
            if ( v19 >= 0x20 )
            {
              *(_WORD *)(v15 + 2LL * i) = v19 - 4096;
              *(_BYTE *)(i++ + v14) = v19 - a2;
            }
          }
          if ( *(_WORD *)(v15 + 2LL * (v12 - 1)) > 0xF020u )
            vSort(v15, v14, i);
          if ( v12 != i )
          {
            ++v16;
            v12 = i;
          }
        }
        v17 = PALLOCMEM2(4 * (v12 + 4 * v16) + 40, 1936484167LL, 0);
        v18 = v17;
        if ( v17 )
        {
          *v17 = 1;
          v17[1] = a2;
          v17[2] = a3;
          *((_BYTE *)v17 + 12) = a4;
          cComputeGlyphSet(v15, v14, v12, v16, v17 + 6);
          v5 = v18;
          *((_QWORD *)v18 + 2) = *a1;
          *a1 = (__int64)v18;
        }
        Win32FreePool(v14);
      }
    }
  }
  return v5;
}
