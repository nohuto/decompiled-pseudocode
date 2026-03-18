/*
 * XREFs of bGetGlyphOutline @ 0x1C00C3F44
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00C267C (lGetGlyphBitmap.c)
 *     lQueryTTOutline @ 0x1C0117134 (lQueryTTOutline.c)
 * Callees:
 *     fs_NewGlyph @ 0x1C00C4E04 (fs_NewGlyph.c)
 *     fs__Contour @ 0x1C00C7348 (fs__Contour.c)
 */

_BOOL8 __fastcall bGetGlyphOutline(__int64 a1, __int16 a2, _DWORD *a3, char a4, _DWORD *a5)
{
  __int64 v7; // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx

  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  *(_DWORD *)(a1 + 32) = 1;
  v7 = *(_QWORD *)(a1 + 176);
  *(_WORD *)(v7 + 104) = -1;
  *(_WORD *)(v7 + 106) = a2;
  *(_QWORD *)(v7 + 108) = 0LL;
  v9 = fs_NewGlyph(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184));
  *a5 = v9;
  if ( v9 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 176);
  *a3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 36LL);
  *(_QWORD *)(v10 + 104) = 0LL;
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 112LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 120LL) = (*(_DWORD *)(a1 + 40) & 0x10000) == 0
                                            && *(_WORD *)(*(_QWORD *)(a1 + 184) + 168LL)
                                            && (a4 & 1) != 0;
  if ( (*(_DWORD *)(a1 + 40) & 0x10000) != 0 && (a4 & 1) != 0 && (*(_BYTE *)(a1 + 120) & 3) == 3 )
  {
    v15 = *(_QWORD *)(a1 + 176);
    if ( *(_DWORD *)(v15 + 164) == 1 )
      *(_DWORD *)(v15 + 120) = 1;
  }
  if ( (a4 & 2) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 184);
    v17 = *(_QWORD *)(a1 + 176);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 184);
    v12 = *(_QWORD *)(a1 + 176);
    v13 = fs__Contour(v12, v11, 1LL);
    if ( !v13 )
      goto LABEL_8;
    v16 = v11;
    v17 = v12;
  }
  v13 = fs__Contour(v17, v16, 0LL);
LABEL_8:
  *a5 = v13;
  return !v13;
}
