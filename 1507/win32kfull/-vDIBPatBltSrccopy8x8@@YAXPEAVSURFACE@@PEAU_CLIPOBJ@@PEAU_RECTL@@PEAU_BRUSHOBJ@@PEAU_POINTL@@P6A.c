/*
 * XREFs of ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BE174
 * Callers:
 *     EngBitBlt @ 0x1C009CF40 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0021750 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vDIBPatBltSrccopy8x8(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        __m128i *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        void (*a6)(struct _PATBLTFRAME *, int))
{
  _QWORD *pvRbrush; // rcx
  int v9; // r14d
  int v10; // edx
  LONG *v11; // rcx
  LONG v12; // eax
  LONG v13; // eax
  LONG v14; // eax
  LONG v15; // eax
  LONG v16; // edx
  LONG v17; // ecx
  LONG v18; // r8d
  LONG v19; // r9d
  _QWORD v20[2]; // [rsp+48h] [rbp-1D0h] BYREF
  int v21; // [rsp+58h] [rbp-1C0h]
  int v22; // [rsp+5Ch] [rbp-1BCh]
  __m128i *p_rclBounds; // [rsp+60h] [rbp-1B8h]
  int v24; // [rsp+68h] [rbp-1B0h]
  int v25; // [rsp+6Ch] [rbp-1ACh]
  struct _CLIPOBJ *v26; // [rsp+80h] [rbp-198h]
  unsigned int v27; // [rsp+90h] [rbp-188h] BYREF
  __m128i rclBounds; // [rsp+94h] [rbp-184h] BYREF

  v26 = a2;
  v20[0] = *((_QWORD *)a1 + 10);
  v21 = *((_DWORD *)a1 + 22);
  pvRbrush = a4[1].pvRbrush;
  v20[1] = pvRbrush[4];
  v22 = *((_DWORD *)pvRbrush + 7);
  v24 = a5->x & 7;
  v25 = a5->y & 7;
  if ( a2 && a2->iDComplexity )
  {
    if ( a2->iDComplexity == 1 )
    {
      rclBounds = (__m128i)a2->rclBounds;
      v16 = _mm_cvtsi128_si32(rclBounds);
      if ( v16 <= a3->m128i_i32[0] )
        v16 = a3->m128i_i32[0];
      rclBounds.m128i_i32[0] = v16;
      v17 = rclBounds.m128i_i32[2];
      if ( rclBounds.m128i_i32[2] >= a3->m128i_i32[2] )
        v17 = a3->m128i_i32[2];
      rclBounds.m128i_i32[2] = v17;
      v18 = rclBounds.m128i_i32[1];
      if ( rclBounds.m128i_i32[1] <= a3->m128i_i32[1] )
        v18 = a3->m128i_i32[1];
      rclBounds.m128i_i32[1] = v18;
      v19 = rclBounds.m128i_i32[3];
      if ( rclBounds.m128i_i32[3] >= a3->m128i_i32[3] )
        v19 = a3->m128i_i32[3];
      rclBounds.m128i_i32[3] = v19;
      if ( v16 < v17 && v18 < v19 )
      {
        p_rclBounds = &rclBounds;
        ((void (__fastcall *)(_QWORD *, __int64))a6)(v20, 1LL);
      }
    }
    else if ( a2->iDComplexity == 3 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
      do
      {
        v9 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)&v27, 0LL);
        if ( v27 - 1 <= 0x13 )
        {
          v10 = 0;
          v11 = &rclBounds.m128i_i32[1];
          while ( v10 < (int)v27 )
          {
            if ( *(v11 - 1) < a3->m128i_i32[0] )
              *(v11 - 1) = a3->m128i_i32[0];
            v12 = a3->m128i_i32[2];
            if ( v11[1] > v12 )
              v11[1] = v12;
            v13 = a3->m128i_i32[1];
            if ( *v11 < v13 )
              *v11 = v13;
            v14 = a3->m128i_i32[3];
            if ( v11[2] > v14 )
              v11[2] = v14;
            v15 = *(v11 - 1);
            if ( v11[1] < v15 )
              v11[1] = v15;
            if ( v11[2] < *v11 )
              v11[2] = *v11;
            ++v10;
            v11 += 4;
          }
          p_rclBounds = &rclBounds;
          ((void (__fastcall *)(_QWORD *, _QWORD))a6)(v20, v27);
        }
      }
      while ( v9 );
    }
  }
  else
  {
    p_rclBounds = a3;
    ((void (__fastcall *)(_QWORD *, __int64))a6)(v20, 1LL);
  }
}
