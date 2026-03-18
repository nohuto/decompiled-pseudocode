/*
 * XREFs of pcpComputeGlyphset @ 0x1C001925C
 * Callers:
 *     bVtfdLoadFont @ 0x1C0017264 (bVtfdLoadFont.c)
 *     bConvertFontRes @ 0x1C00193B8 (bConvertFontRes.c)
 * Callees:
 *     cUnicodeRangesSupported @ 0x1C0017CFC (cUnicodeRangesSupported.c)
 *     cComputeGlyphSet @ 0x1C0017F00 (cComputeGlyphSet.c)
 *     vSort @ 0x1C0018094 (vSort.c)
 *     ulCharsetToCodePage @ 0x1C00281D8 (ulCharsetToCodePage.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 */

__int64 __fastcall pcpComputeGlyphset(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  int v6; // ebp
  unsigned int v7; // ecx
  int v9; // r12d
  unsigned int v10; // esi
  int v11; // r9d
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rsi
  unsigned int v21; // edx
  unsigned int i; // esi
  int v24; // [rsp+80h] [rbp+18h]

  v24 = a3;
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
      return v4;
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
      v13 = PALLOCMEM2(0x5A0uLL);
      v14 = v13;
      if ( v13 )
      {
        v15 = v13 + 480;
        if ( v10 == 42 )
        {
          v10 = 0;
          v9 = 1;
        }
        v16 = cUnicodeRangesSupported(v10, v6, v12, (_WORD *)(v13 + 480), (_BYTE *)v13);
        if ( v9 )
        {
          v21 = v6;
          for ( i = v12; v21 < v12 + v6; ++v21 )
          {
            if ( i >= 0x1E0 )
              break;
            if ( v21 >= 0x20 )
            {
              *(_WORD *)(v15 + 2LL * i) = v21 - 4096;
              *(_BYTE *)(i++ + v14) = v21 - v6;
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
        v17 = PALLOCMEM2(4 * (v12 + 4 * v16) + 40);
        v20 = v17;
        if ( v17 )
        {
          *(_DWORD *)v17 = 1;
          *(_DWORD *)(v17 + 4) = v6;
          *(_DWORD *)(v17 + 8) = v24;
          *(_BYTE *)(v17 + 12) = a4;
          cComputeGlyphSet(v15, v14, v12, v16, (_DWORD *)(v17 + 24));
          v5 = v20;
          *(_QWORD *)(v20 + 16) = *a1;
          *a1 = v20;
        }
        Win32FreePool(v14, v18, v19);
      }
    }
  }
  return v5;
}
