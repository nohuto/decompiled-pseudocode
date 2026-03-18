/*
 * XREFs of ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800EEA90 (-Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ @ 0x18001AEB0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x18002F32C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x180058508 (-ReleaseDrawingContext@CRenderTarget@@IEAAXXZ.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x180058584 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAAJAEBQEAUMilVisualRenderParameter@@@Z @ 0x18005FD10 (-Push@-$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAAJAEBQEAUMilVisualRenderPara.c)
 *     ?PopRenderParameter@CComposition@@QEAAJW4Enum@MilVisualRenderParameterType@@@Z @ 0x180067ED4 (-PopRenderParameter@CComposition@@QEAAJW4Enum@MilVisualRenderParameterType@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800DCD90 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F3C80 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x1800F42BC (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?AddRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z @ 0x180106DA8 (-AddRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z.c)
 *     ?RemoveRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z @ 0x1801071D8 (-RemoveRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(COffScreenRenderTarget *this, __int64 a2, bool *a3)
{
  unsigned int v5; // edi
  CVisual *v6; // r13
  char v7; // r15
  int v8; // r14d
  char *v9; // r12
  int v10; // eax
  unsigned int v11; // ebx
  float v12; // edx
  struct CVisualTree *v13; // rcx
  int v14; // eax
  int DrawingContext; // eax
  CVisualGroup *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  float v25; // xmm4_4
  CTransform3D *v26; // rcx
  float v27; // xmm1_4
  const struct CMILMatrix *Matrix; // rax
  __int128 v29; // xmm13
  __int128 v30; // xmm14
  __int128 v31; // xmm0
  __int128 v32; // xmm15
  float v33; // xmm7_4
  float v34; // xmm8_4
  float v35; // xmm9_4
  float v36; // xmm10_4
  float v37; // xmm11_4
  float v38; // xmm12_4
  float v39; // xmm6_4
  float v40; // xmm6_4
  float v41; // xmm4_4
  float v42; // xmm5_4
  unsigned int v43; // r15d
  int v44; // r14d
  unsigned int v45; // eax
  CDrawingContext *v46; // r14
  __int64 v47; // rax
  int v48; // eax
  unsigned int v49; // eax
  int v50; // eax
  char v51; // bl
  int v52; // eax
  int v53; // eax
  char v54; // bl
  __int64 v55; // r9
  int v56; // eax
  int v57; // r9d
  CVisualGroup *v58; // rcx
  int v59; // eax
  __int64 v61; // [rsp+30h] [rbp-D8h]
  float v62; // [rsp+6Ch] [rbp-9Ch] BYREF
  float v63[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v64; // [rsp+78h] [rbp-90h] BYREF
  struct CDrawingContext *v65; // [rsp+80h] [rbp-88h] BYREF
  __int128 v66; // [rsp+88h] [rbp-80h] BYREF
  __int128 v67; // [rsp+98h] [rbp-70h]
  __int128 v68; // [rsp+A8h] [rbp-60h]
  __int128 v69; // [rsp+B8h] [rbp-50h]
  __int128 v70; // [rsp+C8h] [rbp-40h]
  float v71[4]; // [rsp+D8h] [rbp-30h] BYREF
  char v72; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v73[7]; // [rsp+E9h] [rbp-1Fh] BYREF
  int v74; // [rsp+F0h] [rbp-18h]
  __int64 v75; // [rsp+F8h] [rbp-10h]
  _DWORD v76[6]; // [rsp+120h] [rbp+18h] BYREF
  _OWORD v77[4]; // [rsp+138h] [rbp+30h] BYREF

  v65 = 0LL;
  v72 = 0;
  v5 = 0;
  v6 = 0LL;
  memset_0(v73, 0, 0x37uLL);
  v7 = 0;
  *a3 = 0;
  LOBYTE(v8) = 0;
  v66 = _xmm;
  BYTE2(v63[0]) = 0;
  LOBYTE(v63[0]) = 0;
  v62 = 0.0;
  if ( !*((_BYTE *)this + 240) )
    return v5;
  v9 = (char *)this - 40;
  v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 5) + 192LL))((char *)this - 40);
  v11 = 0;
  v5 = v10;
  if ( v10 >= 0 )
  {
    if ( !*((_DWORD *)this + 46) )
      return v5;
    v13 = (struct CVisualTree *)*((_QWORD *)this + 2);
    v72 |= 4u;
    v75 = 0LL;
    v74 = 1;
    v14 = CVisualTree::PreCompute(v13, 0LL);
    v5 = v14;
    if ( v14 >= 0 )
    {
      DrawingContext = CRenderTarget::GetDrawingContext((COffScreenRenderTarget *)((char *)this - 40), &v65);
      v5 = DrawingContext;
      if ( DrawingContext >= 0 )
      {
        v16 = (CVisualGroup *)*((_QWORD *)this + 36);
        if ( v16 )
        {
          v17 = CVisualGroup::AddRenderParameters(v16, (struct VisualContextualizedOpacityData *)&v72);
          v5 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x12Fu);
            goto LABEL_4;
          }
          LOBYTE(v63[0]) = 1;
        }
        if ( *((_DWORD *)this + 38) )
        {
          while ( 1 )
          {
            v18 = *((_QWORD *)this + 16);
            v19 = *(int *)(v18 + 24LL * v11) + 27LL;
            v64 = v18 + 24LL * v11;
            v20 = CWatermarkStack<MilVisualRenderParameter *,8,2,4>::Push(
                    (unsigned int *)(*((_QWORD *)this - 3) + 32 * v19),
                    &v64);
            v5 = v20;
            if ( v20 < 0 )
              break;
            if ( ++v11 >= *((_DWORD *)this + 38) )
              goto LABEL_17;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x13Au);
          LOWORD(v12) = 0;
          goto LABEL_44;
        }
LABEL_17:
        v21 = *((_QWORD *)this - 3);
        BYTE2(v63[0]) = 1;
        v76[0] = 0;
        v76[1] = 1;
        v64 = (__int64)v76;
        v22 = CWatermarkStack<MilVisualRenderParameter *,8,2,4>::Push((unsigned int *)(v21 + 864), &v64);
        v5 = v22;
        if ( v22 >= 0 )
        {
          v23 = *((_QWORD *)this + 2);
          v7 = 1;
          if ( v23 )
          {
            v6 = *(CVisual **)(v23 + 24);
            v24 = *((_DWORD *)this + 64);
            v71[0] = 0.0;
            v25 = 0.0;
            v71[1] = 0.0;
            v26 = (CTransform3D *)*((_QWORD *)this + 7);
            v27 = (float)*((int *)this + 65);
            v71[2] = (float)v24;
            v71[3] = v27;
            if ( v26 )
            {
              Matrix = CTransform3D::GetMatrix(v26);
              v29 = *(_OWORD *)Matrix;
              v30 = *((_OWORD *)Matrix + 1);
              v31 = *((_OWORD *)Matrix + 3);
              v32 = *((_OWORD *)Matrix + 2);
              v67 = *(_OWORD *)Matrix;
              v33 = *((float *)&v67 + 3);
              v34 = *((float *)&v67 + 1);
              v35 = *(float *)&v67;
              v68 = v30;
              v36 = *((float *)&v30 + 3);
              v37 = *((float *)&v30 + 1);
              v38 = *(float *)&v30;
              v70 = v31;
              v25 = *((float *)&v31 + 1);
              v39 = *(float *)&v31;
            }
            else
            {
              v36 = 0.0;
              v37 = FLOAT_1_0;
              v35 = FLOAT_1_0;
              *(_QWORD *)&v69 = 0LL;
              v38 = 0.0;
              v33 = 0.0;
              DWORD2(v70) = 0;
              v34 = 0.0;
              v39 = 0.0;
              *(_QWORD *)((char *)&v68 + 4) = LODWORD(FLOAT_1_0);
              *(float *)&v67 = FLOAT_1_0;
              HIDWORD(v68) = 0;
              LODWORD(v68) = 0;
              v30 = v68;
              HIDWORD(v67) = 0;
              *(_QWORD *)((char *)&v67 + 4) = 0LL;
              v29 = LODWORD(FLOAT_1_0);
              *((_QWORD *)&v69 + 1) = 1065353216LL;
              v32 = v69;
              *((float *)&v70 + 3) = FLOAT_1_0;
            }
            v40 = v39 + *((float *)this + 16);
            *(_QWORD *)&v70 = __PAIR64__(v25 + *((float *)this + 17), LODWORD(v40));
            if ( CVisual::GetEffectiveOffset(v6, &v63[1], &v62, (float *)&v64) )
            {
              *(float *)&v70 = v40 - (float)((float)(v35 * v63[1]) + (float)(v38 * v62));
              *((float *)&v70 + 1) = v41 - (float)((float)(v34 * v63[1]) + (float)(v37 * v62));
              *((float *)&v70 + 3) = v42 - (float)((float)(v33 * v63[1]) + (float)(v36 * v62));
            }
            v43 = 0;
            v77[3] = v70;
            v77[0] = v29;
            v77[1] = v30;
            v77[2] = v32;
            v44 = *((_DWORD *)v6 + 23);
            LODWORD(v12) = v44 & 0x1FFF;
            v45 = v44 & 0xFFF87FEF | 0x8010;
            v8 = v44 << 13 >> 28;
            *((_DWORD *)v6 + 23) = v45;
            v62 = v12;
            LODWORD(v63[1]) = v8;
            if ( *((_DWORD *)this + 46) )
            {
              v46 = v65;
              while ( 1 )
              {
                v47 = *((_QWORD *)this + 20);
                BYTE1(v63[0]) = 0;
                v61 = *((_QWORD *)this + 6);
                v65 = *(struct CDrawingContext **)(v47 + 8LL * v43);
                v48 = CDrawingContext::BeginFrame(v46, v65, &v66, 0, (struct D2DMatrix *)v77, v61, 0, 0LL);
                v5 = v48;
                if ( v48 < 0 )
                  break;
                if ( (*(unsigned int (__fastcall **)(char *, _QWORD))(*(_QWORD *)v9 + 208LL))((char *)this - 40, v43) )
                {
                  v49 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v9 + 208LL))((char *)this - 40, v43);
                  v50 = CDrawingContext::PushStereoContext(v46, v49, 0LL);
                  v5 = v50;
                  if ( v50 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x191u);
                    goto LABEL_42;
                  }
                  BYTE1(v63[0]) = 1;
                }
                v51 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 216LL))((char *)this - 40);
                if ( v51 )
                {
                  v64 = 0LL;
                  CDrawingContext::CalculateOcclusion(
                    (struct CComposition **)v46,
                    *((struct CVisualTree **)this + 2),
                    1u,
                    (const struct MilRectF *)v71,
                    1,
                    0LL,
                    &v64);
                }
                v52 = CDrawingContext::DrawVisualTree(
                        v46,
                        *((_QWORD *)this + 2),
                        v71,
                        0LL,
                        0x7FFFFFFF,
                        0,
                        0,
                        v51,
                        0,
                        1,
                        1);
                v5 = v52;
                if ( v52 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x1AEu);
                  goto LABEL_42;
                }
                if ( g_LockAndReadOffscreenTarget )
                  (*(void (__fastcall **)(struct CDrawingContext *, _QWORD, _QWORD))(*(_QWORD *)v65 + 168LL))(
                    v65,
                    0LL,
                    0LL);
                if ( BYTE1(v63[0]) )
                {
                  v53 = CDrawingContext::PopStereoContext(v46, 0LL);
                  v5 = v53;
                  if ( v53 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x1B7u);
                    goto LABEL_42;
                  }
                }
                CDrawingContext::EndFrame(v46);
                if ( ++v43 >= *((_DWORD *)this + 46) )
                  goto LABEL_42;
              }
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x18Du);
LABEL_42:
              LOBYTE(v8) = LOBYTE(v63[1]);
              LOWORD(v12) = LOWORD(v62);
            }
            v7 = 1;
            goto LABEL_44;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x145u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x128u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x126u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x117u);
  }
LABEL_4:
  LOWORD(v12) = 0;
LABEL_44:
  v54 = LOBYTE(v63[0]);
  while ( 1 )
  {
    if ( v6 )
    {
      *((_DWORD *)v6 + 23) &= 0xFFF86000;
      *((_DWORD *)v6 + 23) |= LOWORD(v12) & 0x1FFF | ((v8 & 0xF) << 15);
    }
    if ( v7 )
      CComposition::PopRenderParameter(*((_QWORD *)this - 3), 0);
    if ( BYTE2(v63[0]) )
    {
      v55 = 0LL;
      if ( *((_DWORD *)this + 38) )
      {
        while ( 1 )
        {
          v56 = CComposition::PopRenderParameter(*((_QWORD *)this - 3), *(_DWORD *)(*((_QWORD *)this + 16) + 24 * v55));
          v5 = v56;
          if ( v56 < 0 )
            break;
          v55 = (unsigned int)(v57 + 1);
          if ( (unsigned int)v55 >= *((_DWORD *)this + 38) )
            goto LABEL_53;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x1DAu);
        goto LABEL_61;
      }
    }
LABEL_53:
    v58 = (CVisualGroup *)*((_QWORD *)this + 36);
    if ( !v58 || !v54 )
      break;
    v59 = CVisualGroup::RemoveRenderParameters(v58, (struct VisualContextualizedOpacityData *)&v72);
    v5 = v59;
    if ( v59 >= 0 )
      return v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x1E3u);
LABEL_61:
    LOWORD(v12) = LOWORD(v62);
  }
  if ( (v5 & 0x80000000) != 0 )
    CRenderTarget::ReleaseDrawingContext((COffScreenRenderTarget *)((char *)this - 40));
  return v5;
}
