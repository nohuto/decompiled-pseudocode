/*
 * XREFs of ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18010E44C
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180048FE0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18000E09C (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x18004D854 (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010B4E4 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18010B7B0 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAUHRGN__@@@Z @ 0x18010D710 (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18010DA20 (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x18010DBE0 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18010DC40 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     Template_xff @ 0x18010ED68 (Template_xff.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x180116F58 (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@0PEA_N0PEAVCDrawingContext@@@Z @ 0x180120DA4 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UD.c)
 */

__int64 __fastcall CDrawingContext::RecordVisualMove(struct CDrawingContext *a1, CVisual *this, __int128 *a3)
{
  double v3; // xmm2_8
  unsigned int v7; // esi
  CDrawingContext *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  bool v11; // sf
  bool v12; // of
  bool v13; // r13
  __int64 v14; // rdi
  int v15; // eax
  _DWORD *v16; // r8
  int LocalToWorldTransform; // eax
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  float v19; // xmm6_4
  float v20; // xmm7_4
  int v21; // ecx
  int v22; // r9d
  float v23; // xmm8_4
  float v24; // xmm9_4
  CMoveRenderPassInfo *v25; // r12
  __int64 v26; // rdi
  __int64 v27; // rbx
  unsigned int v28; // edi
  unsigned int v29; // ebx
  int v30; // eax
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  int v35; // eax
  CMILCOMBase *v36; // rbx
  int v37; // eax
  unsigned int v39[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  CMILCOMBase *v41; // [rsp+58h] [rbp-B0h] BYREF
  struct MilRectF *v42; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v44; // [rsp+70h] [rbp-98h] BYREF
  __int128 v45; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v46[12]; // [rsp+98h] [rbp-70h] BYREF
  float v47; // [rsp+C8h] [rbp-40h]
  float v48; // [rsp+CCh] [rbp-3Ch]
  int v49; // [rsp+D0h] [rbp-38h]
  int v50; // [rsp+D4h] [rbp-34h]
  int v51[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v52[8]; // [rsp+118h] [rbp+10h] BYREF

  v7 = 0;
  v41 = 0LL;
  if ( *((_BYTE *)a1 + 5968)
    && CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1)
    && !*((_BYTE *)v8 + 5633)
    && !CDrawingContext::IsInLayer(v8) )
  {
    v10 = *(_QWORD *)(v9 + 24);
    v49 = 0;
    v48 = 0.0;
    v47 = 0.0;
    v46[11] = 0;
    v46[9] = 0;
    v46[8] = 0;
    v46[7] = 0;
    v46[6] = 0;
    v46[4] = 0;
    v46[3] = 0;
    v46[2] = 0;
    v46[1] = 0;
    v12 = __OFSUB__(*(_DWORD *)(v10 + 1000), 2);
    v11 = *(_DWORD *)(v10 + 1000) - 2 < 0;
    v50 = 1065353216;
    v13 = v11 == v12;
    v46[10] = 1065353216;
    v46[5] = 1065353216;
    v46[0] = 1065353216;
    LOBYTE(v39[0]) = 0;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(v9 + 456), (struct CBaseMatrix *)v51);
    if ( v13 )
    {
      v14 = *((_QWORD *)a1 + 46);
      if ( v14 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v14 + 200LL))(*((_QWORD *)a1 + 46), &v44);
        v7 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1C1Fu);
          return v7;
        }
        v47 = (float)-(int)v44 + 0.0;
        v48 = (float)-DWORD1(v44) + 0.0;
      }
      v16 = v46;
    }
    else
    {
      LODWORD(v16) = 0;
    }
    LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                              (int)this,
                              (int)v51,
                              (int)v16,
                              (int)v39,
                              (__int64)v52,
                              a1);
    v7 = LocalToWorldTransform;
    if ( LocalToWorldTransform < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LocalToWorldTransform, 0x1C2Eu);
      return v7;
    }
    if ( LOBYTE(v39[0]) )
    {
      v40 = 0LL;
      MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(this, a1);
      v19 = *((float *)MoveRenderPassInfoRef + 14);
      v20 = *((float *)MoveRenderPassInfoRef + 15);
      v45 = *a3;
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)v51, (const struct MilRectF *)&v45, (struct MilRectF *)&v44);
      LODWORD(v23) = LODWORD(v20) ^ _xmm;
      LODWORD(v24) = LODWORD(v19) ^ _xmm;
      *((float *)&v44 + 1) = *((float *)&v44 + 1) + COERCE_FLOAT(LODWORD(v20) ^ _xmm);
      *(float *)&v44 = *(float *)&v44 + COERCE_FLOAT(LODWORD(v19) ^ _xmm);
      *((float *)&v44 + 3) = *((float *)&v44 + 3) + COERCE_FLOAT(LODWORD(v20) ^ _xmm);
      *((float *)&v44 + 2) = *((float *)&v44 + 2) + COERCE_FLOAT(LODWORD(v19) ^ _xmm);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xff(v21, (unsigned int)&MILEVENT_MEDIA_UCE_VISUAL_MOVE_DETECTED, (_DWORD)this, v22, SLOBYTE(v20));
      v25 = CVisual::PreviousFrameVisibleRegion(this, a1);
      if ( v25 )
      {
        v26 = *((_QWORD *)a1 + 46);
        v42 = 0LL;
        v43 = 0LL;
        *(_QWORD *)&v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 208LL))(v26);
        v27 = v45;
        if ( CVisual::GetAdditionalDirtyRects(this, &v43, &v39[1], &v42)
          && *(_QWORD *)(*((_QWORD *)a1 + 3) + 352LL) == v43 )
        {
          v28 = v39[1];
          v29 = 0;
          if ( v39[1] )
          {
            while ( 1 )
            {
              v30 = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                      (__int64)a1,
                      (__int64)v42 + 16 * v29,
                      v3,
                      (HRGN)v25);
              v7 = v30;
              if ( v30 < 0 )
                break;
              if ( ++v29 >= v28 )
                goto LABEL_24;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x1C59u);
            return v7;
          }
LABEL_24:
          v27 = v45;
        }
        if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v44, v25, &v40) )
        {
          v31 = *((float *)&v44 + 1) + v20;
          v32 = *((float *)&v44 + 2) + v19;
          CScopedClipStack::GetTopClipBoundsInScope((__int64 *)a1 + 85, &v45);
          if ( *(float *)&v45 > v34 )
            v34 = *(float *)&v45;
          if ( *((float *)&v45 + 1) > v31 )
            v31 = *((float *)&v45 + 1);
          if ( v32 > *((float *)&v45 + 2) )
            v32 = *((float *)&v45 + 2);
          if ( v33 > *((float *)&v45 + 3) )
            v33 = *((float *)&v45 + 3);
          if ( v32 > v34 && v33 > v31 )
          {
            *((float *)&v44 + 1) = v31 + v23;
            *(float *)&v44 = v34 + v24;
            *((float *)&v44 + 2) = v32 + v24;
            *((float *)&v44 + 3) = v33 + v23;
            v35 = MoveOptimizationInfo::Create((__int64)this, v19, v20, &v44, v40, v27 & -(__int64)v13, (__int64 *)&v41);
            v36 = v41;
            v7 = v35;
            if ( v35 >= 0 )
            {
              v37 = CDrawingContext::CombineMove((__int64)a1, (__int64)v41, &v45);
              v7 = v37;
              if ( v37 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x1C75u);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x1C73u);
            }
            if ( v36 )
              CMILCOMBase::InternalRelease(v36);
          }
        }
      }
    }
  }
  return v7;
}
