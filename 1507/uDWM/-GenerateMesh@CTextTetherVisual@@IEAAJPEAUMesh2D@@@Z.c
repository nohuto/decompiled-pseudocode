/*
 * XREFs of ?GenerateMesh@CTextTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800831C8
 * Callers:
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x180083AF8 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800498DE (sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x1800830F8 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 */

__int64 __fastcall CTextTetherVisual::GenerateMesh(CTextTetherVisual *this, struct Mesh2D *a2)
{
  int v2; // r8d
  int v4; // edi
  int v6; // ebx
  int v7; // r15d
  int v8; // r12d
  int v9; // ecx
  int v10; // edx
  float v11; // xmm6_4
  float v12; // xmm0_4
  __int64 v13; // rcx
  __int64 v14; // rax
  float v15; // xmm1_4
  int v16; // r8d
  int v17; // r10d
  __m128i v18; // xmm3
  __m128i v19; // xmm2
  __m128i v20; // xmm0
  float v21; // xmm1_4
  __int64 v22; // rax
  unsigned int v23; // edx
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  int v26; // ebx
  unsigned int v27; // esi
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // edx
  int v33; // eax
  _OWORD *v34; // rax
  int v35; // eax
  int v36; // eax
  __int64 v37; // r15
  unsigned int v38; // eax
  _DWORD *v39; // r9
  unsigned int v40; // r8d
  int v41; // eax
  unsigned int v43; // [rsp+28h] [rbp-89h]
  __int64 v44; // [rsp+38h] [rbp-79h] BYREF
  __int128 v45; // [rsp+40h] [rbp-71h] BYREF
  __int128 v46; // [rsp+50h] [rbp-61h]
  __int128 v47; // [rsp+60h] [rbp-51h]
  _DWORD v48[6]; // [rsp+70h] [rbp-41h] BYREF
  __int128 v49; // [rsp+88h] [rbp-29h] BYREF
  __int128 v50; // [rsp+98h] [rbp-19h]
  __int128 v51; // [rsp+A8h] [rbp-9h]
  __int128 v52; // [rsp+B8h] [rbp+7h]

  v2 = *((_DWORD *)this + 74);
  v4 = *((_DWORD *)this + 84);
  v6 = v2 - v4;
  if ( v2 == v4 )
  {
    v7 = 6;
    v8 = 0;
  }
  else
  {
    v9 = *((_DWORD *)this + 75);
    v10 = *((_DWORD *)this + 85);
    if ( v9 == v10 )
    {
      v7 = 0;
      v8 = 6;
    }
    else
    {
      LODWORD(v11) = COERCE_UNSIGNED_INT((float)((float)v2 - (float)v4) / (float)((float)v9 - (float)v10)) ^ _xmm;
      v12 = sqrtf_0((float)(v11 * v11) + 1.0);
      v7 = (int)(float)(6.0 / v12);
      v8 = (int)(float)((float)(6.0 / v12) * v11);
    }
  }
  v13 = *((_QWORD *)this + 35);
  v44 = *((_QWORD *)this + 37);
  v14 = *((_QWORD *)this + 42);
  if ( v13 )
  {
    v15 = *(double *)(v13 + 48);
    v16 = v4 + (int)(float)((float)v6 * v15);
    v17 = *((_DWORD *)this + 85) + (int)(float)((float)(*((_DWORD *)this + 75) - *((_DWORD *)this + 85)) * v15);
  }
  else
  {
    v17 = HIDWORD(v44);
    v16 = v44;
  }
  DWORD2(v45) = 0;
  DWORD1(v46) = 0;
  LODWORD(v47) = 0;
  HIDWORD(v47) = 0;
  v48[0] = 0;
  *((_DWORD *)this + 90) = v16 + v7;
  *((_DWORD *)this + 86) = v16 - v7;
  *((_DWORD *)this + 88) = v14 - v7;
  *((_DWORD *)this + 91) = v17 + v8;
  *((_DWORD *)this + 93) = HIDWORD(v14) + v8;
  *((_DWORD *)this + 87) = v17 - v8;
  *((_DWORD *)this + 92) = v14 + v7;
  *((_DWORD *)this + 89) = HIDWORD(v14) - v8;
  v48[1] = 1;
  v48[3] = 1;
  v48[5] = 3;
  v18 = _mm_cvtsi32_si128(*((_DWORD *)this + 97));
  v19 = _mm_cvtsi32_si128(*((_DWORD *)this + 99));
  *(float *)&v45 = (float)(v16 - v7);
  *((float *)&v45 + 1) = (float)(v17 - v8);
  *(float *)&v46 = (float)(HIDWORD(v14) - v8);
  *((float *)&v45 + 3) = (float)(v14 - v7);
  *((float *)&v46 + 2) = (float)(v16 + v7);
  *((float *)&v46 + 3) = (float)(v17 + v8);
  v20 = _mm_cvtsi32_si128(HIDWORD(v14) + v8);
  v21 = (float)(v14 + v7);
  v48[2] = 2;
  v48[4] = 2;
  v22 = *((unsigned int *)a2 + 6);
  v23 = v22 + 4;
  *((float *)&v47 + 1) = v21;
  v24 = _mm_cvtsi32_si128(*((_DWORD *)this + 96));
  DWORD2(v47) = _mm_cvtepi32_ps(v20).m128_u32[0];
  v25 = _mm_cvtsi32_si128(*((_DWORD *)this + 98));
  *((_QWORD *)&v49 + 1) = *(_OWORD *)&_mm_cvtepi32_pd(v18);
  *((_QWORD *)&v50 + 1) = *(_OWORD *)&_mm_cvtepi32_pd(v19);
  *((_QWORD *)&v51 + 1) = *((_QWORD *)&v49 + 1);
  *((_QWORD *)&v52 + 1) = *((_QWORD *)&v50 + 1);
  *(_QWORD *)&v49 = *(_OWORD *)&_mm_cvtepi32_pd(v24);
  *(_QWORD *)&v50 = v49;
  *(_QWORD *)&v51 = *(_OWORD *)&_mm_cvtepi32_pd(v25);
  *(_QWORD *)&v52 = v51;
  if ( (int)v22 + 4 < (unsigned int)v22 )
  {
    v26 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v27 = -2147024362;
LABEL_18:
    v43 = 285;
LABEL_38:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, v43);
    return v27;
  }
  if ( v23 > *((_DWORD *)a2 + 5) )
  {
    v33 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2, 0xCu, 4, &v45);
    v26 = v33;
    if ( v33 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0xC0u);
    v27 = v26;
    if ( v26 < 0 )
      goto LABEL_18;
  }
  else
  {
    v28 = 3 * v22;
    v29 = *(_QWORD *)a2;
    *(_OWORD *)(v29 + 4 * v28) = v45;
    *(_OWORD *)(v29 + 4 * v28 + 16) = v46;
    *(_OWORD *)(v29 + 4 * v28 + 32) = v47;
    *((_DWORD *)a2 + 6) = v23;
  }
  v30 = (_QWORD *)((char *)a2 + 32);
  v31 = *((unsigned int *)a2 + 14);
  v32 = v31 + 4;
  if ( (int)v31 + 4 < (unsigned int)v31 )
  {
    v26 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v27 = -2147024362;
LABEL_26:
    v43 = 286;
    goto LABEL_38;
  }
  if ( v32 > *((_DWORD *)a2 + 13) )
  {
    v36 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v30, 0x10u, 4, &v49);
    v26 = v36;
    if ( v36 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v36, 0xC0u);
    v27 = v26;
    if ( v26 < 0 )
      goto LABEL_26;
  }
  else
  {
    v34 = (_OWORD *)(*v30 + 16 * v31);
    *v34 = v49;
    v34[1] = v50;
    v34[2] = v51;
    v34[3] = v52;
    *((_DWORD *)a2 + 14) = v32;
  }
  LODWORD(v44) = 255;
  v35 = DynArray<unsigned long,0>::AddAndSet((__int64)a2 + 96, 4u, (int *)&v44);
  v27 = v35;
  if ( v35 >= 0 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      v38 = *((_DWORD *)a2 + 22);
      v39 = &v48[v37];
      v40 = v38 + 1;
      if ( v38 + 1 < v38 )
        break;
      v27 = 0;
      if ( v40 > *((_DWORD *)a2 + 21) )
      {
        v41 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 64, 4u, 1, v39);
        v26 = v41;
        if ( v41 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v41, 0xC0u);
        v27 = v26;
        if ( v26 < 0 )
          goto LABEL_37;
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v38) = *v39;
        *((_DWORD *)a2 + 22) = v40;
      }
      v37 = (unsigned int)(v37 + 1);
      if ( (unsigned int)v37 >= 6 )
        return v27;
    }
    v26 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v27 = -2147024362;
LABEL_37:
    v43 = 291;
    goto LABEL_38;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v35, 0x11Fu);
  return v27;
}
