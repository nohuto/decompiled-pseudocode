/*
 * XREFs of ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x1800F4768
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800365B0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007B490 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180010268 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEAA_NXZ @ 0x1800296F4 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F15D4 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x1800F18A0 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAUHRGN__@@@Z @ 0x1800F371C (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1800F3A0C (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x1800F3D28 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     Template_xff @ 0x1800F5084 (Template_xff.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x1800FDE94 (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x180103C8C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@0PEA_N0PEAVCDrawingContext@@@Z @ 0x180104A44 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UD.c)
 */

__int64 __fastcall CDrawingContext::RecordVisualMove(struct CDrawingContext *a1, CVisual *this, __int128 *a3)
{
  unsigned int v6; // esi
  CDrawingContext *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // sf
  bool v11; // of
  bool v12; // r13
  __int64 v13; // rdi
  int v14; // eax
  _DWORD *v15; // r8
  int LocalToWorldTransform; // eax
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  float v18; // xmm6_4
  float v19; // xmm7_4
  int v20; // ecx
  int v21; // r9d
  float v22; // xmm8_4
  float v23; // xmm9_4
  CMoveRenderPassInfo *v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rbx
  unsigned int v27; // edi
  unsigned int v28; // ebx
  int v29; // eax
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  int v34; // eax
  CMILCOMBase *v35; // rbx
  int v36; // eax
  unsigned int v38[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B8h] BYREF
  CMILCOMBase *v40; // [rsp+58h] [rbp-B0h] BYREF
  struct MilRectF *v41; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+70h] [rbp-98h] BYREF
  __int128 v44; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v45[12]; // [rsp+98h] [rbp-70h] BYREF
  float v46; // [rsp+C8h] [rbp-40h]
  float v47; // [rsp+CCh] [rbp-3Ch]
  int v48; // [rsp+D0h] [rbp-38h]
  int v49; // [rsp+D4h] [rbp-34h]
  int v50[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v51[8]; // [rsp+118h] [rbp+10h] BYREF

  v6 = 0;
  v40 = 0LL;
  if ( *((_BYTE *)a1 + 5936)
    && (unsigned __int8)CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1)
    && !*((_BYTE *)v7 + 5601)
    && !CDrawingContext::IsInLayer(v7) )
  {
    v9 = *(_QWORD *)(v8 + 24);
    v48 = 0;
    v47 = 0.0;
    v46 = 0.0;
    v45[11] = 0;
    v45[9] = 0;
    v45[8] = 0;
    v45[7] = 0;
    v45[6] = 0;
    v45[4] = 0;
    v45[3] = 0;
    v45[2] = 0;
    v45[1] = 0;
    v11 = __OFSUB__(*(_DWORD *)(v9 + 1032), 2);
    v10 = *(_DWORD *)(v9 + 1032) - 2 < 0;
    v49 = 1065353216;
    v12 = v10 == v11;
    v45[10] = 1065353216;
    v45[5] = 1065353216;
    v45[0] = 1065353216;
    LOBYTE(v38[0]) = 0;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(v8 + 456), (struct CBaseMatrix *)v50);
    if ( v12 )
    {
      v13 = *((_QWORD *)a1 + 46);
      if ( v13 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v13 + 192LL))(*((_QWORD *)a1 + 46), &v43);
        v6 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1C57u);
          return v6;
        }
        v46 = (float)-(int)v43 + 0.0;
        v47 = (float)-DWORD1(v43) + 0.0;
      }
      v15 = v45;
    }
    else
    {
      LODWORD(v15) = 0;
    }
    LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                              (int)this,
                              (int)v50,
                              (int)v15,
                              (int)v38,
                              (__int64)v51,
                              a1);
    v6 = LocalToWorldTransform;
    if ( LocalToWorldTransform < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LocalToWorldTransform, 0x1C66u);
      return v6;
    }
    if ( LOBYTE(v38[0]) )
    {
      v39 = 0LL;
      MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(this, a1);
      v18 = *((float *)MoveRenderPassInfoRef + 14);
      v19 = *((float *)MoveRenderPassInfoRef + 15);
      v44 = *a3;
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)v50, (const struct MilRectF *)&v44, (struct MilRectF *)&v43);
      LODWORD(v22) = LODWORD(v19) ^ _xmm;
      LODWORD(v23) = LODWORD(v18) ^ _xmm;
      *((float *)&v43 + 1) = *((float *)&v43 + 1) + COERCE_FLOAT(LODWORD(v19) ^ _xmm);
      *(float *)&v43 = *(float *)&v43 + COERCE_FLOAT(LODWORD(v18) ^ _xmm);
      *((float *)&v43 + 3) = *((float *)&v43 + 3) + COERCE_FLOAT(LODWORD(v19) ^ _xmm);
      *((float *)&v43 + 2) = *((float *)&v43 + 2) + COERCE_FLOAT(LODWORD(v18) ^ _xmm);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xff(v20, (unsigned int)&MILEVENT_MEDIA_UCE_VISUAL_MOVE_DETECTED, (_DWORD)this, v21, SLOBYTE(v19));
      v24 = CVisual::PreviousFrameVisibleRegion(this, a1);
      if ( v24 )
      {
        v25 = *((_QWORD *)a1 + 46);
        v41 = 0LL;
        v42 = 0LL;
        *(_QWORD *)&v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 200LL))(v25);
        v26 = v44;
        if ( CVisual::GetAdditionalDirtyRects((__m128i *)this, &v42, &v38[1], (__m128i **)&v41)
          && *(_QWORD *)(*((_QWORD *)a1 + 3) + 352LL) == v42 )
        {
          v27 = v38[1];
          v28 = 0;
          if ( v38[1] )
          {
            while ( 1 )
            {
              v29 = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                      (__int64)a1,
                      (__int64)v41 + 16 * v28,
                      (CBaseMatrix *)v51,
                      (HRGN)v24);
              v6 = v29;
              if ( v29 < 0 )
                break;
              if ( ++v28 >= v27 )
                goto LABEL_24;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x1C91u);
            return v6;
          }
LABEL_24:
          v26 = v44;
        }
        if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v43, v24, &v39) )
        {
          v30 = *((float *)&v43 + 1) + v19;
          v31 = *((float *)&v43 + 2) + v18;
          CScopedClipStack::GetTopClipBoundsInScope((__int64 *)a1 + 85, (__int64)&v44);
          if ( *(float *)&v44 > v33 )
            v33 = *(float *)&v44;
          if ( *((float *)&v44 + 1) > v30 )
            v30 = *((float *)&v44 + 1);
          if ( v31 > *((float *)&v44 + 2) )
            v31 = *((float *)&v44 + 2);
          if ( v32 > *((float *)&v44 + 3) )
            v32 = *((float *)&v44 + 3);
          if ( v31 > v33 && v32 > v30 )
          {
            *((float *)&v43 + 1) = v30 + v22;
            *(float *)&v43 = v33 + v23;
            *((float *)&v43 + 2) = v31 + v23;
            *((float *)&v43 + 3) = v32 + v22;
            v34 = MoveOptimizationInfo::Create((__int64)this, v18, v19, &v43, v39, v26 & -(__int64)v12, (__int64 *)&v40);
            v35 = v40;
            v6 = v34;
            if ( v34 >= 0 )
            {
              v36 = CDrawingContext::CombineMove((__int64)a1, (__int64)v40, &v44);
              v6 = v36;
              if ( v36 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x1CADu);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x1CABu);
            }
            if ( v35 )
              CMILCOMBase::InternalRelease(v35);
          }
        }
      }
    }
  }
  return v6;
}
