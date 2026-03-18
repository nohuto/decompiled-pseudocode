/*
 * XREFs of ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180020048
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180058DFC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@UEBA?AW4SizePreference@@XZ @ 0x180093C80 (-GetSizePreference@CCompositionSurfaceBitmap@@UEBA-AW4SizePreference@@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ApplyTextureToLocalTransform(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v6)(__int64, _OWORD *, _DWORD *); // rax
  __int128 v7; // xmm1
  int v8; // eax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // eax
  float v15; // xmm4_4
  int v16; // eax
  signed int v17; // ecx
  int v18; // eax
  __m128i v19; // xmm2
  _OWORD v20[4]; // [rsp+20h] [rbp-89h] BYREF
  int v21; // [rsp+60h] [rbp-49h]
  _OWORD v22[4]; // [rsp+70h] [rbp-39h] BYREF
  int v23; // [rsp+B0h] [rbp+7h]
  float v24; // [rsp+C0h] [rbp+17h] BYREF
  float v25; // [rsp+C4h] [rbp+1Bh]
  float v26; // [rsp+C8h] [rbp+1Fh]
  float v27; // [rsp+CCh] [rbp+23h]
  _DWORD v28[4]; // [rsp+D0h] [rbp+27h] BYREF

  v6 = *(void (__fastcall **)(__int64, _OWORD *, _DWORD *))(*(_QWORD *)a2 + 56LL);
  v21 = 0;
  v6(a2, v20, v28);
  CMILMatrix::Translate((CMILMatrix *)v20, COERCE_FLOAT(v28[0] ^ _xmm), COERCE_FLOAT(v28[1] ^ _xmm), 0.0);
  v7 = v20[1];
  v8 = v21;
  *(_OWORD *)a3 = v20[0];
  v9 = v20[2];
  *(_OWORD *)(a3 + 16) = v7;
  v10 = v20[3];
  *(_OWORD *)(a3 + 32) = v9;
  *(_OWORD *)(a3 + 48) = v10;
  *(_DWORD *)(a3 + 64) = v8;
  CMILMatrix::Transform2DBoundsHelper<0>(a3, v28, &v24);
  v11 = *(_QWORD *)(a1 + 960);
  if ( v11 )
    v12 = v11 + 120;
  else
    v12 = 0LL;
  if ( a2 == v12 )
  {
    CMILMatrix::Translate(
      (CMILMatrix *)a3,
      (float)(*(_DWORD *)(a1 + 696) - *(_DWORD *)(a1 + 712)),
      (float)(*(_DWORD *)(a1 + 700) - *(_DWORD *)(a1 + 716)),
      0.0);
    if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(*(_QWORD *)(a1 + 960) + 112LL) == 1 )
    {
      if ( *(_BYTE *)(a1 + 1034) )
        CMILMatrix::Translate(
          (CMILMatrix *)a3,
          (float)((float)(*(_DWORD *)(a1 + 704) - *(_DWORD *)(a1 + 712))
                - (float)(*(_DWORD *)(a1 + 696) - *(_DWORD *)(a1 + 712)))
        - (float)(v26 - v24),
          0.0,
          0.0);
    }
    else
    {
      v14 = *(_DWORD *)(a1 + 704) - *(_DWORD *)(a1 + 696);
      v15 = v26 - v24;
      if ( v14 < 0 )
        v14 = 0;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v14 - v15)) & _xmm) > 0.00390625 )
        goto LABEL_16;
      v16 = *(_DWORD *)(a1 + 708) - *(_DWORD *)(a1 + 700);
      if ( v16 < 0 )
        v16 = 0;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v16 - (float)(v27 - v25))) & _xmm) > 0.00390625 )
      {
LABEL_16:
        if ( v15 > 0.0 && (float)(v27 - v25) > 0.0 )
        {
          v17 = *(_DWORD *)(a1 + 708) - *(_DWORD *)(a1 + 700);
          v22[1] = xmmword_1801EAD20;
          if ( v17 < 0 )
            v17 = 0;
          v23 = dword_1801EAD50;
          v18 = *(_DWORD *)(a1 + 704) - *(_DWORD *)(a1 + 696);
          v22[3] = xmmword_1801EAD40;
          v19 = _mm_cvtsi32_si128(v17);
          if ( v18 < 0 )
            v18 = 0;
          v22[0] = CMILMatrix::Identity;
          v22[2] = xmmword_1801EAD30;
          CMILMatrix::Scale(
            (CMILMatrix *)v22,
            (float)v18 / v15,
            _mm_cvtepi32_ps(v19).m128_f32[0] / (float)(v27 - v25),
            1.0);
          CMILMatrix::Multiply((const struct CMILMatrix *)v22, (const struct CMILMatrix *)a3, (struct CMILMatrix *)a3);
        }
      }
    }
  }
  return 0LL;
}
