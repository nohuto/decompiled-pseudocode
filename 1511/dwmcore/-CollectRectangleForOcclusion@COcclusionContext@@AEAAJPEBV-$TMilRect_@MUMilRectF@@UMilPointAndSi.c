/*
 * XREFs of ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180055888
 * Callers:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000A884 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180055C9C (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180056230 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x1800563C0 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180054E4C (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Top@CBaseClipStack@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A25A4 (-Top@CBaseClipStack@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::CollectRectangleForOcclusion(__int64 a1, float *a2)
{
  unsigned int v2; // esi
  const __m128i *v3; // rdx
  __int64 v4; // r11
  __m128 v5; // xmm6
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  __int64 v9; // r11
  __m128 *v10; // r9
  char v11; // r10
  __int64 v12; // r11
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  __m128 v17; // xmm6
  __int64 v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rdx
  float *v23; // rax
  __int64 v24; // rcx
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  int v30; // ebx
  int v31; // eax
  __m128 v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h]
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  float v35; // [rsp+60h] [rbp-A8h]
  float v36; // [rsp+64h] [rbp-A4h]
  _BYTE v37[48]; // [rsp+68h] [rbp-A0h] BYREF
  float v38; // [rsp+98h] [rbp-70h]
  float v39; // [rsp+9Ch] [rbp-6Ch]
  __int64 v40; // [rsp+A8h] [rbp-60h] BYREF
  char v41; // [rsp+B4h] [rbp-54h] BYREF

  v2 = 0;
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v5 = (__m128)_mm_loadu_si128(v3);
    LODWORD(v33) = 0;
    v32 = v5;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(v4 + 16), (struct CBaseMatrix *)v37);
    LODWORD(v34) = v5.m128_i32[0];
    LODWORD(v6) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
    LODWORD(v7) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
    LODWORD(v8) = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
    *((float *)&v34 + 1) = v6;
    v35 = v7;
    v36 = v8;
    if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v37) )
    {
      v32.m128_f32[0] = v5.m128_f32[0] + v38;
      v32.m128_f32[1] = v6 + v39;
      v32.m128_f32[2] = v7 + v38;
      v32.m128_f32[3] = v8 + v39;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)v37,
        (const struct MilRectF *)&v34,
        (struct MilPoint2F *const)&v40);
      v23 = (float *)&v41;
      v24 = 3LL;
      v25 = *((float *)&v40 + 1);
      LODWORD(v26) = v40;
      v34 = v40;
      v27 = *((float *)&v40 + 1);
      LODWORD(v28) = v40;
      do
      {
        v29 = *(v23 - 1);
        if ( v28 > v29 )
          v28 = *(v23 - 1);
        if ( v27 > *v23 )
          v27 = *v23;
        if ( v29 > v26 )
          v26 = *(v23 - 1);
        if ( *v23 > v25 )
          v25 = *v23;
        v23 += 2;
        --v24;
      }
      while ( v24 );
      v32.m128_u64[0] = __PAIR64__(LODWORD(v27), LODWORD(v28));
      v32.m128_u64[1] = __PAIR64__(LODWORD(v25), LODWORD(v26));
    }
    CBaseClipStack::Top(v9 + 56, &v34);
    v13 = v32.m128_f32[0];
    if ( *(float *)&v34 > v32.m128_f32[0] )
    {
      v13 = *(float *)&v34;
      v32.m128_i32[0] = v34;
    }
    v14 = v32.m128_f32[1];
    if ( *((float *)&v34 + 1) > v32.m128_f32[1] )
    {
      v14 = *((float *)&v34 + 1);
      v32.m128_i32[1] = HIDWORD(v34);
    }
    v15 = v32.m128_f32[2];
    if ( v32.m128_f32[2] > v35 )
    {
      v15 = v35;
      v32.m128_f32[2] = v35;
    }
    v16 = v32.m128_f32[3];
    if ( v32.m128_f32[3] > v36 )
    {
      v16 = v36;
      v32.m128_f32[3] = v36;
    }
    if ( v15 <= v13 || v16 <= v14 )
      v32 = 0uLL;
    v17 = v32;
    if ( v10 )
      *v10 = v32;
    if ( v11 || COcclusionContext::CheckOcclusionRelevance(v12, v32.m128_f32) )
    {
      v18 = *(unsigned int *)(v12 + 128);
      v19 = v18 + 1;
      if ( (int)v18 + 1 < (unsigned int)v18 )
      {
        v30 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v2 = -2147024362;
        goto LABEL_38;
      }
      if ( v19 <= *(_DWORD *)(v12 + 124) )
      {
        v20 = *(_QWORD *)(v12 + 104);
        v21 = 5 * v18;
        *(__m128 *)(v20 + 4 * v21) = v17;
        *(_DWORD *)(v20 + 4 * v21 + 16) = v33;
        *(_DWORD *)(v12 + 128) = v19;
        return v2;
      }
      v31 = DynArrayImpl<0>::AddMultipleAndSet(v12 + 104, 20LL, 1LL, &v32);
      v30 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xC0u);
      v2 = v30;
      if ( v30 < 0 )
LABEL_38:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x70Au);
    }
  }
  return v2;
}
