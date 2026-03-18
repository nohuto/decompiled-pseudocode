/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00216C4
 * Callers:
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C001E818 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C001C55C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C001C59C (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C001EB28 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C0111C28 (-bParityViolatingXform@@YAHPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  __int64 v13; // r8
  __m128 v14; // xmm0
  __int64 v15; // rax
  int v16; // ecx
  LONG v17; // ebx
  __int64 v18; // rbx
  _DWORD *v19; // rbx
  int v20; // r12d
  int v21; // r13d
  int v23; // edx
  __int64 v24; // rax
  FLOATL v25; // eax
  __m128i v26; // xmm0
  int v27; // eax
  __int64 lfEscapement; // rcx
  int v29; // edx
  int v30; // edx
  __int64 y; // rax
  __int64 v32; // rax
  __int64 x; // rax
  float v34; // xmm6_4
  float v35; // xmm6_4
  __int128 v36; // xmm0
  int v37; // eax
  int v38; // [rsp+38h] [rbp-D0h] BYREF
  int v39; // [rsp+3Ch] [rbp-CCh] BYREF
  _DWORD *v40; // [rsp+40h] [rbp-C8h] BYREF
  __m128 *v41; // [rsp+48h] [rbp-C0h] BYREF
  int v42; // [rsp+54h] [rbp-B4h]
  __m128 v43; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v44; // [rsp+68h] [rbp-A0h]
  int v45; // [rsp+78h] [rbp-90h]
  __int128 v46; // [rsp+80h] [rbp-88h] BYREF
  __int128 v47; // [rsp+90h] [rbp-78h]
  int v48; // [rsp+A0h] [rbp-68h]
  _OWORD v49[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v50; // [rsp+C8h] [rbp-40h]
  _OWORD v51[2]; // [rsp+D0h] [rbp-38h] BYREF
  int v52; // [rsp+F0h] [rbp-18h]

  v7 = 0;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      v23 = 0;
      if ( gbDBCSCodePage && (v12 & 0x200000) != 0 )
      {
        lfEscapement = (unsigned int)a2->lfEscapement;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x40) != 0 )
          v23 = (int)(3600 - lNormAngle(lfEscapement)) / 900 % 4;
        else
          v23 = (int)lNormAngle(lfEscapement) / 900;
      }
      if ( v23 )
      {
        v29 = v23 - 1;
        if ( !v29 )
        {
          x = a6->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          a1->eYX = *((FLOATL *)&galFloatNeg + x);
          a1->eXY = *((FLOATL *)&galFloatNeg + a6->y);
          return 1LL;
        }
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 == 1 )
          {
            y = a6->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            a1->eXY = *((FLOATL *)&galFloat + y);
            a1->eYX = *((FLOATL *)&galFloat + a6->x);
          }
          return 1LL;
        }
        v32 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloatNeg + v32);
        v25 = *((float *)&galFloat + a6->y);
      }
      else
      {
        v24 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloat + v24);
        v25 = *((float *)&galFloatNeg + a6->y);
      }
      a1->eYY = v25;
      return 1LL;
    }
  }
  if ( (unsigned int)bGetNtoW_Win31((struct MATRIX *)v49, a2, a3, a4, a5, a7) )
  {
    v13 = *(_QWORD *)a4;
    v41 = &v43;
    v42 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v13 + 80) + 352LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
    {
      v14 = (__m128)v49[0];
      v45 = v50;
      v44 = v49[1];
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v41, (struct MATRIX *)v49, (struct MATRIX *)(v13 + 336), 0) )
        return v7;
      v14 = _mm_mul_ps(v43, (__m128)_xmm);
    }
    v15 = *(_QWORD *)a3;
    v43 = v14;
    v16 = *(_DWORD *)(v15 + 48);
    if ( (v16 & 4) == 0 )
    {
      if ( (v16 & 0x200000) != 0 )
        v17 = 900 * ((int)lNormAngle((unsigned int)a2->lfEscapement) / 900 % 4);
      else
        v17 = a2->lfEscapement;
      if ( v17 && ((a5 & 1) == 0 || gbDBCSCodePage) )
      {
        if ( (unsigned int)bParityViolatingXform(a4) )
          v17 = -v17;
        v26 = (__m128i)COERCE_UNSIGNED_INT((float)v17);
        *(float *)v26.m128i_i32 = *(float *)v26.m128i_i32 / 10.0;
        LODWORD(v46) = efCos((unsigned int)_mm_cvtsi128_si32(v26));
        HIDWORD(v46) = v46;
        v27 = efSin((unsigned int)_mm_cvtsi128_si32(v26));
        *(_QWORD *)&v47 = 0LL;
        DWORD2(v46) = v27;
        DWORD1(v46) = v27 ^ _xmm;
        v52 = v45;
        v51[1] = v44;
        v51[0] = v43;
        if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v41, (struct MATRIX *)v51, (struct MATRIX *)&v46, 0) )
          return v7;
      }
      v18 = *(_QWORD *)a4;
      v39 = -1;
      v19 = *(_DWORD **)(v18 + 48);
      v40 = v19;
      UserGetCurrentProcessDpiAwareness(&v39);
      v20 = 96;
      if ( (v19[14] & 1) == 0 || (v21 = 96, (unsigned int)(v39 - 1) <= 1) )
        v21 = v19[550];
      v38 = -1;
      UserGetCurrentProcessDpiAwareness(&v38);
      if ( (v19[14] & 1) == 0 || (unsigned int)(v38 - 1) <= 1 )
        v20 = v19[551];
      if ( v21 != v20 )
      {
        v34 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v40);
        v35 = v34 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v40);
        v36 = *(_OWORD *)(*(_QWORD *)a4 + 336LL);
        v37 = *(_DWORD *)(*(_QWORD *)a4 + 368LL);
        v47 = *(_OWORD *)(*(_QWORD *)a4 + 352LL);
        v48 = v37;
        v46 = v36;
        if ( EFLOAT::bIsZero((EFLOAT *)((char *)&v46 + 4)) && EFLOAT::bIsZero((EFLOAT *)((char *)&v46 + 8)) )
        {
          v43.m128_f32[1] = v43.m128_f32[1] / v35;
          v43.m128_f32[2] = v43.m128_f32[2] * v35;
        }
        else
        {
          v43.m128_f32[0] = v43.m128_f32[0] * v35;
          v43.m128_f32[3] = v43.m128_f32[3] / v35;
        }
      }
    }
    v7 = 1;
    *a1 = (struct _FD_XFORM)v43;
    return v7;
  }
  return 0LL;
}
