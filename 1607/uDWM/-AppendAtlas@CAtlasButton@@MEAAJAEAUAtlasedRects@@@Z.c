/*
 * XREFs of ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x180018B10
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002B7A0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x180008B98 (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002AF60 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18005056A (floor_0.c)
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
  float v18; // xmm8_4
  float v19; // xmm11_4
  float v20; // xmm9_4
  float v21; // xmm11_4
  double v22; // xmm0_8
  int v23; // eax
  float v24; // xmm12_4
  __m128i v25; // xmm6
  float v26; // xmm6_4
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  bool v29; // zf
  __m128i v30; // xmm3
  __m128i v31; // xmm4
  char v32; // r14
  unsigned __int32 left; // xmm1_4
  unsigned __int32 top; // xmm2_4
  unsigned __int32 right; // xmm3_4
  unsigned __int32 bottom; // xmm4_4
  char v37; // r15
  __int64 v38; // rax
  unsigned int v39; // ecx
  RECT v40; // xmm0
  RECT *v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rcx
  unsigned int v44; // edx
  unsigned int v45; // eax
  LONG *v46; // r9
  unsigned int v47; // r8d
  struct tagRECT *v49; // rax
  int v50; // eax
  int v51; // r14d
  int v52; // eax
  int v53; // r14d
  int v54; // eax
  int v55; // r14d
  int v56; // eax
  int v57; // r14d
  int v58; // eax
  RECT v59; // [rsp+30h] [rbp-D0h] BYREF
  RECT v60; // [rsp+40h] [rbp-C0h] BYREF
  RECT v61; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (struct CBitmapSource *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    appended = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v2);
    v3 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x331u);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x230u);
    return (unsigned int)v3;
  }
  v7 = (struct CBitmapSource *)*((_QWORD *)this + 17);
  if ( v7 )
  {
    v50 = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v7);
    v3 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x234u);
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
    v61 = 0LL;
    if ( v9 )
      v61 = v9[4];
    v14 = (float)*(int *)(v8 + 24);
    v15 = (float)*(int *)(v8 + 28);
    if ( v14 > 0.0 && v15 > 0.0 )
    {
      v16 = v12 - (float)(v61.left + v61.top);
      v17 = v13 - (float)(v61.right + v61.bottom);
      v18 = (float)v11 + (float)v61.right;
      if ( v16 <= 0.0 )
        v16 = 0.0;
      if ( v17 <= 0.0 )
        v17 = 0.0;
      v19 = fminf(1.0, fminf(v16 / v14, v17 / v15));
      v20 = v19 * v15;
      v21 = v19 * v14;
      v22 = floor_0((float)((float)(v16 - v21) * 0.5) + 0.5);
      v23 = *((_DWORD *)this + 38);
      v24 = (float)(int)v22 + (float)((float)v10 + (float)v61.left);
      if ( v23 )
      {
        if ( v23 == 2 )
        {
          v26 = (float)(v17 + v18) - (float)((float)*((int *)this + 39) + v20);
          goto LABEL_19;
        }
        v25 = _mm_cvtsi32_si128((int)floor_0((float)((float)(v17 - v20) * 0.5) + 0.5));
      }
      else
      {
        v25 = _mm_cvtsi32_si128(*((_DWORD *)this + 39));
      }
      v26 = _mm_cvtepi32_ps(v25).m128_f32[0] + v18;
LABEL_19:
      v27 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 80));
      v28 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 84));
      v3 = 0;
      v29 = *((_DWORD *)this + 12) == 0x80000000;
      v30 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 88));
      v31 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 92));
      v32 = *((_BYTE *)this + 160);
      *(_QWORD *)&v61.left = __PAIR64__(LODWORD(v26), LODWORD(v24));
      *(float *)&v61.right = v21 + v24;
      left = _mm_cvtepi32_ps(v27).m128_u32[0];
      top = _mm_cvtepi32_ps(v28).m128_u32[0];
      right = _mm_cvtepi32_ps(v30).m128_u32[0];
      bottom = _mm_cvtepi32_ps(v31).m128_u32[0];
      *(float *)&v61.bottom = v26 + v20;
      *(_QWORD *)&v59.left = __PAIR64__(top, left);
      v60 = v61;
      *(_QWORD *)&v59.right = __PAIR64__(bottom, right);
      if ( v29
        && *((_DWORD *)this + 13) == 0x80000000
        && *((_DWORD *)this + 14) == 0x7FFFFFFF
        && *((_DWORD *)this + 15) == 0x7FFFFFFF )
      {
        v37 = 0;
        if ( !a2[12] )
          goto LABEL_24;
      }
      else
      {
        v37 = 1;
      }
      rc = (struct tagRECT)*((_OWORD *)this + 3);
      OffsetRect(&rc, v10, v11);
      v49 = (struct tagRECT *)a2[12];
      if ( v49 )
      {
        if ( v37 )
          IntersectRect(&rc, &rc, a2[12]);
        else
          rc = *v49;
      }
      ClipRectAndSimilarRect(&rc.left, (float *)&v60.left, (float *)&v59.left);
      bottom = v59.bottom;
      right = v59.right;
      top = v59.top;
      left = v59.left;
LABEL_24:
      if ( (float)(*(float *)&v60.right - *(float *)&v60.left) <= 0.0
        || (float)(*(float *)&v60.bottom - *(float *)&v60.top) <= 0.0 )
      {
        goto LABEL_37;
      }
      v38 = *((unsigned int *)a2 + 6);
      v39 = v38 + 1;
      if ( !v32 )
      {
        if ( v39 < (unsigned int)v38 )
        {
          v53 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v3 = -2147024362;
          goto LABEL_63;
        }
        if ( v39 <= *((_DWORD *)a2 + 5) )
        {
          v40 = v59;
          v41 = (RECT *)&(*a2)[v38];
LABEL_30:
          *v41 = v40;
          *((_DWORD *)a2 + 6) = v39;
          goto LABEL_31;
        }
        v54 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v59);
        v53 = v54;
        if ( v54 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0xC0u);
        v3 = v53;
        if ( v53 < 0 )
        {
LABEL_63:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x43Du);
          goto LABEL_37;
        }
LABEL_31:
        v42 = *((unsigned int *)a2 + 14);
        v43 = a2 + 4;
        v44 = v42 + 1;
        if ( (int)v42 + 1 < (unsigned int)v42 )
        {
          v55 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v3 = -2147024362;
        }
        else
        {
          if ( v44 <= *((_DWORD *)a2 + 13) )
          {
            *(RECT *)(*v43 + 16 * v42) = v60;
            *((_DWORD *)a2 + 14) = v44;
LABEL_34:
            v45 = *((_DWORD *)a2 + 22);
            v46 = (LONG *)((char *)this + 68);
            v47 = v45 + 1;
            if ( v45 + 1 < v45 )
            {
              v57 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
            }
            else
            {
              v3 = 0;
              if ( v47 <= *((_DWORD *)a2 + 21) )
              {
                *(&a2[8]->left + v45) = *v46;
                *((_DWORD *)a2 + 22) = v47;
                goto LABEL_37;
              }
              v58 = DynArrayImpl<0>::AddMultipleAndSet(a2 + 8, 4LL, 1LL, v46);
              v57 = v58;
              if ( v58 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0xC0u);
              v3 = v57;
              if ( v57 >= 0 )
                goto LABEL_37;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x441u);
LABEL_37:
            if ( v3 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x278u);
            return (unsigned int)v3;
          }
          v56 = DynArrayImpl<0>::AddMultipleAndSet(v43, 16LL, 1LL, &v60);
          v55 = v56;
          if ( v56 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0xC0u);
          v3 = v55;
          if ( v55 >= 0 )
            goto LABEL_34;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x440u);
        goto LABEL_37;
      }
      *(_QWORD *)&v61.left = __PAIR64__(top, right);
      *(_QWORD *)&v61.right = __PAIR64__(bottom, left);
      if ( v39 >= (unsigned int)v38 )
      {
        if ( v39 <= *((_DWORD *)a2 + 5) )
        {
          v40 = v61;
          v41 = (RECT *)&(*a2)[v38];
          goto LABEL_30;
        }
        v52 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v61);
        v51 = v52;
        if ( v52 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0xC0u);
        v3 = v51;
        if ( v51 >= 0 )
          goto LABEL_31;
      }
      else
      {
        v51 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v3 = -2147024362;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x439u);
      goto LABEL_37;
    }
  }
  return (unsigned int)v3;
}
