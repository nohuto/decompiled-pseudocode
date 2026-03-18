/*
 * XREFs of ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C07E0
 * Callers:
 *     EngBitBlt @ 0x1C00477E0 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00418B4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02C0AA8 (-vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 */

void __fastcall vDIBnPatBltSrccopy6x6(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5)
{
  LONG x; // ecx
  int v8; // ecx
  LONG y; // ecx
  int v10; // esi
  unsigned int v11; // edx
  LONG *v12; // rcx
  LONG v13; // eax
  LONG v14; // eax
  LONG v15; // eax
  LONG left; // edx
  LONG right; // ecx
  LONG top; // r8d
  LONG bottom; // r9d
  _QWORD v20[2]; // [rsp+38h] [rbp-1C0h] BYREF
  int v21; // [rsp+48h] [rbp-1B0h]
  __m128i *p_rclBounds; // [rsp+50h] [rbp-1A8h]
  int v23; // [rsp+58h] [rbp-1A0h]
  int v24; // [rsp+5Ch] [rbp-19Ch]
  struct _CLIPOBJ *v25; // [rsp+70h] [rbp-188h]
  struct _RECTL *v26; // [rsp+78h] [rbp-180h]
  int v27; // [rsp+80h] [rbp-178h] BYREF
  __m128i rclBounds; // [rsp+84h] [rbp-174h] BYREF

  v25 = a2;
  v26 = a3;
  v20[0] = *((_QWORD *)a1 + 10);
  v21 = *((_DWORD *)a1 + 22);
  v20[1] = *((_QWORD *)a4[1].pvRbrush + 4);
  x = a5->x;
  if ( a5->x < 0 )
    v8 = 5 - (-1 - x) % 6;
  else
    v8 = x % 6;
  v23 = v8;
  y = a5->y;
  if ( y < 0 )
    v24 = 5 - (-1 - y) % 6;
  else
    v24 = y % 6;
  if ( a2 && a2->iDComplexity )
  {
    if ( a2->iDComplexity == 1 )
    {
      rclBounds = (__m128i)a2->rclBounds;
      left = _mm_cvtsi128_si32(rclBounds);
      if ( left <= a3->left )
        left = a3->left;
      rclBounds.m128i_i32[0] = left;
      right = rclBounds.m128i_i32[2];
      if ( rclBounds.m128i_i32[2] >= a3->right )
        right = a3->right;
      rclBounds.m128i_i32[2] = right;
      top = rclBounds.m128i_i32[1];
      if ( rclBounds.m128i_i32[1] <= a3->top )
        top = a3->top;
      rclBounds.m128i_i32[1] = top;
      bottom = rclBounds.m128i_i32[3];
      if ( rclBounds.m128i_i32[3] >= a3->bottom )
        bottom = a3->bottom;
      rclBounds.m128i_i32[3] = bottom;
      if ( left < right && top < bottom )
      {
        p_rclBounds = &rclBounds;
        vPatCpyRect1_6x6((struct _PATBLTFRAME *)v20, 1);
      }
    }
    else if ( a2->iDComplexity == 3 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
      do
      {
        v10 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)&v27, 0LL);
        if ( (unsigned int)(v27 - 1) <= 0x13 )
        {
          v11 = 0;
          v12 = &rclBounds.m128i_i32[1];
          while ( v11 < v27 )
          {
            if ( *(v12 - 1) < a3->left )
              *(v12 - 1) = a3->left;
            v13 = a3->right;
            if ( v12[1] > v13 )
              v12[1] = v13;
            v14 = a3->top;
            if ( *v12 < v14 )
              *v12 = v14;
            v15 = a3->bottom;
            if ( v12[2] > v15 )
              v12[2] = v15;
            ++v11;
            v12 += 4;
          }
          p_rclBounds = &rclBounds;
          vPatCpyRect1_6x6((struct _PATBLTFRAME *)v20, v27);
        }
      }
      while ( v10 );
    }
  }
  else
  {
    p_rclBounds = (__m128i *)a3;
    vPatCpyRect1_6x6((struct _PATBLTFRAME *)v20, 1);
  }
}
