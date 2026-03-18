/*
 * XREFs of pcpComputeGlyphset @ 0x1C01489C0
 * Callers:
 *     bVtfdLoadFont @ 0x1C0147644 (bVtfdLoadFont.c)
 *     bConvertFontRes @ 0x1C0147A10 (bConvertFontRes.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     cUnicodeRangesSupported @ 0x1C0124DBC (cUnicodeRangesSupported.c)
 *     cComputeGlyphSet @ 0x1C0124FD0 (cComputeGlyphSet.c)
 *     vSort @ 0x1C0125170 (vSort.c)
 *     ulCharsetToCodePage @ 0x1C0148FB4 (ulCharsetToCodePage.c)
 */

_DWORD *__fastcall pcpComputeGlyphset(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // r10
  _DWORD *v5; // rbx
  int v6; // ebp
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
  int v22; // [rsp+80h] [rbp+18h]

  v22 = a3;
  v4 = *a1;
  v5 = 0LL;
  v6 = a2;
  if ( !*a1 )
    goto LABEL_11;
  do
  {
    if ( *(_DWORD *)(v4 + 4) == (_DWORD)a2 && *(_BYTE *)(v4 + 12) == a4 && *(_DWORD *)(v4 + 8) == (_DWORD)a3 )
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
    v10 = ulCharsetToCodePage(a4, a2, a3, (unsigned int)a3);
    v12 = v11 - v6 + 1;
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
        v16 = cUnicodeRangesSupported(v10, v6, v12, v13 + 240, v13);
        if ( v9 )
        {
          v19 = v6;
          for ( i = v12; v19 < v12 + v6; ++v19 )
          {
            if ( i >= 0x1E0 )
              break;
            if ( v19 >= 0x20 )
            {
              *(_WORD *)(v15 + 2LL * i) = v19 - 4096;
              *(_BYTE *)(i++ + v14) = v19 - v6;
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
          v17[1] = v6;
          v17[2] = v22;
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
