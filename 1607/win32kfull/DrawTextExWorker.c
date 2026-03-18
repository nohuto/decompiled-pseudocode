/*
 * XREFs of DrawTextExWorker @ 0x1C0247624
 * Callers:
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F77B4 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GreSetTextAlign @ 0x1C00B9838 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00B98B0 (GreGetTextAlign.c)
 *     GreGetRandomRgn @ 0x1C014BED0 (GreGetRandomRgn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     AddEllipsisAndDrawLine @ 0x1C0246ED0 (AddEllipsisAndDrawLine.c)
 *     DT_InitDrawTextInfo @ 0x1C024742C (DT_InitDrawTextInfo.c)
 *     GreExtSelectClipRgnInternal @ 0x1C0290370 (GreExtSelectClipRgnInternal.c)
 */

__int64 __fastcall DrawTextExWorker(HDC a1, _WORD *a2, int a3, _QWORD *a4, int a5, _DWORD *a6)
{
  __int64 v7; // rbp
  __int64 v10; // rsi
  int TextAlign; // eax
  HRGN RectRgn; // rax
  __m128i v14; // xmm0
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // ebp
  int v20; // eax
  int v21; // [rsp+40h] [rbp-B8h]
  _DWORD v22[20]; // [rsp+50h] [rbp-A8h] BYREF

  LODWORD(v7) = a3;
  memset(v22, 0, 0x48uLL);
  v10 = 0LL;
  v21 = 0;
  if ( !a2 )
    return 0LL;
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == -1 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( a2[v7] );
    }
  }
  else if ( *a2 )
  {
    return 1LL;
  }
  if ( a6 && *a6 != 20 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  if ( !(unsigned int)DT_InitDrawTextInfo(a1, a4, a5, (__int64)v22, (__int64)a6) )
    return 0LL;
  v22[16] = -1;
  if ( (a5 & 0x20000) != 0 )
  {
    TextAlign = GreGetTextAlign(a1);
    v21 = GreSetTextAlign(a1, TextAlign | 0x100u);
  }
  if ( (a5 & 0x100) == 0 )
  {
    RectRgn = (HRGN)GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    v10 = (__int64)RectRgn;
    if ( RectRgn )
    {
      if ( (unsigned int)GreGetRandomRgn(a1, RectRgn, 1) != 1 )
      {
        GreDeleteObject(v10);
        v10 = -1LL;
      }
      v14 = _mm_srli_si128(*(__m128i *)a4, 8);
      GreIntersectClipRect(a1, *a4, HIDWORD(*a4), (unsigned int)_mm_cvtsi128_si32(v14), v14.m128i_i32[1]);
    }
  }
  v15 = *((_DWORD *)a4 + 1);
  v16 = a5 & 0xC;
  if ( v16 == 4 )
  {
    v15 += (int)(*((_DWORD *)a4 + 3) - v15 - v22[7]) / 2;
  }
  else if ( v16 == 8 )
  {
    v15 = *((_DWORD *)a4 + 3) - v22[7];
  }
  v17 = AddEllipsisAndDrawLine(a1, v15, a2, (unsigned int)v7, a5, (__int64)v22);
  v18 = v22[7] + v15;
  v19 = (_DWORD)a2 + 2 * v17;
  if ( v10 )
  {
    GreExtSelectClipRgnInternal(a1);
    if ( v10 != -1 )
      GreDeleteObject(v10);
  }
  if ( (a5 & 0x20000) != 0 )
    GreSetTextAlign(a1, v21);
  if ( a6 )
    a6[4] = (unsigned int)(v19 - (_DWORD)a2) >> 1;
  v20 = *((_DWORD *)a4 + 1);
  if ( v18 == v20 )
    return 1LL;
  else
    return v18 - v20;
}
