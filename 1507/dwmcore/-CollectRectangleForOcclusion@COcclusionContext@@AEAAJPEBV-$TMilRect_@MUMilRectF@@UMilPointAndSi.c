/*
 * XREFs of ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18001FA04
 * Callers:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180004418 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001FE18 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180020410 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x180020570 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F0F8 (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Top@CBaseClipStack@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058EE0 (-Top@CBaseClipStack@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::CollectRectangleForOcclusion(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // esi
  const __m128i *v5; // rdx
  __int64 v6; // r11
  __m128 v7; // xmm6
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  __int64 v11; // r11
  __m128 *v12; // r10
  __int64 v13; // r11
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  __m128 v18; // xmm6
  __int64 v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  float *v24; // rax
  __int64 v25; // rcx
  float v26; // xmm2_4
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm3_4
  float v30; // xmm0_4
  int v31; // ebx
  int v32; // eax
  __m128 v33; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  float v36; // [rsp+60h] [rbp-A8h]
  float v37; // [rsp+64h] [rbp-A4h]
  _BYTE v38[48]; // [rsp+68h] [rbp-A0h] BYREF
  float v39; // [rsp+98h] [rbp-70h]
  float v40; // [rsp+9Ch] [rbp-6Ch]
  __int64 v41; // [rsp+A8h] [rbp-60h] BYREF
  char v42; // [rsp+B4h] [rbp-54h] BYREF

  v4 = 0;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v7 = (__m128)_mm_loadu_si128(v5);
    LODWORD(v34) = 0;
    v33 = v7;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(v6 + 16), (struct CBaseMatrix *)v38);
    LODWORD(v35) = v7.m128_i32[0];
    LODWORD(v8) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
    LODWORD(v9) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
    LODWORD(v10) = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
    *((float *)&v35 + 1) = v8;
    v36 = v9;
    v37 = v10;
    if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v38) )
    {
      v33.m128_f32[0] = v7.m128_f32[0] + v39;
      v33.m128_f32[1] = v8 + v40;
      v33.m128_f32[2] = v9 + v39;
      v33.m128_f32[3] = v10 + v40;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)v38,
        (const struct MilRectF *)&v35,
        (struct MilPoint2F *const)&v41);
      v24 = (float *)&v42;
      v25 = 3LL;
      v26 = *((float *)&v41 + 1);
      LODWORD(v27) = v41;
      v35 = v41;
      v28 = *((float *)&v41 + 1);
      LODWORD(v29) = v41;
      do
      {
        v30 = *(v24 - 1);
        if ( v29 > v30 )
          v29 = *(v24 - 1);
        if ( v28 > *v24 )
          v28 = *v24;
        if ( v30 > v27 )
          v27 = *(v24 - 1);
        if ( *v24 > v26 )
          v26 = *v24;
        v24 += 2;
        --v25;
      }
      while ( v25 );
      v33.m128_u64[0] = __PAIR64__(LODWORD(v28), LODWORD(v29));
      v33.m128_u64[1] = __PAIR64__(LODWORD(v26), LODWORD(v27));
    }
    CBaseClipStack::Top(v11 + 56, &v35);
    v14 = v33.m128_f32[0];
    if ( *(float *)&v35 > v33.m128_f32[0] )
    {
      v14 = *(float *)&v35;
      v33.m128_i32[0] = v35;
    }
    v15 = v33.m128_f32[1];
    if ( *((float *)&v35 + 1) > v33.m128_f32[1] )
    {
      v15 = *((float *)&v35 + 1);
      v33.m128_i32[1] = HIDWORD(v35);
    }
    v16 = v33.m128_f32[2];
    if ( v33.m128_f32[2] > v36 )
    {
      v16 = v36;
      v33.m128_f32[2] = v36;
    }
    v17 = v33.m128_f32[3];
    if ( v33.m128_f32[3] > v37 )
    {
      v17 = v37;
      v33.m128_f32[3] = v37;
    }
    if ( v16 <= v14 || v17 <= v15 )
      v33 = 0uLL;
    v18 = v33;
    if ( v12 )
      *v12 = v33;
    if ( a3 || COcclusionContext::CheckOcclusionRelevance(v13, v33.m128_f32) )
    {
      v19 = *(unsigned int *)(v13 + 128);
      v20 = v19 + 1;
      if ( (int)v19 + 1 < (unsigned int)v19 )
      {
        v31 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v4 = -2147024362;
        goto LABEL_38;
      }
      if ( v20 <= *(_DWORD *)(v13 + 124) )
      {
        v21 = *(_QWORD *)(v13 + 104);
        v22 = 5 * v19;
        *(__m128 *)(v21 + 4 * v22) = v18;
        *(_DWORD *)(v21 + 4 * v22 + 16) = v34;
        *(_DWORD *)(v13 + 128) = v20;
        return v4;
      }
      v32 = DynArrayImpl<0>::AddMultipleAndSet(v13 + 104, 20LL, 1LL, &v33);
      v31 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xC0u);
      v4 = v31;
      if ( v31 < 0 )
LABEL_38:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x6F6u);
    }
  }
  return v4;
}
