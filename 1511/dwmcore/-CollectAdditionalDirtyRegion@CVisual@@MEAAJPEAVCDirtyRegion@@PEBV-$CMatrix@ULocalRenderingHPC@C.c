/*
 * XREFs of ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800497D0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800632E0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036E98 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?AdjustWorldBounds@CVisual@@AEAAXPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180048584 (-AdjustWorldBounds@CVisual@@AEAAXPEAV-$CRectF@UPageInPixels@CoordinateSpace@@@@@Z.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180064780 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18007969C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079BB0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::CollectAdditionalDirtyRegion(
        __int64 a1,
        __int64 a2,
        CBaseMatrix *a3,
        __int64 a4,
        float *a5)
{
  int v5; // edi
  unsigned int v8; // r15d
  __int64 v9; // r13
  int v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float *v13; // rcx
  float v14; // xmm4_4
  float v15; // xmm5_4
  char v16; // dl
  __int64 *v17; // rax
  unsigned int v18; // r8d
  unsigned int i; // ecx
  float *v20; // rax
  __int64 v21; // rcx
  float v22; // xmm2_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  int v31; // eax
  unsigned int v33; // xmm1_4
  unsigned int v34; // xmm3_4
  float v35; // xmm2_4
  unsigned int v36; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v37[2]; // [rsp+40h] [rbp-69h] BYREF
  CBaseMatrix *v38; // [rsp+50h] [rbp-59h]
  __int128 v39; // [rsp+58h] [rbp-51h] BYREF
  _DWORD v40[4]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v41; // [rsp+78h] [rbp-31h] BYREF
  char v42; // [rsp+84h] [rbp-25h] BYREF

  v5 = 0;
  v38 = a3;
  if ( *(_DWORD *)(a1 + 296) )
  {
    CMergedRectBase<4>::GetRects(a1 + 224, &v36, v37);
    v8 = 0;
    if ( v36 )
    {
      v9 = v37[0];
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 16LL * v8 + 4);
        v11 = *(float *)(v9 + 16LL * v8 + 8);
        v12 = *(float *)(v9 + 16LL * v8 + 12);
        v40[0] = *(_DWORD *)(v9 + 16LL * v8);
        v40[1] = v10;
        *(float *)&v40[2] = v11;
        *(float *)&v40[3] = v12;
        if ( CBaseMatrix::IsExactlyPureTranslate(v38) )
        {
          v17 = (__int64 *)&v39;
          *(float *)&v33 = v13[13] + v15;
          v18 = 4;
          *(float *)&v34 = v13[12] + v11;
          v16 = 1;
          v35 = v13[13] + v12;
          *(float *)&v39 = v13[12] + v14;
          *(_QWORD *)((char *)&v39 + 4) = __PAIR64__(v34, v33);
          *((float *)&v39 + 3) = v35;
        }
        else
        {
          CBaseMatrix::Transform2DRectToPerspective(
            (CBaseMatrix *)v13,
            (const struct MilRectF *)v40,
            (struct MilPoint2F *const)&v41);
          v16 = 0;
          v17 = &v41;
          v18 = 8;
        }
        for ( i = 0; i < v18; ++i )
          v17 = (__int64 *)((char *)v17 + 4);
        if ( !v16 )
        {
          v20 = (float *)&v42;
          v37[1] = v41;
          v21 = 3LL;
          v22 = *((float *)&v41 + 1);
          LODWORD(v23) = v41;
          v37[0] = v41;
          v24 = *((float *)&v41 + 1);
          LODWORD(v25) = v41;
          do
          {
            v26 = *(v20 - 1);
            if ( v25 > v26 )
              v25 = *(v20 - 1);
            if ( v24 > *v20 )
              v24 = *v20;
            if ( v26 > v23 )
              v23 = *(v20 - 1);
            if ( *v20 > v22 )
              v22 = *v20;
            v20 += 2;
            --v21;
          }
          while ( v21 );
          *(_QWORD *)&v39 = __PAIR64__(LODWORD(v24), LODWORD(v25));
          *((_QWORD *)&v39 + 1) = __PAIR64__(LODWORD(v22), LODWORD(v23));
        }
        CVisual::AdjustWorldBounds(a1, (float *)&v39);
        v27 = *((float *)&v39 + 2);
        v28 = *(float *)&v39;
        if ( *((float *)&v39 + 2) > *(float *)&v39 )
        {
          v29 = *((float *)&v39 + 3);
          v30 = *((float *)&v39 + 1);
          if ( *((float *)&v39 + 3) > *((float *)&v39 + 1) )
          {
            if ( a5 )
            {
              if ( *a5 > *(float *)&v39 )
              {
                v28 = *a5;
                *(float *)&v39 = *a5;
              }
              if ( a5[1] > *((float *)&v39 + 1) )
              {
                v30 = a5[1];
                *((float *)&v39 + 1) = v30;
              }
              if ( *((float *)&v39 + 2) > a5[2] )
              {
                v27 = a5[2];
                *((float *)&v39 + 2) = v27;
              }
              if ( *((float *)&v39 + 3) > a5[3] )
              {
                v29 = a5[3];
                *((float *)&v39 + 3) = v29;
              }
              if ( v27 <= v28 || v29 <= v30 )
              {
                v29 = 0.0;
                v27 = 0.0;
                v30 = 0.0;
                v28 = 0.0;
                v39 = 0uLL;
              }
            }
            if ( v27 > v28 && v29 > v30 )
            {
              v5 = 0;
              if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v39) )
                CDirtyRegion::SetFullDirty((CDirtyRegion *)a2);
              if ( !*(_BYTE *)(a2 + 1012) && !*(_DWORD *)(a2 + 992) )
              {
                v31 = CDirtyRegion::_Add((CDirtyRegion *)a2);
                v5 = v31;
                if ( v31 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x1C3u);
                if ( v5 < 0 )
                  break;
              }
            }
          }
        }
        if ( ++v8 >= v36 )
          goto LABEL_43;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xAA8u);
    }
    else
    {
LABEL_43:
      *(_QWORD *)(a1 + 216) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 352LL);
    }
    *(_BYTE *)(a1 + 73) |= 0x80u;
  }
  return (unsigned int)v5;
}
