/*
 * XREFs of ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180124B50
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800513D0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x1800040A0 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x180054908 (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121810 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x180121AE0 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAUHRGN__@@@Z @ 0x1801232EC (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1801235C0 (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180124000 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x1801240B4 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     Template_xff @ 0x1801253B0 (Template_xff.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x18013118C (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@0PEA_N0PEAVCDrawingContext@@@Z @ 0x180138CF8 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UD.c)
 */

__int64 __fastcall CDrawingContext::RecordVisualMove(struct CDrawingContext *a1, CVisual *this, __int128 *a3)
{
  unsigned int v3; // ebx
  CDrawingContext *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // r13
  __int64 v11; // rcx
  int v12; // eax
  _OWORD *v13; // r8
  int LocalToWorldTransform; // eax
  struct _LIST_ENTRY **MoveRenderPassInfoRef; // rax
  float v16; // xmm6_4
  float v17; // xmm7_4
  int v18; // ecx
  int v19; // r9d
  float v20; // xmm8_4
  float v21; // xmm9_4
  struct _LIST_ENTRY **v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rsi
  unsigned int v25; // esi
  int v26; // eax
  float v27; // xmm2_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  int v31; // eax
  CMILCOMBase *v32; // rsi
  int v33; // eax
  unsigned int v35[2]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  struct MilRectF *v37; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  CMILCOMBase *v39; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v40[4]; // [rsp+78h] [rbp-90h] BYREF
  int v41; // [rsp+B8h] [rbp-50h]
  int v42[20]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v43[8]; // [rsp+118h] [rbp+10h] BYREF
  int v44; // [rsp+158h] [rbp+50h]
  __int128 v45; // [rsp+168h] [rbp+60h] BYREF
  __int128 v46; // [rsp+178h] [rbp+70h] BYREF

  v3 = 0;
  v39 = 0LL;
  if ( *((_BYTE *)a1 + 6532)
    && CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1)
    && !*((_BYTE *)v7 + 6325)
    && !CDrawingContext::IsInLayer(v7) )
  {
    v42[16] = 0;
    v44 = 0;
    v41 = dword_1801EAD50;
    v9 = *(_QWORD *)(v8 + 24);
    v40[0] = CMILMatrix::Identity;
    v40[1] = xmmword_1801EAD20;
    v10 = *(_DWORD *)(v9 + 1104) >= 2;
    v40[2] = xmmword_1801EAD30;
    v40[3] = xmmword_1801EAD40;
    LOBYTE(v35[0]) = 0;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(v8 + 536), (struct CMILMatrix *)v42);
    if ( v10 )
    {
      v11 = *((_QWORD *)a1 + 56);
      if ( v11 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 216LL))(v11, &v45);
        v3 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1C76u);
          return v3;
        }
        CMILMatrix::Translate((CMILMatrix *)v40, (float)-(int)v45, (float)-DWORD1(v45), 0.0);
      }
      v13 = v40;
    }
    else
    {
      LODWORD(v13) = 0;
    }
    LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                              (int)this,
                              (int)v42,
                              (int)v13,
                              (int)v35,
                              (__int64)v43,
                              a1);
    v3 = LocalToWorldTransform;
    if ( LocalToWorldTransform < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LocalToWorldTransform, 0x1C85u);
      return v3;
    }
    if ( LOBYTE(v35[0]) )
    {
      v38 = 0LL;
      MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(this, a1);
      v16 = *((float *)MoveRenderPassInfoRef + 14);
      v17 = *((float *)MoveRenderPassInfoRef + 15);
      v46 = *a3;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v42, (__int64)&v46, (float *)&v45);
      LODWORD(v20) = LODWORD(v17) ^ _xmm;
      LODWORD(v21) = LODWORD(v16) ^ _xmm;
      *((float *)&v45 + 1) = *((float *)&v45 + 1) + COERCE_FLOAT(LODWORD(v17) ^ _xmm);
      *(float *)&v45 = *(float *)&v45 + COERCE_FLOAT(LODWORD(v16) ^ _xmm);
      *((float *)&v45 + 3) = *((float *)&v45 + 3) + COERCE_FLOAT(LODWORD(v17) ^ _xmm);
      *((float *)&v45 + 2) = *((float *)&v45 + 2) + COERCE_FLOAT(LODWORD(v16) ^ _xmm);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xff(v18, (unsigned int)&MILEVENT_MEDIA_UCE_VISUAL_MOVE_DETECTED, (_DWORD)this, v19, SLOBYTE(v17));
      v22 = CVisual::PreviousFrameVisibleRegion(this, a1);
      if ( v22 )
      {
        v23 = *((_QWORD *)a1 + 56);
        v37 = 0LL;
        v36 = 0LL;
        *(_QWORD *)&v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 224LL))(v23);
        v24 = v46;
        if ( CVisual::GetAdditionalDirtyRects(this, &v36, &v35[1], &v37)
          && *(_QWORD *)(*((_QWORD *)a1 + 3) + 352LL) == v36 )
        {
          v25 = 0;
          if ( v35[1] )
          {
            while ( 1 )
            {
              v26 = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                      (__int64)a1,
                      (__int64)v37 + 16 * v25,
                      (__int64)v43,
                      (HRGN)v22);
              v3 = v26;
              if ( v26 < 0 )
                break;
              if ( ++v25 >= v35[1] )
                goto LABEL_22;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x1CB0u);
            return v3;
          }
LABEL_22:
          v24 = v46;
        }
        if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v45, v22, &v38) )
        {
          v27 = *((float *)&v45 + 1) + v17;
          v28 = *((float *)&v45 + 2) + v16;
          CScopedClipStack::GetTopGpuClipInScope((__int64 *)a1 + 114, 1, (__int64)&v46);
          if ( *(float *)&v46 > v30 )
            v30 = *(float *)&v46;
          if ( *((float *)&v46 + 1) > v27 )
            v27 = *((float *)&v46 + 1);
          if ( v28 > *((float *)&v46 + 2) )
            v28 = *((float *)&v46 + 2);
          if ( v29 > *((float *)&v46 + 3) )
            v29 = *((float *)&v46 + 3);
          if ( v28 > v30 && v29 > v27 )
          {
            *((float *)&v45 + 1) = v27 + v20;
            *(float *)&v45 = v30 + v21;
            *((float *)&v45 + 2) = v28 + v21;
            *((float *)&v45 + 3) = v29 + v20;
            v31 = MoveOptimizationInfo::Create((__int64)this, v16, v17, &v45, v38, v24 & -(__int64)v10, (__int64 *)&v39);
            v32 = v39;
            v3 = v31;
            if ( v31 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x1CCAu);
            }
            else
            {
              v33 = CDrawingContext::CombineMove((__int64)a1, (__int64)v39, &v46);
              v3 = v33;
              if ( v33 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x1CCCu);
            }
            if ( v32 )
              CMILCOMBase::InternalRelease(v32);
          }
        }
      }
    }
  }
  return v3;
}
