/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0029584
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C0126284 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 * Callees:
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C0027504 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0030CB4 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0030CF4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00327F4 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C010084C (-bParityViolatingXform@@YAHPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD_Win31(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        char a5,
        struct _POINTL *const a6,
        int a7)
{
  unsigned int v7; // edi
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // r8
  __m128 v15; // xmm0
  __int64 v16; // rax
  int v17; // ecx
  LONG v18; // ebx
  __int64 v19; // rbx
  _DWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // r12d
  int v24; // r13d
  int v26; // edx
  __int64 v27; // rax
  FLOATL v28; // eax
  __m128i v29; // xmm0
  int v30; // eax
  __int64 lfEscapement; // rcx
  int v32; // edx
  int v33; // edx
  __int64 y; // rax
  __int64 v35; // rax
  __int64 x; // rax
  __int64 v37; // kr00_8
  float v38; // xmm6_4
  float v39; // xmm6_4
  __int128 v40; // xmm0
  int v41; // eax
  int v42; // [rsp+38h] [rbp-D0h] BYREF
  int v43; // [rsp+3Ch] [rbp-CCh] BYREF
  _DWORD *v44; // [rsp+40h] [rbp-C8h] BYREF
  __m128 *v45; // [rsp+48h] [rbp-C0h] BYREF
  int v46; // [rsp+54h] [rbp-B4h]
  __m128 v47; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v48; // [rsp+68h] [rbp-A0h]
  int v49; // [rsp+78h] [rbp-90h]
  __int128 v50; // [rsp+80h] [rbp-88h] BYREF
  __int128 v51; // [rsp+90h] [rbp-78h]
  int v52; // [rsp+A0h] [rbp-68h]
  _OWORD v53[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v54; // [rsp+C8h] [rbp-40h]
  _OWORD v55[2]; // [rsp+D0h] [rbp-38h] BYREF
  int v56; // [rsp+F0h] [rbp-18h]

  v7 = 0;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      v26 = 0;
      if ( gbDBCSCodePage && (v12 & 0x200000) != 0 )
      {
        lfEscapement = (unsigned int)a2->lfEscapement;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x40) != 0 )
          v26 = (int)(3600 - lNormAngle(lfEscapement)) / 900 % 4;
        else
          v26 = (int)lNormAngle(lfEscapement) / 900;
      }
      if ( v26 )
      {
        v32 = v26 - 1;
        if ( !v32 )
        {
          x = a6->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          a1->eYX = *((FLOATL *)&galFloatNeg + x);
          a1->eXY = *((FLOATL *)&galFloatNeg + a6->y);
          return 1LL;
        }
        v33 = v32 - 1;
        if ( v33 )
        {
          if ( v33 == 1 )
          {
            y = a6->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            a1->eXY = *((FLOATL *)&galFloat + y);
            a1->eYX = *((FLOATL *)&galFloat + a6->x);
          }
          return 1LL;
        }
        v35 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloatNeg + v35);
        v28 = *((float *)&galFloat + a6->y);
      }
      else
      {
        v27 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloat + v27);
        v28 = *((float *)&galFloatNeg + a6->y);
      }
      a1->eYY = v28;
      return 1LL;
    }
  }
  if ( (unsigned int)bGetNtoW_Win31((struct MATRIX *)v53, a2, a3, a4, a5, a7) )
  {
    v14 = *(_QWORD *)a4;
    v45 = &v47;
    v46 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 80) + 352LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
    {
      v15 = (__m128)v53[0];
      v49 = v54;
      v48 = v53[1];
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v45, (struct MATRIX *)v53, (struct MATRIX *)(v14 + 336), 0) )
        return v7;
      v15 = _mm_mul_ps(v47, (__m128)_xmm);
    }
    v16 = *(_QWORD *)a3;
    v47 = v15;
    v17 = *(_DWORD *)(v16 + 48);
    if ( (v17 & 4) == 0 )
    {
      if ( (v17 & 0x200000) != 0 )
      {
        v37 = (int)lNormAngle((unsigned int)a2->lfEscapement) / 900;
        v13 = HIDWORD(v37);
        LODWORD(v13) = v37 % 4;
        v18 = 900 * v13;
      }
      else
      {
        v18 = a2->lfEscapement;
      }
      if ( v18 && ((a5 & 1) == 0 || gbDBCSCodePage) )
      {
        if ( (unsigned int)bParityViolatingXform(a4) )
          v18 = -v18;
        v29 = (__m128i)COERCE_UNSIGNED_INT((float)v18);
        *(float *)v29.m128i_i32 = *(float *)v29.m128i_i32 / 10.0;
        LODWORD(v50) = efCos((unsigned int)_mm_cvtsi128_si32(v29));
        HIDWORD(v50) = v50;
        v30 = efSin((unsigned int)_mm_cvtsi128_si32(v29));
        *(_QWORD *)&v51 = 0LL;
        DWORD2(v50) = v30;
        DWORD1(v50) = v30 ^ _xmm;
        v56 = v49;
        v55[1] = v48;
        v55[0] = v47;
        if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v45, (struct MATRIX *)v55, (struct MATRIX *)&v50, 0) )
          return v7;
      }
      v19 = *(_QWORD *)a4;
      v43 = -1;
      v20 = *(_DWORD **)(v19 + 48);
      v44 = v20;
      UserGetCurrentProcessDpiAwareness(&v43, v13, v14);
      v23 = 96;
      if ( (v20[14] & 1) == 0 || (v24 = 96, (unsigned int)(v43 - 1) <= 1) )
        v24 = v20[550];
      v42 = -1;
      UserGetCurrentProcessDpiAwareness(&v42, v21, v22);
      if ( (v20[14] & 1) == 0 || (unsigned int)(v42 - 1) <= 1 )
        v23 = v20[551];
      if ( v24 != v23 )
      {
        v38 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v44);
        v39 = v38 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v44);
        v40 = *(_OWORD *)(*(_QWORD *)a4 + 336LL);
        v41 = *(_DWORD *)(*(_QWORD *)a4 + 368LL);
        v51 = *(_OWORD *)(*(_QWORD *)a4 + 352LL);
        v52 = v41;
        v50 = v40;
        if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)&v50 + 4))
          && (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)&v50 + 8)) )
        {
          v47.m128_f32[1] = v47.m128_f32[1] / v39;
          v47.m128_f32[2] = v47.m128_f32[2] * v39;
        }
        else
        {
          v47.m128_f32[0] = v47.m128_f32[0] * v39;
          v47.m128_f32[3] = v47.m128_f32[3] / v39;
        }
      }
    }
    v7 = 1;
    *a1 = (struct _FD_XFORM)v47;
    return v7;
  }
  return 0LL;
}
