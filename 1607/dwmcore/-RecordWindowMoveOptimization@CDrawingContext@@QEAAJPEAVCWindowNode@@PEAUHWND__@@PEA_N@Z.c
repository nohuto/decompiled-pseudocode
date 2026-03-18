/*
 * XREFs of ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180067CD4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x1800040A0 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x180054908 (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121810 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x180121AE0 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAUHRGN__@@@Z @ 0x1801232EC (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x180123F6C (-GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180124000 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     Template_xff @ 0x1801253B0 (Template_xff.c)
 *     ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801317A0 (-GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x180138934 (-GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@0PEA_N0PEAVCDrawingContext@@@Z @ 0x180138CF8 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UD.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180169220 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDrawingContext::RecordWindowMoveOptimization(
        CDrawingContext *this,
        struct CWindowNode *a2,
        HWND a3,
        bool *a4)
{
  signed int v4; // ebx
  HRGN PreviousFrameVisibleRegion; // r14
  __int64 v10; // rax
  bool v11; // si
  __int64 v12; // rcx
  int LocalToWorldTransform; // eax
  CDrawingContext *v14; // rcx
  unsigned int v15; // esi
  struct _LIST_ENTRY **MoveRenderPassInfoRef; // rax
  __int64 v17; // rdx
  int v18; // xmm7_4
  int v19; // ecx
  int v20; // r9d
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  HRGN RectRgn; // rbx
  signed int LastError; // eax
  int v27; // edx
  unsigned int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  signed int v31; // eax
  int v32; // edx
  unsigned int v33; // ecx
  int v34; // r8d
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  int v38; // eax
  CMILCOMBase *v39; // rsi
  int v40; // eax
  unsigned int v41; // [rsp+28h] [rbp-E0h]
  unsigned int v42[2]; // [rsp+48h] [rbp-C0h] BYREF
  CMILCOMBase *v43; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v44[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v45; // [rsp+98h] [rbp-70h]
  _OWORD v46[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v47; // [rsp+E8h] [rbp-20h]
  __int64 v48[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v49; // [rsp+108h] [rbp+0h]
  __int128 v50; // [rsp+118h] [rbp+10h]
  __int128 v51; // [rsp+128h] [rbp+20h]
  int v52; // [rsp+138h] [rbp+30h]
  unsigned __int64 v53; // [rsp+148h] [rbp+40h] BYREF
  float v54; // [rsp+150h] [rbp+48h]
  float v55; // [rsp+154h] [rbp+4Ch]
  struct MilRectF *v56; // [rsp+158h] [rbp+50h] BYREF
  float v57; // [rsp+160h] [rbp+58h]
  float v58; // [rsp+164h] [rbp+5Ch]

  v4 = 0;
  PreviousFrameVisibleRegion = 0LL;
  v43 = 0LL;
  LOBYTE(v42[0]) = 0;
  if ( !*((_BYTE *)this + 6532) )
    goto LABEL_2;
  v45 = 0;
  v47 = dword_1801EAD50;
  v10 = *((_QWORD *)this + 3);
  v46[0] = CMILMatrix::Identity;
  v46[1] = xmmword_1801EAD20;
  v11 = *(_DWORD *)(v10 + 1104) >= 2;
  v46[2] = xmmword_1801EAD30;
  v46[3] = xmmword_1801EAD40;
  CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 536), (struct CMILMatrix *)v44);
  if ( v11 )
  {
    v12 = *((_QWORD *)this + 56);
    if ( v12 )
    {
      LocalToWorldTransform = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v12 + 216LL))(
                                v12,
                                &v53);
      v4 = LocalToWorldTransform;
      if ( LocalToWorldTransform < 0 )
      {
        v41 = 7437;
LABEL_59:
        v30 = LocalToWorldTransform;
        goto LABEL_60;
      }
      CMILMatrix::Translate((CMILMatrix *)v46, (float)-(int)v53, (float)-HIDWORD(v53), 0.0);
    }
  }
  v52 = v45;
  *(_OWORD *)v48 = v44[0];
  v49 = v44[1];
  v50 = v44[2];
  v51 = v44[3];
  LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                            (int)a2,
                            (int)v44,
                            (unsigned __int64)v46 & -(__int64)v11,
                            (int)v42,
                            (__int64)v48,
                            this);
  v4 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
  {
    v41 = 7453;
    goto LABEL_59;
  }
  if ( !CDrawingContext::IsDirectRenderingToDisplayRenderTarget(this) )
    goto LABEL_2;
  if ( *((_BYTE *)this + 6325) )
    goto LABEL_2;
  if ( CDrawingContext::IsInLayer(v14) )
    goto LABEL_2;
  if ( !LOBYTE(v42[0]) )
    goto LABEL_2;
  v56 = 0LL;
  PreviousFrameVisibleRegion = CVisual::GetPreviousFrameVisibleRegion(a2, this);
  if ( !PreviousFrameVisibleRegion )
    goto LABEL_2;
  BYTE1(v42[0]) = 0;
  if ( CWindowNode::GetWindowNodeDirtyRects(a2, &v53, &v42[1], &v56)
    && *(_QWORD *)(*((_QWORD *)this + 3) + 352LL) == v53 )
  {
    v15 = 0;
    if ( v42[1] )
    {
      while ( 1 )
      {
        LocalToWorldTransform = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                                  this,
                                  (char *)v56 + 16 * v15,
                                  v48,
                                  PreviousFrameVisibleRegion);
        v4 = LocalToWorldTransform;
        if ( LocalToWorldTransform < 0 )
          break;
        if ( ++v15 >= v42[1] )
          goto LABEL_22;
      }
      v41 = 7497;
      goto LABEL_59;
    }
  }
LABEL_22:
  LocalToWorldTransform = CDwmMetaRegion::GetMaxRectFromRegion(PreviousFrameVisibleRegion, (char *)v42 + 1, &v53);
  v4 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
  {
    v41 = 7503;
    goto LABEL_59;
  }
  if ( BYTE1(v42[0]) )
  {
    MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(a2, this);
    LOBYTE(v17) = 1;
    v18 = *((_DWORD *)MoveRenderPassInfoRef + 15);
    CScopedClipStack::GetTopGpuClipInScope((char *)this + 912, v17, &v56);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xff(v19, (unsigned int)&MILEVENT_MEDIA_UCE_WINDOW_MOVE_DETECTED, (_DWORD)a2, v20, v18);
    v21 = *(float *)&v53;
    if ( *(float *)&v56 > *(float *)&v53 )
    {
      v21 = *(float *)&v56;
      LODWORD(v53) = (_DWORD)v56;
    }
    v22 = *((float *)&v53 + 1);
    if ( *((float *)&v56 + 1) > *((float *)&v53 + 1) )
    {
      v22 = *((float *)&v56 + 1);
      HIDWORD(v53) = HIDWORD(v56);
    }
    v23 = v54;
    if ( v54 > v57 )
    {
      v23 = v57;
      v54 = v57;
    }
    v24 = v55;
    if ( v55 > v58 )
    {
      v24 = v58;
      v55 = v58;
    }
    if ( v23 > v21 && v24 > v22 )
    {
      SetLastError(0);
      RectRgn = CreateRectRgn(0, 0, 0, 0);
      if ( !RectRgn )
      {
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        if ( v4 >= 0 )
          v4 = CheckGUIHandleQuota(v28, v27, v29);
        v41 = 7526;
LABEL_45:
        v30 = v4;
LABEL_60:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, v41);
        goto LABEL_2;
      }
      SetLastError(0);
      if ( !CombineRgn(RectRgn, RectRgn, PreviousFrameVisibleRegion, 2) )
      {
        v31 = GetLastError();
        v4 = v31;
        if ( v31 > 0 )
          v4 = (unsigned __int16)v31 | 0x80070000;
        if ( v4 >= 0 )
          v4 = CheckGUIHandleQuota(v33, v32, v34);
        v41 = 7531;
        goto LABEL_45;
      }
      v35 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 56) + 224LL))(*((_QWORD *)this + 56));
      v38 = MoveOptimizationInfo::Create((_DWORD)a2, v36, v37, (unsigned int)&v53, (__int64)RectRgn, v35, (__int64)&v43);
      v39 = v43;
      v4 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x1D75u);
      }
      else
      {
        v40 = CDrawingContext::CombineMove(this, v43, &v56);
        v4 = v40;
        if ( v40 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x1D7Bu);
      }
      if ( v39 )
        CMILCOMBase::InternalRelease(v39);
    }
  }
LABEL_2:
  if ( a4 )
    *a4 = v42[0];
  if ( PreviousFrameVisibleRegion )
    DeleteObject(PreviousFrameVisibleRegion);
  return (unsigned int)v4;
}
