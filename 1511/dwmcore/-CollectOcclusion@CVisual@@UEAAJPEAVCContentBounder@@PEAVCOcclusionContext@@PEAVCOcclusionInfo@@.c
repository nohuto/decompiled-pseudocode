/*
 * XREFs of ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800492D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000C820 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x18001A384 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004E730 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180054E4C (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?Top@CBaseClipStack@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A25A4 (-Top@CBaseClipStack@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::CollectOcclusion(
        CVisual *this,
        struct CContentBounder *a2,
        struct CVisual **a3,
        struct COcclusionInfo *a4)
{
  struct IDrawingContext *v4; // rbx
  __int64 v7; // r14
  const struct D2D_SIZE_F *v8; // r15
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(CRenderData *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *); // r14
  int v11; // eax
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm6_4
  int v16; // edi
  unsigned int v17; // xmm4_4
  unsigned int v18; // xmm5_4
  unsigned int v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  __int64 v27; // rax
  unsigned int v28; // r8d
  struct CVisual *v29; // rcx
  __int64 v30; // rdx
  float v31; // xmm1_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  unsigned __int8 (__fastcall *v35)(__int64, __int64, struct CVisual **, struct COcclusionInfo *); // r15
  CFilterEffect *v37; // rcx
  int v38; // esi
  int v39; // eax
  __int128 v40; // [rsp+40h] [rbp-71h] BYREF
  int v41; // [rsp+50h] [rbp-61h]
  unsigned __int64 v42; // [rsp+58h] [rbp-59h] BYREF
  float v43; // [rsp+60h] [rbp-51h]
  float v44; // [rsp+64h] [rbp-4Dh]
  _BYTE v45[48]; // [rsp+68h] [rbp-49h] BYREF
  float v46; // [rsp+98h] [rbp-19h]
  float v47; // [rsp+9Ch] [rbp-15h]
  __int64 v48; // [rsp+A8h] [rbp-9h] BYREF
  float v49; // [rsp+B0h] [rbp-1h]
  float v50; // [rsp+B4h] [rbp+3h]
  float v51; // [rsp+B8h] [rbp+7h]
  float v52; // [rsp+BCh] [rbp+Bh]
  float v53; // [rsp+C0h] [rbp+Fh]
  float v54; // [rsp+C4h] [rbp+13h]

  v4 = 0LL;
  if ( *((_QWORD *)this + 45) )
  {
    v7 = *((_QWORD *)this + 49);
    if ( v7 )
    {
      v35 = *(unsigned __int8 (__fastcall **)(__int64, __int64, struct CVisual **, struct COcclusionInfo *))(*(_QWORD *)v7 + 48LL);
      if ( (char *)v35 == (char *)CEffectGroup::IsOfType ? CEffectGroup::IsOfType(v7, 9LL) : v35(v7, 9LL, a3, a4) )
      {
        v37 = (CFilterEffect *)*((_QWORD *)this + 49);
        if ( v37 )
        {
          if ( !CFilterEffect::IsOpaque(v37, this) )
            return (unsigned int)v4;
        }
      }
    }
    v8 = (const struct D2D_SIZE_F *)((char *)this + 132);
    v9 = *((_QWORD *)this + 45);
    v10 = *(__int64 (__fastcall **)(CRenderData *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v9 + 104LL);
    if ( v10 == CRenderData::AddOcclusionInformation )
    {
      if ( a3 )
        v4 = (struct IDrawingContext *)(a3 + 1);
      v11 = CRenderData::Draw((CRenderData *)v9, v4);
      goto LABEL_7;
    }
    if ( v10 != CPrimitiveGroup::AddOcclusionInformation )
    {
      if ( (char *)v10 == (char *)CCompositionSurfaceBitmap::AddOcclusionInformation )
        v11 = CCompositionSurfaceBitmap::AddOcclusionInformation((CCompositionSurfaceBitmap *)v9, a3, v8);
      else
        v11 = ((__int64 (__fastcall *)(__int64, struct CVisual **, const struct D2D_SIZE_F *, struct COcclusionInfo *))v10)(
                v9,
                a3,
                v8,
                a4);
LABEL_7:
      LODWORD(v4) = v11;
LABEL_8:
      if ( (int)v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, (int)v4, 0xB1Bu);
      return (unsigned int)v4;
    }
    if ( !*(_QWORD *)(v9 + 352) )
      goto LABEL_8;
    v13 = *(float *)(v9 + 408);
    v14 = *(float *)(v9 + 416);
    v15 = *(float *)(v9 + 412);
    LODWORD(v42) = *(_DWORD *)(v9 + 404);
    *((float *)&v42 + 1) = v13;
    v43 = v15;
    v44 = v14;
    if ( v15 <= *(float *)&v42 || v14 <= v13 || *((_DWORD *)a3 + 164) )
      goto LABEL_8;
    v16 = 0;
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v42) )
    {
      *(_QWORD *)&v40 = __PAIR64__(LODWORD(v13), v18);
      *((_QWORD *)&v40 + 1) = __PAIR64__(v17, LODWORD(v15));
      v41 = 0;
      CBaseMatrixStack::Top((CBaseMatrixStack *)(a3 + 2), (struct CBaseMatrix *)v45);
      v42 = __PAIR64__(LODWORD(v13), v19);
      v43 = v15;
      v44 = v20;
      if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v45) )
      {
        *(float *)&v40 = v22 + v46;
        *((float *)&v40 + 1) = v13 + v47;
        *((float *)&v40 + 2) = v15 + v46;
        *((float *)&v40 + 3) = v21 + v47;
      }
      else
      {
        CBaseMatrix::Transform2DRectToPerspective(
          (CBaseMatrix *)v45,
          (const struct MilRectF *)&v42,
          (struct MilPoint2F *const)&v48);
        v31 = v49;
        v42 = v48;
        if ( *(float *)&v48 > v49 )
          v32 = v49;
        else
          LODWORD(v32) = v48;
        v33 = *((float *)&v48 + 1);
        if ( *((float *)&v48 + 1) > v50 )
          v33 = v50;
        if ( v49 <= *(float *)&v48 )
          LODWORD(v31) = v42;
        v34 = *((float *)&v42 + 1);
        if ( v50 > *((float *)&v42 + 1) )
          v34 = v50;
        if ( v32 > v51 )
          v32 = v51;
        if ( v33 > v52 )
          v33 = v52;
        if ( v51 > v31 )
          v31 = v51;
        if ( v52 > v34 )
          v34 = v52;
        if ( v32 > v53 )
          v32 = v53;
        if ( v33 > v54 )
          v33 = v54;
        if ( v53 > v31 )
          v31 = v53;
        if ( v54 > v34 )
          v34 = v54;
        *(_QWORD *)&v40 = __PAIR64__(LODWORD(v33), LODWORD(v32));
        *((_QWORD *)&v40 + 1) = __PAIR64__(LODWORD(v34), LODWORD(v31));
      }
      CBaseClipStack::Top(a3 + 7, &v42);
      v23 = *(float *)&v40;
      if ( *(float *)&v42 > *(float *)&v40 )
      {
        v23 = *(float *)&v42;
        LODWORD(v40) = v42;
      }
      v24 = *((float *)&v40 + 1);
      if ( *((float *)&v42 + 1) > *((float *)&v40 + 1) )
      {
        v24 = *((float *)&v42 + 1);
        DWORD1(v40) = HIDWORD(v42);
      }
      v25 = *((float *)&v40 + 2);
      if ( *((float *)&v40 + 2) > v43 )
      {
        v25 = v43;
        *((float *)&v40 + 2) = v43;
      }
      v26 = *((float *)&v40 + 3);
      if ( *((float *)&v40 + 3) > v44 )
      {
        v26 = v44;
        *((float *)&v40 + 3) = v44;
      }
      if ( v25 <= v23 || v26 <= v24 )
        v40 = 0uLL;
      if ( (unsigned __int8)COcclusionContext::CheckOcclusionRelevance(a3, &v40) )
      {
        v27 = *((unsigned int *)a3 + 32);
        v28 = v27 + 1;
        if ( (int)v27 + 1 < (unsigned int)v27 )
        {
          v38 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v16 = -2147024362;
        }
        else
        {
          if ( v28 <= *((_DWORD *)a3 + 31) )
          {
            v29 = a3[13];
            v30 = 5 * v27;
            *(_OWORD *)((char *)v29 + 4 * v30) = v40;
            *((_DWORD *)v29 + v30 + 4) = v41;
            *((_DWORD *)a3 + 32) = v28;
            goto LABEL_34;
          }
          v39 = DynArrayImpl<0>::AddMultipleAndSet(a3 + 13, 20LL, 1LL, &v40);
          v38 = v39;
          if ( v39 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0xC0u);
          v16 = v38;
          if ( v38 >= 0 )
            goto LABEL_34;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x70Au);
      }
    }
LABEL_34:
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x4ACu);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x3FEu);
    }
    goto LABEL_8;
  }
  return 0LL;
}
