/*
 * XREFs of ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B7D20
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180108D20 (-Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x180044B58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800677D4 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800947D4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180094814 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x1800AD24C (-ReleaseDrawingContext@CRenderTarget@@IEAAXXZ.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800AD350 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x1800F3A4C (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F3BB4 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800F7A40 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x1800F91D0 (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 *     ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x180100F4C (-MagnifierSetExclude@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(COffScreenRenderTarget *this, __int64 a2, bool *a3)
{
  int v4; // esi
  char v5; // r14
  CRenderTarget *v6; // r15
  int v7; // eax
  int v8; // eax
  int DrawingContext; // eax
  CVisualGroup *v10; // rcx
  __int64 v11; // r13
  int v12; // eax
  float v13; // xmm4_4
  CTransform3D *v14; // rcx
  __int64 v15; // r13
  float v16; // xmm1_4
  const struct CMILMatrix *Matrix; // rax
  __int128 v18; // xmm13
  __int128 v19; // xmm14
  __int128 v20; // xmm0
  __int128 v21; // xmm15
  float v22; // xmm7_4
  float v23; // xmm8_4
  float v24; // xmm9_4
  float v25; // xmm10_4
  float v26; // xmm11_4
  float v27; // xmm12_4
  float v28; // xmm6_4
  float v29; // xmm6_4
  float v30; // xmm4_4
  float v31; // xmm5_4
  int v32; // eax
  int v33; // r14d
  float v34; // eax
  int v35; // eax
  float v36; // esi
  unsigned int v37; // eax
  int v38; // eax
  struct CVisualTree *v39; // rdx
  BOOL v40; // eax
  int v41; // eax
  __int16 v42; // ax
  CVisualGroup *v43; // rcx
  __int64 v45; // [rsp+30h] [rbp-D8h]
  __int16 v46; // [rsp+68h] [rbp-A0h]
  char v47; // [rsp+6Ah] [rbp-9Eh]
  unsigned int v48; // [rsp+6Ch] [rbp-9Ch] BYREF
  float v49[2]; // [rsp+70h] [rbp-98h] BYREF
  struct CDrawingContext *v50; // [rsp+78h] [rbp-90h] BYREF
  struct IRenderTarget *v51; // [rsp+80h] [rbp-88h] BYREF
  COcclusionContext *v52; // [rsp+88h] [rbp-80h] BYREF
  __int128 v53; // [rsp+90h] [rbp-78h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-60h]
  __int128 v55; // [rsp+B8h] [rbp-50h]
  __int128 v56; // [rsp+C8h] [rbp-40h]
  __int128 v57; // [rsp+D8h] [rbp-30h]
  __int128 v58; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v59[4]; // [rsp+F8h] [rbp-10h] BYREF

  *a3 = 0;
  v4 = 0;
  v50 = 0LL;
  v5 = 0;
  v46 = 0;
  v53 = _xmm;
  if ( *((_BYTE *)this + 216) )
  {
    v6 = (COffScreenRenderTarget *)((char *)this - 40);
    v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 5) + 200LL))((char *)this - 40);
    v4 = v7;
    if ( v7 >= 0 )
    {
      if ( !*((_DWORD *)this + 40) )
        return (unsigned int)v4;
      CComposition::ShowHideCursors(*((CComposition **)this - 3), *((_BYTE *)this + 128) != 0);
      v8 = CVisualTree::PreCompute(*((CVisualTree **)this + 2), 0LL);
      v4 = v8;
      if ( v8 >= 0 )
      {
        DrawingContext = CRenderTarget::GetDrawingContext(v6, &v50);
        v4 = DrawingContext;
        if ( DrawingContext >= 0 )
        {
          v10 = (CVisualGroup *)*((_QWORD *)this + 33);
          if ( v10 )
          {
            CVisualGroup::SetExcludeSubtree(v10, 1);
            LOBYTE(v46) = 1;
          }
          if ( *((_BYTE *)this + 129) )
          {
            CComposition::MagnifierSetExclude(*((CComposition **)this - 3), 1);
            HIBYTE(v46) = 1;
          }
          *(_BYTE *)(*((_QWORD *)this - 3) + 1136LL) = 1;
          v11 = *((_QWORD *)this + 2);
          if ( v11 )
          {
            v12 = *((_DWORD *)this + 58);
            *(_QWORD *)&v58 = 0LL;
            v13 = 0.0;
            v14 = (CTransform3D *)*((_QWORD *)this + 7);
            v15 = *(_QWORD *)(v11 + 24);
            v16 = (float)*((int *)this + 59);
            *((float *)&v58 + 2) = (float)v12;
            *((float *)&v58 + 3) = v16;
            if ( v14 )
            {
              Matrix = CTransform3D::GetMatrix(v14, (const struct D2D_SIZE_F *)(v15 + 132));
              v18 = *(_OWORD *)Matrix;
              v19 = *((_OWORD *)Matrix + 1);
              v20 = *((_OWORD *)Matrix + 3);
              v21 = *((_OWORD *)Matrix + 2);
              v54 = *(_OWORD *)Matrix;
              v22 = *((float *)&v54 + 3);
              v23 = *((float *)&v54 + 1);
              v24 = *(float *)&v54;
              v55 = v19;
              v25 = *((float *)&v19 + 3);
              v26 = *((float *)&v19 + 1);
              v27 = *(float *)&v19;
              v57 = v20;
              v13 = *((float *)&v20 + 1);
              v28 = *(float *)&v20;
            }
            else
            {
              v25 = 0.0;
              v26 = FLOAT_1_0;
              v24 = FLOAT_1_0;
              *(_QWORD *)&v56 = 0LL;
              v27 = 0.0;
              v22 = 0.0;
              DWORD2(v57) = 0;
              v23 = 0.0;
              v28 = 0.0;
              *(_QWORD *)((char *)&v55 + 4) = LODWORD(FLOAT_1_0);
              *(float *)&v54 = FLOAT_1_0;
              HIDWORD(v55) = 0;
              LODWORD(v55) = 0;
              v19 = v55;
              HIDWORD(v54) = 0;
              *(_QWORD *)((char *)&v54 + 4) = 0LL;
              v18 = LODWORD(FLOAT_1_0);
              *((_QWORD *)&v56 + 1) = 1065353216LL;
              v21 = v56;
              *((float *)&v57 + 3) = FLOAT_1_0;
            }
            v29 = v28 + *((float *)this + 16);
            *(_QWORD *)&v57 = __PAIR64__(v13 + *((float *)this + 17), LODWORD(v29));
            if ( CVisual::GetEffectiveOffset((CVisual *)v15, (float *)&v48, v49, (float *)&v51) )
            {
              *(float *)&v57 = v29 - (float)((float)(v24 * *(float *)&v48) + (float)(v27 * v49[0]));
              *((float *)&v57 + 1) = v30 - (float)((float)(v23 * *(float *)&v48) + (float)(v26 * v49[0]));
              *((float *)&v57 + 3) = v31 - (float)((float)(v22 * *(float *)&v48) + (float)(v25 * v49[0]));
            }
            v59[3] = v57;
            v59[0] = v18;
            v59[1] = v19;
            v59[2] = v21;
            v32 = *(_DWORD *)(v15 + 76);
            *(float *)&v48 = 0.0;
            LODWORD(v49[0]) = v32 & 0x1FF;
            v33 = v32 << 17 >> 28;
            *(_DWORD *)(v15 + 76) = v32 & 0xFFFF87FD | 0x802;
            v34 = 0.0;
            if ( *((_DWORD *)this + 40) )
            {
              while ( 1 )
              {
                v47 = 0;
                v45 = *((_QWORD *)this + 6);
                v51 = *(struct IRenderTarget **)(*((_QWORD *)this + 17) + 8LL * LODWORD(v34));
                v35 = CDrawingContext::BeginFrame(v50, v51, &v53, 0, (struct D2DMatrix *)v59, v45, 0, 0LL);
                v4 = v35;
                if ( v35 < 0 )
                  break;
                v36 = *(float *)&v48;
                if ( (*(unsigned int (__fastcall **)(CRenderTarget *, _QWORD))(*(_QWORD *)v6 + 216LL))(v6, v48) )
                {
                  v37 = (*(__int64 (__fastcall **)(CRenderTarget *, _QWORD))(*(_QWORD *)v6 + 216LL))(v6, LODWORD(v36));
                  v38 = CDrawingContext::PushStereoContext(v50, v37);
                  v4 = v38;
                  if ( v38 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x193u);
                    goto LABEL_35;
                  }
                  v47 = 1;
                }
                v39 = (struct CVisualTree *)*((_QWORD *)this + 2);
                v52 = 0LL;
                CDrawingContext::CalculateOcclusion((struct CComposition **)v50, v39, 1u, (__int64)&v58, 1, 0LL, &v52);
                v40 = CDrawingContext::DrawVisualTree(
                        v50,
                        *((_QWORD *)this + 2),
                        &v58,
                        0LL,
                        0x7FFFFFFF,
                        0,
                        0,
                        1,
                        0,
                        1,
                        1);
                v4 = v40;
                if ( v40 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x1ACu);
                  goto LABEL_35;
                }
                if ( g_LockAndReadOffscreenTarget )
                  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, _QWORD))(*(_QWORD *)v51 + 168LL))(
                    v51,
                    0LL,
                    0LL);
                if ( v47 )
                {
                  v41 = CDrawingContext::PopStereoContext(v50, 0LL);
                  v4 = v41;
                  if ( v41 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x1B5u);
                    goto LABEL_35;
                  }
                }
                CDrawingContext::EndFrame(v50);
                LODWORD(v34) = v48 + 1;
                *(float *)&v48 = v34;
                if ( LODWORD(v34) >= *((_DWORD *)this + 40) )
                  goto LABEL_35;
              }
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x18Fu);
            }
LABEL_35:
            v42 = LOWORD(v49[0]);
            *(_DWORD *)(v15 + 76) &= 0xFFFF8600;
            *(_DWORD *)(v15 + 76) |= v42 & 0x1FF | ((v33 & 0xF) << 11);
          }
          *(_BYTE *)(*((_QWORD *)this - 3) + 1136LL) = 0;
          if ( HIBYTE(v46) )
            CComposition::MagnifierSetExclude(*((CComposition **)this - 3), 0);
          v5 = v46;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x132u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x130u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x118u);
    }
    v43 = (CVisualGroup *)*((_QWORD *)this + 33);
    if ( v43 && v5 )
      CVisualGroup::SetExcludeSubtree(v43, 0);
    if ( v4 < 0 )
      CRenderTarget::ReleaseDrawingContext(v6);
    CComposition::RestoreCursors(*((CComposition **)this - 3));
  }
  return (unsigned int)v4;
}
