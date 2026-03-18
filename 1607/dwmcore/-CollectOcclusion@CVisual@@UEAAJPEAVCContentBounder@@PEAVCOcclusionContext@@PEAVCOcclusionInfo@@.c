/*
 * XREFs of ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800516E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000FE00 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x180014754 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800560D0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005BC24 (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CollectOcclusion(
        CVisual *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  struct IDrawingContext *v4; // rbx
  char v7; // r14
  char v8; // r15
  __int64 v9; // rcx
  const struct D2D_SIZE_F *v10; // r8
  __int64 (__fastcall *v11)(CRenderData *, struct COcclusionContext *, const struct D2D_SIZE_F *); // rax
  int v12; // eax
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  int v17; // edi
  int v18; // eax
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  __int64 v27; // rax
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rdx
  CFilterEffect *EffectInternal; // r12
  __int64 (__fastcall *v32)(CFilterEffect *, __int64); // rax
  char v33; // al
  bool IsOpaque; // al
  int v35; // eax
  _BYTE v36[64]; // [rsp+30h] [rbp-59h] BYREF
  int v37; // [rsp+70h] [rbp-19h]
  __int128 v38; // [rsp+80h] [rbp-9h] BYREF
  __int128 v39; // [rsp+90h] [rbp+7h] BYREF
  int v40; // [rsp+A0h] [rbp+17h]
  float v41; // [rsp+A8h] [rbp+1Fh] BYREF
  float v42; // [rsp+ACh] [rbp+23h]
  float v43; // [rsp+B0h] [rbp+27h]
  float v44; // [rsp+B4h] [rbp+2Bh]

  v4 = 0LL;
  if ( *((_QWORD *)this + 38) || (*(_DWORD *)(*((_QWORD *)this + 34) + 4LL) & 0x10000) != 0 )
  {
    v7 = 0;
    v8 = 0;
    if ( (*(_DWORD *)(*((_QWORD *)this + 34) + 4LL) & 0x8000000) == 0
      || ((EffectInternal = CVisual::GetEffectInternal(this),
           v32 = *(__int64 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL),
           (char *)v32 != (char *)CEffectGroup::IsOfType)
        ? (v33 = v32(EffectInternal, 9LL))
        : (v33 = CEffectGroup::IsOfType(EffectInternal, 9LL)),
          !v33 || (IsOpaque = CFilterEffect::IsOpaque(EffectInternal, this))) )
    {
      v8 = 1;
    }
    if ( (*(_DWORD *)(*((_QWORD *)this + 34) + 4LL) & 0x10000) == 0 )
      v7 = 1;
    if ( v8 && v7 )
    {
      v9 = *((_QWORD *)this + 38);
      v10 = (const struct D2D_SIZE_F *)((char *)this + 192);
      v11 = *(__int64 (__fastcall **)(CRenderData *, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v9 + 112LL);
      if ( v11 == CRenderData::AddOcclusionInformation )
      {
        if ( a3 )
          v4 = (struct COcclusionContext *)((char *)a3 + 8);
        v12 = CRenderData::Draw((CRenderData *)v9, v4, (__int64)v10);
        goto LABEL_12;
      }
      if ( v11 != CPrimitiveGroup::AddOcclusionInformation )
      {
        if ( v11 == CCompositionSurfaceBitmap::AddOcclusionInformation )
          v12 = CCompositionSurfaceBitmap::AddOcclusionInformation((CCompositionSurfaceBitmap *)v9, a3, v10);
        else
          v12 = ((__int64 (__fastcall *)(__int64, struct COcclusionContext *, const struct D2D_SIZE_F *, struct COcclusionInfo *))v11)(
                  v9,
                  a3,
                  v10,
                  a4);
LABEL_12:
        LODWORD(v4) = v12;
        goto LABEL_13;
      }
      if ( *(_QWORD *)(v9 + 432) )
      {
        v14 = *(float *)(v9 + 492);
        v15 = *(float *)(v9 + 488);
        v16 = *(float *)(v9 + 496);
        LODWORD(v38) = *(_DWORD *)(v9 + 484);
        *(_QWORD *)((char *)&v38 + 4) = __PAIR64__(LODWORD(v14), LODWORD(v15));
        *((float *)&v38 + 3) = v16;
        if ( v14 > *(float *)&v38 && v16 > v15 && !*((_DWORD *)a3 + 223) )
        {
          v17 = 0;
          if ( v16 <= v15 )
            goto LABEL_42;
          v40 = 0;
          v37 = 0;
          CBaseMatrixStack::Top((struct COcclusionContext *)((char *)a3 + 16), (struct CMILMatrix *)v36);
          CMILMatrix::Transform2DBoundsHelper<0>(v36, &v38, &v41);
          if ( *((_DWORD *)a3 + 16) )
          {
            v18 = *((_DWORD *)a3 + 16);
            if ( v18 )
              v38 = *(_OWORD *)(*((_QWORD *)a3 + 10) + 16LL * (unsigned int)(v18 - 1));
            v19 = *(float *)&v38;
            v20 = *((float *)&v38 + 1);
            v21 = *((float *)&v38 + 2);
            v22 = *((float *)&v38 + 3);
          }
          else
          {
            v19 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            v20 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
            v21 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
            v22 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
          }
          v23 = v41;
          if ( v19 > v41 )
            v23 = v19;
          v24 = v42;
          if ( v20 > v42 )
            v24 = v20;
          v25 = v43;
          if ( v43 > v21 )
            v25 = v21;
          v26 = v44;
          if ( v44 > v22 )
            v26 = v22;
          if ( v25 <= v23 || v26 <= v24 )
          {
            v23 = 0.0;
            v26 = 0.0;
            v25 = 0.0;
            v24 = 0.0;
          }
          *(_QWORD *)&v39 = __PAIR64__(LODWORD(v24), LODWORD(v23));
          *((_QWORD *)&v39 + 1) = __PAIR64__(LODWORD(v26), LODWORD(v25));
          if ( !(unsigned __int8)COcclusionContext::CheckOcclusionRelevance(a3, &v39) )
            goto LABEL_42;
          v27 = *((unsigned int *)a3 + 70);
          v28 = v27 + 1;
          if ( (int)v27 + 1 < (unsigned int)v27 )
          {
            v17 = -2147024362;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          }
          else
          {
            if ( v28 <= *((_DWORD *)a3 + 69) )
            {
              v29 = *((_QWORD *)a3 + 32);
              v30 = 5 * v27;
              *(_OWORD *)(v29 + 4 * v30) = v39;
              *(_DWORD *)(v29 + 4 * v30 + 16) = v40;
              *((_DWORD *)a3 + 70) = v28;
              goto LABEL_42;
            }
            v35 = DynArrayImpl<0>::AddMultipleAndSet((char *)a3 + 256, 20LL, 1LL, &v39);
            v17 = v35;
            if ( v35 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0xC0u);
          }
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x73Du);
LABEL_42:
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x4EAu);
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x41Au);
            }
          }
        }
      }
LABEL_13:
      if ( (int)v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, (int)v4, 0xC4Fu);
    }
  }
  return (unsigned int)v4;
}
