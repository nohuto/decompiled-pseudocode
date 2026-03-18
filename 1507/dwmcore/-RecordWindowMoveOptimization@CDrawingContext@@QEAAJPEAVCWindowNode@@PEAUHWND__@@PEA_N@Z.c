/*
 * XREFs of ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180027DB0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180010268 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEAA_NXZ @ 0x1800296F4 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F15D4 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x1800F18A0 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAUHRGN__@@@Z @ 0x1800F371C (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1800F3B24 (-GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     Template_xff @ 0x1800F5084 (Template_xff.c)
 *     ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FE4E8 (-GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x180103C8C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18010417C (-GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@0PEA_N0PEAVCDrawingContext@@@Z @ 0x180104A44 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UD.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180128B0C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
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
  bool v11; // sf
  bool v12; // of
  bool v13; // r15
  __int64 v14; // rdi
  int LocalToWorldTransform; // eax
  int v16; // r9d
  CDrawingContext *v17; // rcx
  unsigned int v18; // r15d
  unsigned int v19; // edi
  int v20; // xmm7_4
  int v21; // ecx
  int v22; // r9d
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  HRGN RectRgn; // r15
  signed int LastError; // eax
  int v29; // edx
  unsigned int v30; // ecx
  int v31; // r8d
  signed int v32; // eax
  int v33; // edx
  unsigned int v34; // ecx
  int v35; // r8d
  __int64 v36; // rax
  int v37; // edx
  int v38; // r8d
  int v39; // eax
  CMILCOMBase *v40; // rdi
  int v41; // eax
  unsigned int v42; // [rsp+20h] [rbp-E0h]
  bool v43; // [rsp+40h] [rbp-C0h] BYREF
  char v44; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v45; // [rsp+44h] [rbp-BCh] BYREF
  CMILCOMBase *v46; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v47; // [rsp+50h] [rbp-B0h] BYREF
  float v48; // [rsp+58h] [rbp-A8h]
  float v49; // [rsp+5Ch] [rbp-A4h]
  struct MilRectF *v50; // [rsp+60h] [rbp-A0h] BYREF
  float v51; // [rsp+68h] [rbp-98h]
  float v52; // [rsp+6Ch] [rbp-94h]
  _DWORD v53[12]; // [rsp+70h] [rbp-90h] BYREF
  float v54; // [rsp+A0h] [rbp-60h]
  float v55; // [rsp+A4h] [rbp-5Ch]
  int v56; // [rsp+A8h] [rbp-58h]
  int v57; // [rsp+ACh] [rbp-54h]
  int v58[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v59; // [rsp+C0h] [rbp-40h]
  __int128 v60; // [rsp+D0h] [rbp-30h]
  __int128 v61; // [rsp+E0h] [rbp-20h]
  __int64 v62[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v63; // [rsp+100h] [rbp+0h]
  __int128 v64; // [rsp+110h] [rbp+10h]
  __int128 v65; // [rsp+120h] [rbp+20h]

  v4 = 0;
  PreviousFrameVisibleRegion = 0LL;
  v46 = 0LL;
  v43 = 0;
  if ( !*((_BYTE *)this + 5936) )
    goto LABEL_2;
  v10 = *((_QWORD *)this + 3);
  v56 = 0;
  v55 = 0.0;
  v54 = 0.0;
  v53[11] = 0;
  v53[9] = 0;
  v53[8] = 0;
  v53[7] = 0;
  v53[6] = 0;
  v53[4] = 0;
  v53[3] = 0;
  v53[2] = 0;
  v53[1] = 0;
  v12 = __OFSUB__(*(_DWORD *)(v10 + 1032), 2);
  v11 = *(_DWORD *)(v10 + 1032) - 2 < 0;
  v57 = 1065353216;
  v13 = v11 == v12;
  v53[10] = 1065353216;
  v53[5] = 1065353216;
  v53[0] = 1065353216;
  CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 456), (struct CBaseMatrix *)v58);
  if ( v13 )
  {
    v14 = *((_QWORD *)this + 46);
    if ( v14 )
    {
      LocalToWorldTransform = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(*(_QWORD *)v14 + 192LL))(
                                *((_QWORD *)this + 46),
                                &v47);
      v4 = LocalToWorldTransform;
      if ( LocalToWorldTransform < 0 )
      {
        v42 = 7406;
LABEL_12:
        v16 = LocalToWorldTransform;
LABEL_15:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v42);
        goto LABEL_2;
      }
      v54 = (float)-(int)v47 + 0.0;
      v55 = (float)-HIDWORD(v47) + 0.0;
    }
  }
  *(_OWORD *)v62 = *(_OWORD *)v58;
  v63 = v59;
  v64 = v60;
  v65 = v61;
  LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                            (int)a2,
                            (int)v58,
                            (unsigned __int64)v53 & -(__int64)v13,
                            (int)&v43,
                            (__int64)v62,
                            this);
  v4 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
  {
    v42 = 7422;
    goto LABEL_12;
  }
  if ( !CDrawingContext::IsDirectRenderingToDisplayRenderTarget(this) )
    goto LABEL_2;
  if ( *((_BYTE *)this + 5601) )
    goto LABEL_2;
  if ( CDrawingContext::IsInLayer(v17) )
    goto LABEL_2;
  if ( !v43 )
    goto LABEL_2;
  v50 = 0LL;
  PreviousFrameVisibleRegion = CVisual::GetPreviousFrameVisibleRegion(a2, this);
  if ( !PreviousFrameVisibleRegion )
    goto LABEL_2;
  v44 = 0;
  if ( CWindowNode::GetWindowNodeDirtyRects(a2, &v47, &v45, &v50) && *(_QWORD *)(*((_QWORD *)this + 3) + 352LL) == v47 )
  {
    v18 = v45;
    v19 = 0;
    if ( v45 )
    {
      while ( 1 )
      {
        LocalToWorldTransform = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                                  this,
                                  (char *)v50 + 16 * v19,
                                  v62,
                                  PreviousFrameVisibleRegion);
        v4 = LocalToWorldTransform;
        if ( LocalToWorldTransform < 0 )
          break;
        if ( ++v19 >= v18 )
          goto LABEL_29;
      }
      v42 = 7466;
      goto LABEL_12;
    }
  }
LABEL_29:
  LocalToWorldTransform = CDwmMetaRegion::GetMaxRectFromRegion(PreviousFrameVisibleRegion, &v44, &v47);
  v4 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
  {
    v42 = 7472;
    goto LABEL_12;
  }
  if ( v44 )
  {
    v20 = *((_DWORD *)CVisual::GetMoveRenderPassInfoRef(a2, this) + 15);
    CScopedClipStack::GetTopClipBoundsInScope((char *)this + 680, &v50);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xff(v21, (unsigned int)&MILEVENT_MEDIA_UCE_WINDOW_MOVE_DETECTED, (_DWORD)a2, v22, v20);
    v23 = *(float *)&v47;
    if ( *(float *)&v50 > *(float *)&v47 )
    {
      v23 = *(float *)&v50;
      LODWORD(v47) = (_DWORD)v50;
    }
    v24 = *((float *)&v47 + 1);
    if ( *((float *)&v50 + 1) > *((float *)&v47 + 1) )
    {
      v24 = *((float *)&v50 + 1);
      HIDWORD(v47) = HIDWORD(v50);
    }
    v25 = v48;
    if ( v48 > v51 )
    {
      v25 = v51;
      v48 = v51;
    }
    v26 = v49;
    if ( v49 > v52 )
    {
      v26 = v52;
      v49 = v52;
    }
    if ( v25 > v23 && v26 > v24 )
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
          v4 = CheckGUIHandleQuota(v30, v29, v31);
        v42 = 7495;
LABEL_14:
        v16 = v4;
        goto LABEL_15;
      }
      SetLastError(0);
      if ( !CombineRgn(RectRgn, RectRgn, PreviousFrameVisibleRegion, 2) )
      {
        v32 = GetLastError();
        v4 = v32;
        if ( v32 > 0 )
          v4 = (unsigned __int16)v32 | 0x80070000;
        if ( v4 >= 0 )
          v4 = CheckGUIHandleQuota(v34, v33, v35);
        v42 = 7500;
        goto LABEL_14;
      }
      v36 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 46) + 200LL))(*((_QWORD *)this + 46));
      v39 = MoveOptimizationInfo::Create((_DWORD)a2, v37, v38, (unsigned int)&v47, (__int64)RectRgn, v36, (__int64)&v46);
      v40 = v46;
      v4 = v39;
      if ( v39 >= 0 )
      {
        v41 = CDrawingContext::CombineMove(this, v46, &v50);
        v4 = v41;
        if ( v41 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x1D5Cu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x1D56u);
      }
      if ( v40 )
        CMILCOMBase::InternalRelease(v40);
    }
  }
LABEL_2:
  if ( a4 )
    *a4 = v43;
  if ( PreviousFrameVisibleRegion )
    DeleteObject(PreviousFrameVisibleRegion);
  return (unsigned int)v4;
}
