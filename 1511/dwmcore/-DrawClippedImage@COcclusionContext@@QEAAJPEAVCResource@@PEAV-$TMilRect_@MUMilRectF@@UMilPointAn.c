/*
 * XREFs of ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000A884
 * Callers:
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEAVCShape@@_N@Z @ 0x180061690 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800617E0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?GetRectangles@CRegionShape@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18001D5CC (-GetRectangles@CRegionShape@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18004E114 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180055888 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x180055AB8 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::DrawClippedImage(
        __int64 a1,
        __int64 a2,
        float *a3,
        CRegionShape *a4,
        unsigned int a5)
{
  unsigned int v8; // r14d
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v9; // rsi
  int DoesImageOcclude; // eax
  unsigned int RectCount; // eax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v14; // rax
  unsigned int v15; // edi
  __int64 v16; // r15
  int *v17; // rbx
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  __m128i v24; // xmm0
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  unsigned int v29; // [rsp+20h] [rbp-38h]
  char v30[8]; // [rsp+30h] [rbp-28h] BYREF
  __m128i v31; // [rsp+38h] [rbp-20h] BYREF

  v31.m128i_i64[0] = a1;
  v8 = 0;
  v9 = 0LL;
  v30[0] = 0;
  if ( *(_DWORD *)(a1 + 656) )
    goto LABEL_26;
  DoesImageOcclude = COcclusionContext::DoesImageOcclude(a1, a2, a5, v30);
  v8 = DoesImageOcclude;
  if ( DoesImageOcclude < 0 )
  {
    v29 = 1362;
    goto LABEL_45;
  }
  if ( !v30[0] )
    goto LABEL_26;
  if ( !(*(unsigned int (__fastcall **)(CRegionShape *))(*(_QWORD *)a4 + 8LL))(a4) )
  {
    v24 = _mm_loadu_si128((const __m128i *)((char *)a4 + 8));
    v25 = *a3;
    v31 = v24;
    v31.m128i_i32[0] = v24.m128i_i32[0];
    if ( v25 > *(float *)v24.m128i_i32 )
    {
      *(float *)v24.m128i_i32 = v25;
      *(float *)v31.m128i_i32 = v25;
    }
    v26 = *(float *)&v31.m128i_i32[1];
    if ( a3[1] > *(float *)&v31.m128i_i32[1] )
    {
      v26 = a3[1];
      *(float *)&v31.m128i_i32[1] = v26;
    }
    v27 = *(float *)&v31.m128i_i32[2];
    if ( *(float *)&v31.m128i_i32[2] > a3[2] )
    {
      v27 = a3[2];
      *(float *)&v31.m128i_i32[2] = v27;
    }
    v28 = *(float *)&v31.m128i_i32[3];
    if ( *(float *)&v31.m128i_i32[3] > a3[3] )
    {
      v28 = a3[3];
      *(float *)&v31.m128i_i32[3] = v28;
    }
    if ( v27 <= *(float *)v24.m128i_i32 || v28 <= v26 )
      v31 = 0uLL;
    DoesImageOcclude = COcclusionContext::CollectRectangleForOcclusion(a1, &v31, 0LL, 0LL);
    v8 = DoesImageOcclude;
    if ( DoesImageOcclude >= 0 )
      goto LABEL_26;
    v29 = 1381;
LABEL_45:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DoesImageOcclude, v29);
    goto LABEL_26;
  }
  if ( (*(unsigned int (__fastcall **)(CRegionShape *))(*(_QWORD *)a4 + 8LL))(a4) == 2 )
  {
    RectCount = CRegionShape::GetRectCount(a4);
    v12 = RectCount;
    if ( RectCount )
    {
      v13 = 16LL * RectCount;
      if ( !is_mul_ok(RectCount, 0x10uLL) )
        v13 = -1LL;
      v14 = (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                          WPF::g_pProcessHeap,
                                                          v13);
      v9 = v14;
      if ( v14 )
        `vector constructor iterator'(
          v14,
          0x10uLL,
          v12,
          TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
      else
        v9 = 0LL;
      if ( v9 )
      {
        CRegionShape::GetRectangles(a4, v9, v12);
        v15 = 0;
        if ( v12 )
        {
          v16 = v31.m128i_i64[0];
          v17 = (int *)((char *)v9 + 8);
          while ( 1 )
          {
            v18 = *a3;
            v19 = (float)*(v17 - 2);
            v20 = (float)*(v17 - 1);
            v21 = (float)*v17;
            v22 = (float)v17[1];
            *(float *)v31.m128i_i32 = v19;
            *(__int64 *)((char *)v31.m128i_i64 + 4) = __PAIR64__(LODWORD(v21), LODWORD(v20));
            *(float *)&v31.m128i_i32[3] = v22;
            if ( v18 > v19 )
            {
              v19 = v18;
              *(float *)v31.m128i_i32 = v18;
            }
            if ( a3[1] > v20 )
            {
              v20 = a3[1];
              *(float *)&v31.m128i_i32[1] = v20;
            }
            if ( v21 > a3[2] )
            {
              v21 = a3[2];
              *(float *)&v31.m128i_i32[2] = v21;
            }
            if ( v22 > a3[3] )
            {
              v22 = a3[3];
              *(float *)&v31.m128i_i32[3] = v22;
            }
            if ( v21 <= v19 || v22 <= v20 )
              v31 = 0uLL;
            DoesImageOcclude = COcclusionContext::CollectRectangleForOcclusion(v16, &v31, 0LL, 0LL);
            v8 = DoesImageOcclude;
            if ( DoesImageOcclude < 0 )
              break;
            ++v15;
            v17 += 4;
            if ( v15 >= v12 )
              goto LABEL_26;
          }
          v29 = 1403;
          goto LABEL_45;
        }
      }
      else
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56Eu);
      }
    }
  }
LABEL_26:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmapOfDeviceBitmaps::DeviceBitmapInfo *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 32LL))(
    WPF::g_pProcessHeap,
    v9);
  return v8;
}
