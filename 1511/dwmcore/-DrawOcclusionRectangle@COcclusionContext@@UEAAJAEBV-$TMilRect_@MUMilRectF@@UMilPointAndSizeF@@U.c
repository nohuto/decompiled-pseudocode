/*
 * XREFs of ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180055E30
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000C820 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180121360 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180126AD0 (-AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036E20 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180054E4C (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::DrawOcclusionRectangle(__int64 a1, float *a2)
{
  int v2; // edi
  const __m128i *v3; // rdx
  __int64 v4; // r11
  __m128 v5; // xmm6
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  __int64 v9; // r11
  float *v10; // rax
  __int64 v11; // rcx
  float v12; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  int v17; // eax
  __int64 v18; // r11
  char v19; // r9
  __int64 v20; // rax
  unsigned int v21; // r8d
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int128 v27; // [rsp+40h] [rbp-C8h] BYREF
  __m128 v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+60h] [rbp-A8h]
  _BYTE v30[48]; // [rsp+68h] [rbp-A0h] BYREF
  float v31; // [rsp+98h] [rbp-70h]
  float v32; // [rsp+9Ch] [rbp-6Ch]
  __int64 v33; // [rsp+A8h] [rbp-60h] BYREF
  char v34; // [rsp+B4h] [rbp-54h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(a1 + 648) )
    return (unsigned int)v2;
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v5 = (__m128)_mm_loadu_si128(v3);
    v29 = 0;
    v28 = v5;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(v4 + 16), (struct CBaseMatrix *)v30);
    LODWORD(v27) = v5.m128_i32[0];
    LODWORD(v6) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
    LODWORD(v7) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
    LODWORD(v8) = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
    *(_QWORD *)((char *)&v27 + 4) = __PAIR64__(LODWORD(v7), LODWORD(v6));
    *((float *)&v27 + 3) = v8;
    if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v30) )
    {
      v28.m128_f32[0] = v5.m128_f32[0] + v31;
      v28.m128_f32[1] = v6 + v32;
      v28.m128_f32[2] = v7 + v31;
      v28.m128_f32[3] = v8 + v32;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)v30,
        (const struct MilRectF *)&v27,
        (struct MilPoint2F *const)&v33);
      v10 = (float *)&v34;
      v11 = 3LL;
      v12 = *((float *)&v33 + 1);
      LODWORD(v13) = v33;
      *(_QWORD *)&v27 = v33;
      v14 = *((float *)&v33 + 1);
      LODWORD(v15) = v33;
      do
      {
        v16 = *(v10 - 1);
        if ( v15 > v16 )
          v15 = *(v10 - 1);
        if ( v14 > *v10 )
          v14 = *v10;
        if ( v16 > v13 )
          v13 = *(v10 - 1);
        if ( *v10 > v12 )
          v12 = *v10;
        v10 += 2;
        --v11;
      }
      while ( v11 );
      v28.m128_u64[0] = __PAIR64__(LODWORD(v14), LODWORD(v15));
      v28.m128_u64[1] = __PAIR64__(LODWORD(v12), LODWORD(v13));
    }
    if ( *(_DWORD *)(v9 + 64) )
    {
      v17 = *(_DWORD *)(v9 + 64);
      if ( v17 )
        v27 = *(_OWORD *)(*(_QWORD *)(v9 + 80) + 16LL * (unsigned int)(v17 - 1));
    }
    else
    {
      v27 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v28, (__int64)&v27);
    if ( v19 || COcclusionContext::CheckOcclusionRelevance(v18, v28.m128_f32) )
    {
      v20 = *(unsigned int *)(v18 + 128);
      v21 = v20 + 1;
      if ( (int)v20 + 1 >= (unsigned int)v20 )
      {
        if ( v21 <= *(_DWORD *)(v18 + 124) )
        {
          v23 = *(_QWORD *)(v18 + 104);
          v24 = 5 * v20;
          *(__m128 *)(v23 + 4 * v24) = v28;
          *(_DWORD *)(v23 + 4 * v24 + 16) = v29;
          *(_DWORD *)(v18 + 128) = v21;
          goto LABEL_30;
        }
        v25 = DynArrayImpl<0>::AddMultipleAndSet(v18 + 104, 20LL, 1LL, &v28);
        v22 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
        v2 = v22;
        if ( v22 >= 0 )
          goto LABEL_30;
      }
      else
      {
        v22 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v2 = -2147024362;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x70Au);
    }
  }
LABEL_30:
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x4ACu);
  return (unsigned int)v2;
}
