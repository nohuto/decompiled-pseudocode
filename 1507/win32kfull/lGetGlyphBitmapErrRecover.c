/*
 * XREFs of lGetGlyphBitmapErrRecover @ 0x1C0247028
 * Callers:
 *     ttfdQueryFontData @ 0x1C00B1D84 (ttfdQueryFontData.c)
 * Callees:
 *     fs_NewGlyph @ 0x1C00B4858 (fs_NewGlyph.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C0247650 (vFillGLYPHDATA_ErrRecover.c)
 */

__int64 __fastcall lGetGlyphBitmapErrRecover(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // rax
  char *v10; // rsi
  char v11; // [rsp+30h] [rbp-68h] BYREF

  if ( a3 )
  {
    if ( !a4 )
    {
LABEL_7:
      v9 = *(_QWORD *)(a1 + 176);
      v10 = &v11;
      if ( a3 )
        v10 = (char *)a3;
      *(_DWORD *)(v9 + 108) = 0;
      *(_DWORD *)(v9 + 112) = 0;
      *(_WORD *)(v9 + 104) = -1;
      *(_WORD *)(v9 + 106) = a2;
      if ( !(unsigned int)fs_NewGlyph(*(_QWORD *)(a1 + 176), *(_WORD **)(a1 + 184), a3, a4) )
      {
        vFillGLYPHDATA_ErrRecover(a2, *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 36LL), a1, v10);
        if ( a4 )
        {
          *(_DWORD *)a4 = *(_DWORD *)(a1 + 200);
          *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 204);
          *(_DWORD *)(a4 + 8) = 1;
          *(_DWORD *)(a4 + 12) = 1;
          *(_BYTE *)(a4 + 16) = 0;
          *(_QWORD *)v10 = a4;
        }
        return 20LL;
      }
      return 0xFFFFFFFFLL;
    }
LABEL_5:
    if ( a5 < 0x14 )
      return 0xFFFFFFFFLL;
    goto LABEL_7;
  }
  if ( a4 )
    goto LABEL_5;
  return 20LL;
}
