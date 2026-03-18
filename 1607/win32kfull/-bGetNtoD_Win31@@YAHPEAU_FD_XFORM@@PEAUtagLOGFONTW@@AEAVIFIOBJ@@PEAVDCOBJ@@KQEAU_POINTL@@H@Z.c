/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0035A74
 * Callers:
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C00279E0 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0014318 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0029B10 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0029B44 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00356D8 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C0132244 (-bParityViolatingXform@@YAHPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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
  __int64 v17; // rcx
  LONG v18; // ebx
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // r12d
  int v24; // r13d
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  int v29; // edx
  __int64 v30; // rax
  FLOATL v31; // eax
  __m128i v32; // xmm0
  int v33; // eax
  __int64 lfEscapement; // rcx
  int v35; // edx
  int v36; // edx
  __int64 y; // rax
  __int64 v38; // rax
  __int64 x; // rax
  signed int v40; // eax
  float v41; // xmm6_4
  __int64 v42; // rdx
  __int64 v43; // r8
  float v44; // xmm6_4
  __int128 v45; // xmm0
  int v46; // eax
  unsigned int *v47; // [rsp+38h] [rbp-D0h] BYREF
  __m128 *v48; // [rsp+40h] [rbp-C8h] BYREF
  int v49; // [rsp+4Ch] [rbp-BCh]
  __m128 v50; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v51; // [rsp+60h] [rbp-A8h]
  int v52; // [rsp+70h] [rbp-98h]
  __int128 v53; // [rsp+78h] [rbp-90h] BYREF
  __int128 v54; // [rsp+88h] [rbp-80h]
  int v55; // [rsp+98h] [rbp-70h]
  _OWORD v56[2]; // [rsp+A0h] [rbp-68h] BYREF
  int v57; // [rsp+C0h] [rbp-48h]
  _OWORD v58[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v59; // [rsp+E8h] [rbp-20h]

  v7 = 0;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      v29 = 0;
      if ( gbDBCSCodePage && (v12 & 0x200000) != 0 )
      {
        lfEscapement = (unsigned int)a2->lfEscapement;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x40) != 0 )
          v29 = (int)(3600 - lNormAngle(lfEscapement)) / 900 % 4;
        else
          v29 = (int)lNormAngle(lfEscapement) / 900;
      }
      if ( v29 )
      {
        v35 = v29 - 1;
        if ( !v35 )
        {
          x = a6->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          a1->eYX = *((FLOATL *)&galFloatNeg + x);
          a1->eXY = *((FLOATL *)&galFloatNeg + a6->y);
          return 1LL;
        }
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 == 1 )
          {
            y = a6->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            a1->eXY = *((FLOATL *)&galFloat + y);
            a1->eYX = *((FLOATL *)&galFloat + a6->x);
          }
          return 1LL;
        }
        v38 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloatNeg + v38);
        v31 = *((float *)&galFloat + a6->y);
      }
      else
      {
        v30 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloat + v30);
        v31 = *((float *)&galFloatNeg + a6->y);
      }
      a1->eYY = v31;
      return 1LL;
    }
  }
  if ( (unsigned int)bGetNtoW_Win31((struct MATRIX *)v56, a2, a3, a4, a5, a7) )
  {
    v14 = *(_QWORD *)a4;
    v48 = &v50;
    v49 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 80) + 352LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
    {
      v15 = (__m128)v56[0];
      v52 = v57;
      v51 = v56[1];
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v48, (struct MATRIX *)v56, (struct MATRIX *)(v14 + 336), 0) )
        return v7;
      v15 = _mm_mul_ps(v50, (__m128)_xmm);
    }
    v16 = *(_QWORD *)a3;
    v50 = v15;
    v17 = *(unsigned int *)(v16 + 48);
    if ( (v17 & 4) == 0 )
    {
      if ( (v17 & 0x200000) != 0 )
      {
        v40 = lNormAngle((unsigned int)a2->lfEscapement);
        v17 = (unsigned int)v40;
        v13 = (unsigned int)((v40 / 900) >> 31);
        LODWORD(v13) = v40 / 900 % 4;
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
        v32 = (__m128i)COERCE_UNSIGNED_INT((float)v18);
        *(float *)v32.m128i_i32 = *(float *)v32.m128i_i32 / 10.0;
        LODWORD(v53) = efCos((unsigned int)_mm_cvtsi128_si32(v32));
        HIDWORD(v53) = v53;
        v33 = efSin((unsigned int)_mm_cvtsi128_si32(v32));
        *(_QWORD *)&v54 = 0LL;
        DWORD2(v53) = v33;
        DWORD1(v53) = v33 ^ _xmm;
        v59 = v52;
        v58[1] = v51;
        v58[0] = v50;
        if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v48, (struct MATRIX *)v58, (struct MATRIX *)&v53, 0) )
          return v7;
      }
      v47 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v17, v13, v14);
      v22 = v47[14];
      v23 = 96;
      if ( (v22 & 1) == 0 || (v24 = 96, (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1) )
        v24 = v47[550];
      v25 = W32GetCurrentThreadDpiAwarenessContext(v22, v20, v21);
      if ( (v47[14] & 1) == 0 || (v25 & 0xFu) - 1 <= 1 )
        v23 = v47[551];
      if ( v24 != v23 )
      {
        v41 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v47, v26, v27);
        v44 = v41 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v47, v42, v43);
        v45 = *(_OWORD *)(*(_QWORD *)a4 + 336LL);
        v46 = *(_DWORD *)(*(_QWORD *)a4 + 368LL);
        v54 = *(_OWORD *)(*(_QWORD *)a4 + 352LL);
        v55 = v46;
        v53 = v45;
        if ( EFLOAT::bIsZero((EFLOAT *)((char *)&v53 + 4)) && EFLOAT::bIsZero((EFLOAT *)((char *)&v53 + 8)) )
        {
          v50.m128_f32[1] = v50.m128_f32[1] / v44;
          v50.m128_f32[2] = v50.m128_f32[2] * v44;
        }
        else
        {
          v50.m128_f32[0] = v50.m128_f32[0] * v44;
          v50.m128_f32[3] = v50.m128_f32[3] / v44;
        }
      }
    }
    v7 = 1;
    *a1 = (struct _FD_XFORM)v50;
    return v7;
  }
  return 0LL;
}
