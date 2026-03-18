/*
 * XREFs of ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C0013FE4
 * Callers:
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C00279E0 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C0014150 (-vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        struct _POINTL *const a5)
{
  unsigned int v5; // edi
  int v9; // ecx
  __int64 v10; // r8
  __m128 v11; // xmm0
  int v13; // edx
  __int64 lfOrientation; // rcx
  __int64 v15; // rax
  FLOATL v16; // eax
  __int16 v17; // r15
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // ecx
  int v21; // edx
  int v22; // edx
  __int64 y; // rax
  __int64 v24; // rax
  __int64 x; // rax
  int v26; // [rsp+20h] [rbp-71h]
  __m128 *v27; // [rsp+28h] [rbp-69h] BYREF
  int v28; // [rsp+34h] [rbp-5Dh]
  float *v29; // [rsp+38h] [rbp-59h] BYREF
  __m128 v30; // [rsp+48h] [rbp-49h] BYREF
  _OWORD v31[2]; // [rsp+70h] [rbp-21h] BYREF

  v5 = 0;
  if ( !a5->x || (v9 = *(_DWORD *)(*(_QWORD *)a3 + 48LL), (v9 & 0x3000010) != 0) )
  {
    vGetNtoW((struct MATRIX *)v31, a2, a3, a4);
    v10 = *(_QWORD *)a4;
    v27 = &v30;
    v28 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v10 + 80) + 352LL) & 0x802) == 0x802 )
    {
      v11 = (__m128)v31[0];
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v27, (struct MATRIX *)v31, (struct MATRIX *)(v10 + 336), 0) )
        return v5;
      v11 = _mm_mul_ps(v30, (__m128)_xmm);
    }
    v30 = v11;
    v5 = 1;
    LODWORD(a1->eXX) = v11.m128_i32[0];
    *(_QWORD *)&a1->eXY = *(unsigned __int64 *)((char *)v30.m128_u64 + 4);
    LODWORD(a1->eYY) = v30.m128_i32[3];
    return v5;
  }
  v13 = 0;
  if ( (v9 & 0x200000) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x802) == 0x802 )
    {
      lfOrientation = (unsigned int)a2->lfOrientation;
    }
    else
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v29, a4, 0x204u);
      v17 = (*v29 > 0.0) - (*v29 < 0.0);
      v18 = (unsigned int)a2->lfOrientation;
      v26 = (__PAIR64__(v29[1] > 0.0, *((_DWORD *)v29 + 1)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
      v19 = (__PAIR64__(v29[2] > 0.0, *((_DWORD *)v29 + 2)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x40) != 0 )
      {
        v19 = -v19;
        v20 = 3600 - lNormAngle(v18);
      }
      else
      {
        v20 = lNormAngle(v18);
      }
      lfOrientation = (v19 & 0xA8C) + v20 + (v17 & 0x708) + (v26 & 0x384u);
    }
    v13 = (int)lNormAngle(lfOrientation) / 900;
  }
  if ( v13 )
  {
    v21 = v13 - 1;
    if ( !v21 )
    {
      x = a5->x;
      a1->eXX = 0.0;
      a1->eYY = 0.0;
      a1->eYX = *((FLOATL *)&galFloatNeg + x);
      a1->eXY = *((FLOATL *)&galFloatNeg + a5->y);
      return 1LL;
    }
    v22 = v21 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        y = a5->y;
        a1->eXX = 0.0;
        a1->eYY = 0.0;
        a1->eXY = *((FLOATL *)&galFloat + y);
        a1->eYX = *((FLOATL *)&galFloat + a5->x);
      }
      return 1LL;
    }
    v24 = a5->x;
    *(_QWORD *)&a1->eXY = 0LL;
    a1->eXX = *((FLOATL *)&galFloatNeg + v24);
    v16 = *((float *)&galFloat + a5->y);
  }
  else
  {
    v15 = a5->x;
    *(_QWORD *)&a1->eXY = 0LL;
    a1->eXX = *((FLOATL *)&galFloat + v15);
    v16 = *((float *)&galFloatNeg + a5->y);
  }
  a1->eYY = v16;
  return 1LL;
}
