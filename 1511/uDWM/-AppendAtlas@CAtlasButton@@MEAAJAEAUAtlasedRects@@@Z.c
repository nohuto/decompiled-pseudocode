/*
 * XREFs of ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001BD50
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002BE50 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x180013044 (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002B5F0 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     floor_0 @ 0x18004FF2A (floor_0.c)
 */

__int64 __fastcall CAtlasButton::AppendAtlas(CAtlasButton *this, const RECT **a2)
{
  struct CBitmapSource *v2; // r8
  int v3; // edi
  int appended; // eax
  struct CBitmapSource *v7; // r8
  __int64 v8; // r14
  RECT *v9; // rax
  int v10; // r12d
  int v11; // r13d
  float v12; // xmm2_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm6_4
  float v18; // xmm10_4
  float v19; // xmm0_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm8_4
  double v23; // xmm0_8
  int v24; // eax
  float v25; // xmm12_4
  __m128i v26; // xmm6
  float v27; // xmm6_4
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  bool v30; // zf
  __m128i v31; // xmm3
  __m128i v32; // xmm4
  char v33; // r15
  unsigned __int32 left; // xmm1_4
  unsigned __int32 top; // xmm2_4
  unsigned __int32 right; // xmm3_4
  unsigned __int32 bottom; // xmm4_4
  char v38; // r14
  __int64 v39; // rax
  unsigned int v40; // ecx
  RECT v41; // xmm0
  RECT *v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rcx
  unsigned int v45; // edx
  unsigned int v46; // eax
  LONG *v47; // r9
  unsigned int v48; // r8d
  struct tagRECT *v50; // rax
  int v51; // eax
  int v52; // r14d
  int v53; // eax
  int v54; // r14d
  int v55; // eax
  int v56; // r14d
  int v57; // eax
  int v58; // r14d
  int v59; // eax
  RECT v60; // [rsp+30h] [rbp-D0h] BYREF
  RECT v61; // [rsp+40h] [rbp-C0h] BYREF
  RECT v62; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (struct CBitmapSource *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    appended = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v2);
    v3 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0x350u);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x2A3u);
    return (unsigned int)v3;
  }
  v7 = (struct CBitmapSource *)*((_QWORD *)this + 17);
  if ( v7 )
  {
    v51 = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v7);
    v3 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v51, 0x2A7u);
      return (unsigned int)v3;
    }
  }
  v8 = *((_QWORD *)this + 18);
  if ( v8 )
  {
    v9 = (RECT *)*((_QWORD *)this + 9);
    v10 = *((_DWORD *)this + 4);
    v11 = *((_DWORD *)this + 5);
    v12 = (float)*((int *)this + 6);
    v13 = (float)*((int *)this + 7);
    v62 = 0LL;
    if ( v9 )
      v62 = v9[4];
    v14 = (float)*(int *)(v8 + 24);
    v15 = (float)*(int *)(v8 + 28);
    if ( v14 > 0.0 && v15 > 0.0 )
    {
      v16 = v12 - (float)(v62.left + v62.top);
      v17 = v13 - (float)(v62.right + v62.bottom);
      v18 = (float)v11 + (float)v62.right;
      if ( v16 <= 0.0 )
        v16 = 0.0;
      if ( v17 <= 0.0 )
        v17 = 0.0;
      v19 = v16 / v14;
      if ( (float)(v17 / v15) <= (float)(v16 / v14) )
        v19 = v17 / v15;
      v20 = FLOAT_1_0;
      if ( v19 <= 1.0 )
        v20 = v19;
      v21 = v20 * v14;
      v22 = v20 * v15;
      v23 = floor_0((float)((float)(v16 - v21) * 0.5) + 0.5);
      v24 = *((_DWORD *)this + 38);
      v25 = (float)(int)v23 + (float)((float)v10 + (float)v62.left);
      if ( v24 )
      {
        if ( v24 == 2 )
        {
          v27 = (float)(v17 + v18) - (float)((float)*((int *)this + 39) + v22);
          goto LABEL_23;
        }
        v26 = _mm_cvtsi32_si128((int)floor_0((float)((float)(v17 - v22) * 0.5) + 0.5));
      }
      else
      {
        v26 = _mm_cvtsi32_si128(*((_DWORD *)this + 39));
      }
      v27 = _mm_cvtepi32_ps(v26).m128_f32[0] + v18;
LABEL_23:
      v28 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 80));
      v29 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 84));
      v3 = 0;
      v30 = *((_DWORD *)this + 12) == 0x80000000;
      v31 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 88));
      v32 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 92));
      v33 = *((_BYTE *)this + 160);
      *(_QWORD *)&v62.left = __PAIR64__(LODWORD(v27), LODWORD(v25));
      *(float *)&v62.right = v21 + v25;
      left = _mm_cvtepi32_ps(v28).m128_u32[0];
      top = _mm_cvtepi32_ps(v29).m128_u32[0];
      right = _mm_cvtepi32_ps(v31).m128_u32[0];
      bottom = _mm_cvtepi32_ps(v32).m128_u32[0];
      *(float *)&v62.bottom = v27 + v22;
      *(_QWORD *)&v60.left = __PAIR64__(top, left);
      v61 = v62;
      *(_QWORD *)&v60.right = __PAIR64__(bottom, right);
      if ( v30
        && *((_DWORD *)this + 13) == 0x80000000
        && *((_DWORD *)this + 14) == 0x7FFFFFFF
        && *((_DWORD *)this + 15) == 0x7FFFFFFF )
      {
        v38 = 0;
        if ( !a2[12] )
          goto LABEL_28;
      }
      else
      {
        v38 = 1;
      }
      rc = (struct tagRECT)*((_OWORD *)this + 3);
      OffsetRect(&rc, v10, v11);
      v50 = (struct tagRECT *)a2[12];
      if ( v50 )
      {
        if ( v38 )
          IntersectRect(&rc, &rc, a2[12]);
        else
          rc = *v50;
      }
      ClipRectAndSimilarRect(&rc.left, (float *)&v61.left, (float *)&v60.left);
      bottom = v60.bottom;
      right = v60.right;
      top = v60.top;
      left = v60.left;
LABEL_28:
      if ( (float)(*(float *)&v61.right - *(float *)&v61.left) <= 0.0
        || (float)(*(float *)&v61.bottom - *(float *)&v61.top) <= 0.0 )
      {
        goto LABEL_41;
      }
      v39 = *((unsigned int *)a2 + 6);
      v40 = v39 + 1;
      if ( !v33 )
      {
        if ( v40 < (unsigned int)v39 )
        {
          v54 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          v3 = -2147024362;
          goto LABEL_67;
        }
        if ( v40 <= *((_DWORD *)a2 + 5) )
        {
          v41 = v60;
          v42 = (RECT *)&(*a2)[v39];
LABEL_34:
          *v42 = v41;
          *((_DWORD *)a2 + 6) = v40;
          goto LABEL_35;
        }
        v55 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v60);
        v54 = v55;
        if ( v55 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v55, 0xC0u);
        v3 = v54;
        if ( v54 < 0 )
        {
LABEL_67:
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v54, 0x45Cu);
          goto LABEL_41;
        }
LABEL_35:
        v43 = *((unsigned int *)a2 + 14);
        v44 = a2 + 4;
        v45 = v43 + 1;
        if ( (int)v43 + 1 < (unsigned int)v43 )
        {
          v56 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          v3 = -2147024362;
        }
        else
        {
          if ( v45 <= *((_DWORD *)a2 + 13) )
          {
            *(RECT *)(*v44 + 16 * v43) = v61;
            *((_DWORD *)a2 + 14) = v45;
LABEL_38:
            v46 = *((_DWORD *)a2 + 22);
            v47 = (LONG *)((char *)this + 68);
            v48 = v46 + 1;
            if ( v46 + 1 < v46 )
            {
              v58 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
              v3 = -2147024362;
            }
            else
            {
              v3 = 0;
              if ( v48 <= *((_DWORD *)a2 + 21) )
              {
                *(&a2[8]->left + v46) = *v47;
                *((_DWORD *)a2 + 22) = v48;
                goto LABEL_41;
              }
              v59 = DynArrayImpl<0>::AddMultipleAndSet(a2 + 8, 4LL, 1LL, v47);
              v58 = v59;
              if ( v59 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v59, 0xC0u);
              v3 = v58;
              if ( v58 >= 0 )
                goto LABEL_41;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v58, 0x460u);
LABEL_41:
            if ( v3 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x2EBu);
            return (unsigned int)v3;
          }
          v57 = DynArrayImpl<0>::AddMultipleAndSet(v44, 16LL, 1LL, &v61);
          v56 = v57;
          if ( v57 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v57, 0xC0u);
          v3 = v56;
          if ( v56 >= 0 )
            goto LABEL_38;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v56, 0x45Fu);
        goto LABEL_41;
      }
      *(_QWORD *)&v62.left = __PAIR64__(top, right);
      *(_QWORD *)&v62.right = __PAIR64__(bottom, left);
      if ( v40 >= (unsigned int)v39 )
      {
        if ( v40 <= *((_DWORD *)a2 + 5) )
        {
          v41 = v62;
          v42 = (RECT *)&(*a2)[v39];
          goto LABEL_34;
        }
        v53 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v62);
        v52 = v53;
        if ( v53 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v53, 0xC0u);
        v3 = v52;
        if ( v52 >= 0 )
          goto LABEL_35;
      }
      else
      {
        v52 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        v3 = -2147024362;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v52, 0x458u);
      goto LABEL_41;
    }
  }
  return (unsigned int)v3;
}
