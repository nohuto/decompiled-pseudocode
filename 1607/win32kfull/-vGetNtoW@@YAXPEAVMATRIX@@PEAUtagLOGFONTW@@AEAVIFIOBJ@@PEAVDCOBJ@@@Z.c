/*
 * XREFs of ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C0014150
 * Callers:
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C0013FE4 (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0029B10 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0029B44 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C014BACC (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 */

void __fastcall vGetNtoW(struct MATRIX *a1, struct tagLOGFONTW *a2, struct IFIOBJ *a3, struct DCOBJ *a4)
{
  LONG lfHeight; // eax
  bool v9; // cc
  __m128i v10; // xmm0
  int v11; // ecx
  float v12; // xmm1_4
  float v13; // xmm0_4
  LONG lfWidth; // ecx
  float v15; // xmm0_4
  float v16; // xmm9_4
  float v17; // xmm8_4
  unsigned int v18; // ebx
  unsigned int lfOrientation; // edx
  int v20; // eax
  int v21; // xmm0_4
  unsigned int v22; // ebx
  __int16 v23; // dx
  __m128i v24; // xmm0
  float v25; // xmm7_4
  float v26; // eax
  float v27; // xmm7_4
  int v28; // xmm0_4
  float v29; // xmm6_4
  float v30; // xmm6_4
  struct MATRIX *v31; // [rsp+20h] [rbp-50h] BYREF
  int v32; // [rsp+2Ch] [rbp-44h]
  __int64 v33; // [rsp+90h] [rbp+20h] BYREF

  lfHeight = a2->lfHeight;
  v9 = a2->lfHeight <= 0;
  if ( !a2->lfHeight )
  {
    lfHeight = lGetDefaultWorldHeight(a4);
    v9 = lfHeight <= 0;
  }
  if ( v9 )
  {
    if ( lfHeight >= 0 )
    {
      v13 = *(float *)&v33;
      v12 = *(float *)&v33;
      goto LABEL_7;
    }
    v10 = _mm_cvtsi32_si128(-lfHeight);
    v11 = *(__int16 *)(*(_QWORD *)a3 + 56LL);
  }
  else
  {
    v10 = _mm_cvtsi32_si128(lfHeight);
    v11 = *(__int16 *)(*(_QWORD *)a3 + 60LL) + *(__int16 *)(*(_QWORD *)a3 + 62LL);
  }
  v12 = (float)v11;
  LODWORD(v13) = _mm_cvtepi32_ps(v10).m128_u32[0];
LABEL_7:
  lfWidth = a2->lfWidth;
  v15 = v13 / v12;
  v16 = v15;
  if ( lfWidth && (v23 = *(_WORD *)(*(_QWORD *)a3 + 76LL), v23 >= 0) )
  {
    if ( lfWidth < 0 )
      lfWidth = -lfWidth;
    v17 = (float)lfWidth / (float)v23;
  }
  else
  {
    v17 = v15;
  }
  v33 = *(_QWORD *)(*(_QWORD *)a4 + 48LL);
  if ( v33 )
  {
    v18 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v33);
    if ( v18 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v33) )
    {
      PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v33);
      PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v33);
    }
  }
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  lfOrientation = a2->lfOrientation;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x40) != 0 )
    lfOrientation = 3600 - lfOrientation;
  v20 = lNormAngle(lfOrientation);
  switch ( v20 )
  {
    case 0:
      *(float *)a1 = v17;
      *((float *)a1 + 3) = v15;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x40) != 0 )
        break;
      v21 = *((_DWORD *)a1 + 3) ^ _xmm;
      goto LABEL_17;
    case 900:
      *((float *)a1 + 1) = v17;
      *((float *)a1 + 2) = v15;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x40) == 0 )
        *((_DWORD *)a1 + 1) ^= _xmm;
      *((_DWORD *)a1 + 2) ^= _xmm;
      break;
    case 1800:
      *(float *)a1 = v17;
      v28 = *(_DWORD *)a1;
      *((float *)a1 + 3) = v16;
      *(_DWORD *)a1 = v28 ^ _xmm;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x40) != 0 )
      {
        v21 = *((_DWORD *)a1 + 3) ^ _xmm;
LABEL_17:
        *((_DWORD *)a1 + 3) = v21;
      }
      break;
    case 2700:
      *((float *)a1 + 1) = v17;
      *((float *)a1 + 2) = v15;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x40) != 0 )
        *((_DWORD *)a1 + 1) ^= _xmm;
      break;
    default:
      v24 = (__m128i)COERCE_UNSIGNED_INT((float)v20);
      *(float *)v24.m128i_i32 = *(float *)v24.m128i_i32 / 10.0;
      v25 = COERCE_FLOAT(efCos((unsigned int)_mm_cvtsi128_si32(v24)));
      v26 = COERCE_FLOAT(efSin((unsigned int)_mm_cvtsi128_si32(v24)));
      *(float *)v24.m128i_i32 = v25 * v17;
      v27 = v25 * v16;
      *(_DWORD *)a1 = v24.m128i_i32[0];
      *((float *)a1 + 3) = v27;
      *((float *)a1 + 1) = v26 * v17;
      *((_DWORD *)a1 + 2) = COERCE_UNSIGNED_INT(v26 * v16) ^ _xmm;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x40) == 0 )
      {
        *((_DWORD *)a1 + 1) ^= _xmm;
        *((_DWORD *)a1 + 3) = LODWORD(v27) ^ _xmm;
      }
      break;
  }
  v22 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v33);
  if ( v22 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v33) )
  {
    v29 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v33);
    v30 = v29 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v33);
    if ( a2->lfWidth )
      *((float *)a1 + 1) = *((float *)a1 + 1) / v30;
    else
      *(float *)a1 = v30 * *(float *)a1;
    *((float *)a1 + 2) = v30 * *((float *)a1 + 2);
  }
  v31 = a1;
  v32 = 0;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v31);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v31, 8u);
}
