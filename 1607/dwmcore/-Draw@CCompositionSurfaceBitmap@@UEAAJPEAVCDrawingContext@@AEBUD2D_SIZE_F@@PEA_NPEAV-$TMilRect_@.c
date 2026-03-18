/*
 * XREFs of ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FF20
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800513D0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x1800040A0 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x180005608 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x180005F30 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F9E0 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FB30 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FD80 (-IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1800101C0 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180010350 (-IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180093158 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x180093A70 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@UEBA?AW4SizePreference@@XZ @ 0x180093C80 (-GetSizePreference@CCompositionSurfaceBitmap@@UEBA-AW4SizePreference@@XZ.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x180093CA0 (-GetBorderColor@CCompositionSurfaceBitmap@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180097968 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x1801100D4 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x180122980 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180124000 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     Template_pppffff @ 0x180142AEC (Template_pppffff.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Draw(_QWORD *a1, __int64 a2, float *a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // r14
  char Transform; // r12
  __int64 v8; // rdx
  float v9; // xmm8_4
  float v10; // xmm10_4
  float v11; // xmm9_4
  float v12; // xmm11_4
  __int64 v13; // rax
  bool IsOverlayAssigned; // r15
  const struct CVisual *v15; // r13
  char (__fastcall *v16)(CCompositionSurfaceBitmap *); // rax
  CCompositionSurfaceBitmap *v17; // rcx
  char IsOverlayCompatible; // al
  __int64 v19; // rcx
  char v20; // bl
  bool (__fastcall *v21)(CDxHandleBitmapRealization *__hidden); // rax
  CDxHandleBitmapRealization *v22; // rcx
  bool IsOverlayRequired; // al
  const struct CMILMatrix *v24; // r15
  struct CCommandListBitmapRepresentation *v25; // rdx
  int v26; // eax
  unsigned int CurrentVisual; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  CDrawingContext *v32; // rcx
  int v33; // eax
  float v34; // xmm6_4
  float v35; // xmm7_4
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  float v40; // [rsp+40h] [rbp-C8h]
  float v41; // [rsp+48h] [rbp-C0h]
  bool v42; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v43[64]; // [rsp+68h] [rbp-A0h] BYREF
  int v44; // [rsp+A8h] [rbp-60h]
  float *v45; // [rsp+B8h] [rbp-50h] BYREF
  float v46; // [rsp+C0h] [rbp-48h]
  float v47; // [rsp+C4h] [rbp-44h]
  float *v48; // [rsp+C8h] [rbp-40h] BYREF
  float v49; // [rsp+D0h] [rbp-38h]
  float v50; // [rsp+D4h] [rbp-34h]
  struct _D3DCOLORVALUE v51; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v52[2]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v53[64]; // [rsp+F8h] [rbp-10h] BYREF

  v45 = a3;
  v4 = 0;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)a1, 0) )
  {
    v6 = (unsigned __int64)(a1 + 14);
    v44 = 0;
    Transform = CCompositionSurfaceBitmap::GetTransform((__int64)(a1 + 14), (__int64)v43, v52);
    if ( CCompositionSurfaceBitmap::BoundsFromLayoutSize((__int64)a1, v45, &v51) )
      Transform |= CCompositionSurfaceBitmap::AppendSizePreferenceTransform(a1 + 14, &v51, v43);
    if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v52) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>(v43, v52, &v48);
      CDrawingContext::EtwLogCurrentState((CDrawingContext *)a2, v8);
      v9 = v50;
      v10 = v49;
      v11 = *((float *)&v48 + 1);
      v12 = *(float *)&v48;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)(a2 + 128));
        v41 = v9 - v11;
        v40 = v10 - v12;
        Template_pppffff(v30, v29, CurrentVisual, (_DWORD)a1, (char)a1, 0, 0, SLOBYTE(v40), SLOBYTE(v41));
      }
      v13 = a1[66];
      if ( v13 && (*(_BYTE *)(v13 + 244) & 2) != 0 && *(_BYTE *)(a1[2] + 1240LL) )
      {
        v31 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)a2, (struct MilRectF *)&v48);
        v4 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x359u);
          return v4;
        }
      }
      else
      {
        v42 = 0;
        IsOverlayAssigned = 0;
        v15 = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a2 + 128));
        if ( !*(_QWORD *)(a2 + 6512)
          || ((v16 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)(v6 & -(__int64)(a1 != 0LL)) + 96LL),
               v17 = (CCompositionSurfaceBitmap *)(v6 & -(__int64)(a1 != 0LL)),
               v16 != CCompositionSurfaceBitmap::IsOverlayCompatible)
            ? (IsOverlayCompatible = v16(v17))
            : (IsOverlayCompatible = CCompositionSurfaceBitmap::IsOverlayCompatible(v17)),
              !IsOverlayCompatible
           || CDrawingContext::IsInLayer((CDrawingContext *)a2)
           || !CDrawingContext::IsDirectRenderingToDisplayRenderTarget(v32)
           || !(IsOverlayAssigned = COverlayContext::IsOverlayAssigned(
                                      *(COverlayContext **)(a2 + 6512),
                                      v15,
                                      (struct ISwapChainContent *)(v6 & -(__int64)(a1 != 0LL)),
                                      &v42))) )
        {
          v19 = a1[66];
          v20 = 1;
          if ( !v19
            || ((v21 = *(bool (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)(v19 + 112) + 72LL),
                 v22 = (CDxHandleBitmapRealization *)(v19 + 112),
                 v21 != CDxHandleBitmapRealization::IsOverlayRequired)
              ? (IsOverlayRequired = v21(v22))
              : (IsOverlayRequired = CDxHandleBitmapRealization::IsOverlayRequired(v22)),
                !IsOverlayRequired || *(_DWORD *)(a1[65] + 104LL) <= 1u) )
          {
            v24 = (const struct CMILMatrix *)v43;
            if ( !Transform )
              v24 = 0LL;
            if ( !*(_BYTE *)(a2 + 3048) && !*(_DWORD *)(a2 + 6484) )
            {
              if ( !*(_QWORD *)(a2 + 440) || !*(_QWORD *)(a2 + 6512) || *(_BYTE *)(a1[2] + 1240LL) )
                v20 = 0;
              if ( CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)a1) )
                CCompositionSurfaceInfo::SetCompositionMode(a1[65], 0, v20);
            }
            v25 = (struct CCommandListBitmapRepresentation *)(a1 + 18);
            if ( !a1 )
              v25 = 0LL;
            v26 = CDrawingContext::DrawCommandListBitmapRepresentation((const struct CComposition **)a2, v25, v24);
            v4 = v26;
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x387u);
              return v4;
            }
            goto LABEL_29;
          }
        }
        CRectanglesShape::CRectanglesShape((CRectanglesShape *)v53, (const struct MilRectF *)&v48);
        v33 = CDrawingContext::DrawOverlayArea(
                (CDrawingContext *)a2,
                (struct ISwapChainContent *)(v6 & -(__int64)(a1 != 0LL)),
                (struct CShape *)v53,
                IsOverlayAssigned,
                v42);
        v4 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x36Fu);
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v53);
          return v4;
        }
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v53);
      }
      v9 = v50;
      v10 = v49;
      v11 = *((float *)&v48 + 1);
      v12 = *(float *)&v48;
LABEL_29:
      if ( CCompositionSurfaceBitmap::BoundsFromLayoutSize((__int64)a1, v45, &v48) )
      {
        CCompositionSurfaceBitmap::GetBorderColor((CCompositionSurfaceBitmap *)(a1 + 14), &v51);
        if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(a1 + 14) )
        {
          v34 = v49;
          LODWORD(v35) = (_DWORD)v48;
          if ( v11 <= *((float *)&v48 + 1)
            || (v47 = v11,
                v45 = v48,
                v46 = v49,
                v36 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)a2, (struct MilRectF *)&v45),
                v4 = v36,
                v36 >= 0) )
          {
            if ( v50 <= v9
              || (v47 = v50,
                  v45 = (float *)__PAIR64__(LODWORD(v9), LODWORD(v35)),
                  v46 = v34,
                  v37 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)a2, (struct MilRectF *)&v45),
                  v4 = v37,
                  v37 >= 0) )
            {
              if ( v12 <= v35
                || (v47 = v9,
                    v45 = (float *)__PAIR64__(LODWORD(v11), LODWORD(v35)),
                    v46 = v12,
                    v38 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)a2, (struct MilRectF *)&v45),
                    v4 = v38,
                    v38 >= 0) )
              {
                if ( v34 > v10 && v9 > v11 )
                {
                  v47 = v9;
                  v45 = (float *)__PAIR64__(LODWORD(v11), LODWORD(v10));
                  v46 = v34;
                  v39 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)a2, (struct MilRectF *)&v45);
                  v4 = v39;
                  if ( v39 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x3C6u);
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x3B8u);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x3ACu);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x3A0u);
          }
        }
      }
    }
  }
  return v4;
}
