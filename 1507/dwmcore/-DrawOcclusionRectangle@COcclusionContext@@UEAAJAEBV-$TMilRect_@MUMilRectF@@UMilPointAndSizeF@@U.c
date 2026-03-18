/*
 * XREFs of ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18001FF90
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800085B0 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18006E3A0 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18010B130 (-AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F0F8 (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::DrawOcclusionRectangle(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __m128 *v3; // rdx
  __int64 v4; // r11
  __m128 v5; // xmm0
  __m128 v6; // xmm6
  float v7; // xmm9_4
  float v8; // xmm8_4
  float v9; // xmm7_4
  char v10; // r9
  __int64 v11; // r11
  float v12; // xmm6_4
  float v13; // xmm9_4
  float v14; // xmm8_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  __int64 v20; // rax
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v25; // eax
  float v26; // xmm1_4
  float v27; // xmm4_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  int v30; // edi
  int v31; // eax
  __m128 v32; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+48h] [rbp-B8h]
  __int128 v34; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v35[48]; // [rsp+60h] [rbp-A0h] BYREF
  float v36; // [rsp+90h] [rbp-70h]
  float v37; // [rsp+94h] [rbp-6Ch]
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  float v39; // [rsp+A8h] [rbp-58h]
  float v40; // [rsp+ACh] [rbp-54h]
  float v41; // [rsp+B0h] [rbp-50h]
  float v42; // [rsp+B4h] [rbp-4Ch]
  float v43; // [rsp+B8h] [rbp-48h]
  float v44; // [rsp+BCh] [rbp-44h]

  v2 = 0;
  if ( *(_DWORD *)(a1 + 648) )
    return (unsigned int)v2;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v5 = *v3;
    v33 = 0;
    v6 = v5;
    v32 = v5;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(v4 + 16), (struct CBaseMatrix *)v35);
    LODWORD(v34) = v5.m128_i32[0];
    LODWORD(v7) = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
    LODWORD(v8) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
    LODWORD(v9) = _mm_shuffle_ps(v6, v6, 255).m128_u32[0];
    *(_QWORD *)((char *)&v34 + 4) = __PAIR64__(LODWORD(v8), LODWORD(v7));
    *((float *)&v34 + 3) = v9;
    if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v35) )
    {
      v12 = v5.m128_f32[0] + v36;
      v13 = v7 + v37;
      v14 = v8 + v36;
      v15 = v9 + v37;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)v35,
        (const struct MilRectF *)&v34,
        (struct MilPoint2F *const)&v38);
      v26 = v39;
      *(_QWORD *)&v34 = v38;
      if ( *(float *)&v38 > v39 )
        v27 = v39;
      else
        v27 = *(float *)&v38;
      v28 = *((float *)&v38 + 1);
      if ( *((float *)&v38 + 1) > v40 )
        v28 = v40;
      if ( v39 <= *(float *)&v38 )
        v26 = *(float *)&v34;
      v29 = *((float *)&v34 + 1);
      if ( v40 > *((float *)&v34 + 1) )
        v29 = v40;
      if ( v27 > v41 )
        v27 = v41;
      if ( v28 > v42 )
        v28 = v42;
      if ( v41 > v26 )
        v26 = v41;
      if ( v42 > v29 )
        v29 = v42;
      if ( v27 > v43 )
        v27 = v43;
      if ( v28 > v44 )
        v28 = v44;
      if ( v43 > v26 )
        v26 = v43;
      if ( v44 > v29 )
        v29 = v44;
      v12 = v27;
      v13 = v28;
      v14 = v26;
      v15 = v29;
    }
    v32.m128_u64[1] = __PAIR64__(LODWORD(v15), LODWORD(v14));
    v32.m128_u64[0] = __PAIR64__(LODWORD(v13), LODWORD(v12));
    if ( *(_DWORD *)(v11 + 64) )
    {
      v25 = *(_DWORD *)(v11 + 64);
      if ( v25 )
        v34 = *(_OWORD *)(*(_QWORD *)(v11 + 80) + 16LL * (unsigned int)(v25 - 1));
      v16 = *(float *)&v34;
      v17 = *((float *)&v34 + 1);
      v18 = *((float *)&v34 + 2);
      v19 = *((float *)&v34 + 3);
    }
    else
    {
      v16 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v17 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v18 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v19 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    }
    if ( v16 > v12 )
    {
      v12 = v16;
      v32.m128_f32[0] = v16;
    }
    if ( v17 > v13 )
    {
      v13 = v17;
      v32.m128_f32[1] = v17;
    }
    if ( v14 > v18 )
    {
      v14 = v18;
      v32.m128_f32[2] = v18;
    }
    if ( v15 > v19 )
    {
      v15 = v19;
      v32.m128_f32[3] = v19;
    }
    if ( v14 <= v12 || v15 <= v13 )
      v32 = 0uLL;
    if ( v10 || COcclusionContext::CheckOcclusionRelevance(v11, v32.m128_f32) )
    {
      v20 = *(unsigned int *)(v11 + 128);
      v21 = v20 + 1;
      if ( (int)v20 + 1 < (unsigned int)v20 )
      {
        v30 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v2 = -2147024362;
      }
      else
      {
        if ( v21 <= *(_DWORD *)(v11 + 124) )
        {
          v22 = *(_QWORD *)(v11 + 104);
          v23 = 5 * v20;
          *(__m128 *)(v22 + 4 * v23) = v32;
          *(_DWORD *)(v22 + 4 * v23 + 16) = v33;
          *(_DWORD *)(v11 + 128) = v21;
          goto LABEL_22;
        }
        v31 = DynArrayImpl<0>::AddMultipleAndSet(v11 + 104, 20LL, 1LL, &v32);
        v30 = v31;
        if ( v31 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xC0u);
        v2 = v30;
        if ( v30 >= 0 )
          goto LABEL_22;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x6F6u);
    }
  }
LABEL_22:
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x498u);
  return (unsigned int)v2;
}
