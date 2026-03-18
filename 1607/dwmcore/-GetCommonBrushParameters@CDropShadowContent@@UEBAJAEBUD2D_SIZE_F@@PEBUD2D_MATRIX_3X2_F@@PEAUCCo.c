/*
 * XREFs of ?GetCommonBrushParameters@CDropShadowContent@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x1801601C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x180032ED0 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18013528C (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IsRectangular@CDropShadowContent@@QEBA_NXZ @ 0x18014FAE4 (-IsRectangular@CDropShadowContent@@QEBA_NXZ.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x180160584 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x1801648B4 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 */

__int64 __fastcall CDropShadowContent::GetCommonBrushParameters(
        CDropShadowContent *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CCommonBrushParameters *a4,
        struct CShape **a5)
{
  FLOAT height; // xmm1_4
  __int128 v9; // xmm2
  float v10; // xmm1_4
  float *v11; // rdx
  float *v12; // rcx
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  unsigned int v22; // xmm1_4
  __int128 v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // rcx
  signed int v26; // eax
  float v27; // xmm7_4
  float v28; // xmm11_4
  float *v29; // rdx
  float v30; // xmm4_4
  float v31; // xmm8_4
  float v32; // xmm9_4
  float v33; // xmm7_4
  __int64 v34; // rdx
  float v35; // xmm4_4
  float v36; // xmm5_4
  float v37; // xmm2_4
  float v38; // xmm2_4
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  unsigned int v41; // xmm0_4
  __int64 result; // rax
  __int128 v43; // [rsp+28h] [rbp-61h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v45; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int128 v46; // [rsp+40h] [rbp-49h] BYREF

  CCachedVisualImage::GetCurrentSize(*(CCachedVisualImage **)(*((_QWORD *)this + 15) + 200LL), &v44, &v45);
  if ( a5 )
    *a5 = 0LL;
  *(_QWORD *)&v43 = 0LL;
  *((_OWORD *)a4 + 2) = _xmm;
  *((_QWORD *)a4 + 8) = 0LL;
  *((_DWORD *)a4 + 29) = 0;
  *((_QWORD *)a4 + 22) = 0LL;
  *((_DWORD *)a4 + 57) = 0;
  *((_DWORD *)a4 + 72) = 0;
  height = a2->height;
  DWORD2(v43) = LODWORD(a2->width);
  *((FLOAT *)&v43 + 3) = height;
  v9 = v43;
  *((_OWORD *)a4 + 1) = v43;
  *(_OWORD *)a4 = v9;
  *((_OWORD *)a4 + 2) = *(_OWORD *)(*((_QWORD *)this + 15) + 136LL);
  v10 = *(float *)(*((_QWORD *)this + 15) + 156LL);
  if ( v10 < 1.0 )
    *((float *)a4 + 11) = v10 * *((float *)a4 + 11);
  if ( !IsEmpty((const struct D2D_RECT_F *)(*((_QWORD *)this + 15) + 172LL)) )
  {
    v13 = v11[38];
    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11[42]) & _xmm);
    if ( v14 < 0.0000011920929 )
    {
      LODWORD(v15) = COERCE_UNSIGNED_INT(v11[41] - v13) ^ _xmm;
      LODWORD(v16) = COERCE_UNSIGNED_INT(v11[40] - v13) ^ _xmm;
      v17 = v15 + v12[1];
      v18 = v15 + v12[3];
      v19 = v16 + *v12;
      v20 = v16 + v12[2];
      v21 = v19 - *(float *)a4;
      *((float *)&v43 + 1) = v17 - *((float *)a4 + 1);
      *(float *)&v22 = *((float *)a4 + 3) - v18;
      *(float *)&v43 = v21;
      *((_QWORD *)&v43 + 1) = __PAIR64__(v22, *((float *)a4 + 2) - v20);
      v23 = *(_OWORD *)Insets::Clamp(&v46, &v43);
      *((_BYTE *)a4 + 290) = 1;
      *((_OWORD *)a4 + 3) = v23;
    }
  }
  v24 = *(_QWORD *)(*((_QWORD *)this + 15) + 200LL);
  if ( v24 )
    v25 = v24 + 8;
  else
    v25 = 0LL;
  v26 = v44;
  *(_QWORD *)&v43 = 0LL;
  *((_QWORD *)a4 + 22) = v25;
  v27 = (float)v26;
  LOWORD(v44) = 1;
  v28 = (float)(int)v45;
  *((_WORD *)a4 + 112) = 1;
  *((_BYTE *)a4 + 226) = 0;
  *((float *)&v43 + 2) = (float)v26;
  *((float *)&v43 + 3) = v28;
  *(_OWORD *)((char *)a4 + 184) = v43;
  if ( CDropShadowContent::IsRectangular(this) )
  {
    v29 = (float *)*((_QWORD *)this + 15);
    v43 = 0LL;
    if ( v29 == (float *)CDropShadow::s_pFastShadow )
      v30 = FLOAT_32_0;
    else
      v30 = v29[38] * 2.0;
    if ( v27 <= (float)(v30 * 2.0) )
    {
      v32 = *((float *)&v43 + 2);
      v31 = *(float *)&v43;
    }
    else
    {
      v31 = v30;
      v32 = v30;
      *(float *)&v43 = v30;
      *((float *)&v43 + 2) = v30;
    }
    if ( v28 <= (float)(v30 * 2.0) )
    {
      v33 = *((float *)&v43 + 3);
    }
    else
    {
      v33 = v30;
      *((float *)&v43 + 1) = v30;
      *((float *)&v43 + 3) = v30;
    }
    if ( !Insets::IsEmpty((const struct Insets *)&v43) )
    {
      v37 = *(float *)(v34 + 152);
      *((_DWORD *)a4 + 57) = 1;
      *((_BYTE *)a4 + 280) = 0;
      v38 = (float)(v37 * 2.0) / v35;
      *(float *)&v46 = v38 * v31;
      *((float *)&v46 + 1) = v38 * v36;
      v39 = *((_OWORD *)a4 + 1);
      *((float *)&v46 + 2) = v38 * v32;
      *(_OWORD *)((char *)a4 + 232) = v43;
      *((float *)&v46 + 3) = v38 * v33;
      v40 = v46;
      *(_OWORD *)((char *)a4 + 248) = v39;
      *(_OWORD *)((char *)a4 + 264) = v40;
    }
  }
  DWORD2(v46) = 0;
  *(float *)&v41 = 1.0 / a2->width;
  result = 0LL;
  *((float *)&v46 + 3) = 1.0 / a2->height;
  *(_QWORD *)&v46 = v41;
  *(_OWORD *)((char *)a4 + 200) = v46;
  *((_QWORD *)a4 + 27) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  return result;
}
