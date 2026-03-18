/*
 * XREFs of lGetGlyphBitmapErrRecover @ 0x1C0243310
 * Callers:
 *     ttfdQueryFontData @ 0x1C00C2348 (ttfdQueryFontData.c)
 * Callees:
 *     CJGD @ 0x1C00C296C (CJGD.c)
 *     fs_NewGlyph @ 0x1C00C4E04 (fs_NewGlyph.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C0243960 (vFillGLYPHDATA_ErrRecover.c)
 */

__int64 __fastcall lGetGlyphBitmapErrRecover(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  __int64 v12; // rax
  char *v13; // r14
  char v14; // [rsp+20h] [rbp-78h] BYREF

  result = CJGD(1u, 1, a1);
  v11 = result;
  if ( v10 )
  {
    if ( !a4 )
      goto LABEL_8;
  }
  else if ( !a4 )
  {
    return result;
  }
  if ( (int)result < 0 || a5 < (unsigned int)result )
    return 0xFFFFFFFFLL;
LABEL_8:
  v12 = *(_QWORD *)(a1 + 176);
  v13 = &v14;
  if ( v10 )
    v13 = (char *)v10;
  *(_DWORD *)(v12 + 108) = 0;
  *(_DWORD *)(v12 + 112) = 0;
  *(_WORD *)(v12 + 104) = -1;
  *(_WORD *)(v12 + 106) = a2;
  if ( (unsigned int)fs_NewGlyph(*(_QWORD *)(a1 + 176), *(_WORD **)(a1 + 184), v9, v10) )
    return 0xFFFFFFFFLL;
  vFillGLYPHDATA_ErrRecover(a2, *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 36LL), a1, v13);
  if ( a4 )
  {
    *(_DWORD *)a4 = *(_DWORD *)(a1 + 200);
    *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 204);
    *(_DWORD *)(a4 + 8) = 1;
    *(_DWORD *)(a4 + 12) = 1;
    *(_BYTE *)(a4 + 16) = 0;
    *(_QWORD *)v13 = a4;
  }
  return v11;
}
