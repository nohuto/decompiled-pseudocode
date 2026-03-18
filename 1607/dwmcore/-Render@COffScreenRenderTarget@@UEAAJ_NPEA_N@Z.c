/*
 * XREFs of ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18011F7A0 (-Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800091AC (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18000CD9C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18000CDD0 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180023F98 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x180058E78 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x18006D184 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x1800B828C (-ReleaseDrawingContext@CRenderTarget@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x180107730 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010788C (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801098AC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x18010E09C (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 *     ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x180116B7C (-MagnifierSetExclude@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(COffScreenRenderTarget *this, __int64 a2, bool *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  char v6; // r14
  char v7; // r13
  int v8; // r15d
  CRenderTarget *v9; // r12
  int v10; // eax
  int v11; // eax
  int DrawingContext; // eax
  CVisualGroup *v13; // rcx
  __int64 v14; // rsi
  int v15; // eax
  CTransform3D *v16; // rcx
  D3DVALUE v17; // xmm1_4
  const struct CMILMatrix *Matrix; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // r13
  int v23; // r15d
  float v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  struct CVisualTree *v28; // rdx
  char v29; // al
  int v30; // eax
  int v31; // eax
  CVisualGroup *v32; // rcx
  __int64 v34; // [rsp+28h] [rbp-D8h]
  char v35; // [rsp+60h] [rbp-A0h]
  char v36; // [rsp+61h] [rbp-9Fh]
  char v37; // [rsp+62h] [rbp-9Eh]
  float v38; // [rsp+64h] [rbp-9Ch] BYREF
  struct CDrawingContext *v39; // [rsp+68h] [rbp-98h] BYREF
  struct IRenderTarget *v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  __int128 v42; // [rsp+80h] [rbp-80h] BYREF
  __int128 v43; // [rsp+90h] [rbp-70h]
  __int128 v44; // [rsp+A0h] [rbp-60h]
  __int128 v45; // [rsp+B0h] [rbp-50h]
  int v46; // [rsp+C0h] [rbp-40h]
  __int128 v47; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v48[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v49; // [rsp+120h] [rbp+20h]
  struct _D3DCOLORVALUE v50; // [rsp+130h] [rbp+30h] BYREF

  *a3 = 0;
  v4 = 0;
  v39 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v37 = 0;
  LOBYTE(v8) = 0;
  v35 = 0;
  v47 = _xmm;
  v38 = 0.0;
  if ( !*((_BYTE *)this + 216) )
    return v4;
  v9 = (COffScreenRenderTarget *)((char *)this - 112);
  v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 14) + 208LL))((char *)this - 112);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x11Au);
    LOBYTE(v24) = LOBYTE(v38);
    goto LABEL_28;
  }
  if ( !*((_DWORD *)this + 40) )
    return v4;
  v6 = 1;
  CComposition::ShowHideCursors(*((CComposition **)this - 12), *((_BYTE *)this + 128) != 0);
  v11 = CVisualTree::PreCompute(*((CVisualTree **)this + 2));
  v4 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x132u);
  }
  else
  {
    DrawingContext = CRenderTarget::GetDrawingContext(v9, &v39);
    v4 = DrawingContext;
    if ( DrawingContext >= 0 )
    {
      v13 = (CVisualGroup *)*((_QWORD *)this + 33);
      if ( v13 )
      {
        CVisualGroup::SetExcludeSubtree(v13, 1);
        v37 = 1;
      }
      if ( *((_BYTE *)this + 129) )
      {
        CComposition::MagnifierSetExclude(*((CComposition **)this - 12), 1);
        v7 = 1;
        v35 = 1;
      }
      *(_BYTE *)(*((_QWORD *)this - 12) + 1240LL) = 1;
      v14 = *((_QWORD *)this + 2);
      if ( !v14 )
      {
LABEL_31:
        *(_BYTE *)(*((_QWORD *)this - 12) + 1240LL) = 0;
LABEL_32:
        if ( v7 )
          CComposition::MagnifierSetExclude(*((CComposition **)this - 12), 0);
        goto LABEL_34;
      }
      v15 = *((_DWORD *)this + 58);
      v50.r = 0.0;
      v50.g = 0.0;
      v16 = (CTransform3D *)*((_QWORD *)this + 7);
      v5 = *(_QWORD *)(v14 + 24);
      v46 = 0;
      v17 = (float)*((int *)this + 59);
      v50.b = (float)v15;
      v50.a = v17;
      if ( v16 )
      {
        Matrix = CTransform3D::GetMatrix(v16, (const struct D2D_SIZE_F *)(v5 + 192));
        v19 = *((_OWORD *)Matrix + 1);
        v42 = *(_OWORD *)Matrix;
        v20 = *((_OWORD *)Matrix + 2);
        v43 = v19;
        v21 = *((_OWORD *)Matrix + 3);
        LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
        v44 = v20;
        v45 = v21;
        v46 = (int)Matrix;
      }
      else
      {
        v42 = _xmm;
        LOWORD(v46) = 32085;
        v43 = _xmm;
        v44 = _xmm;
        v45 = _xmm;
      }
      CMILMatrix::Translate((CMILMatrix *)&v42, *((float *)this + 16), *((float *)this + 17), 0.0);
      if ( CVisual::GetEffectiveOffset((CVisual *)v5, (float *)&v40, &v38, (float *)&v41) )
        CMILMatrix::PrependTranslate(
          (CMILMatrix *)&v42,
          COERCE_FLOAT((unsigned int)v40 ^ _xmm),
          COERCE_FLOAT(LODWORD(v38) ^ _xmm),
          0.0);
      v22 = 0LL;
      v48[0] = v42;
      v48[1] = v43;
      v49 = v46;
      v48[2] = v44;
      v48[3] = v45;
      v23 = *(_DWORD *)(v5 + 156);
      *(_BYTE *)(v5 + 156) |= 2u;
      *(_DWORD *)(v5 + 156) &= 0xFFFFC7FF;
      *(_DWORD *)(v5 + 156) |= 0x400u;
      LODWORD(v24) = (unsigned __int8)v23;
      v8 = v23 << 18 >> 28;
      v38 = v24;
      if ( *((_DWORD *)this + 40) )
      {
        while ( 1 )
        {
          v36 = 0;
          v34 = *((_QWORD *)this + 6);
          v40 = *(struct IRenderTarget **)(*((_QWORD *)this + 17) + 8 * v22);
          v25 = CDrawingContext::BeginFrame(v39, v40, &v47, 0, (__int64)v48, v34, 0, 0LL);
          v4 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x18Eu);
            goto LABEL_26;
          }
          if ( (*(unsigned int (__fastcall **)(CRenderTarget *, _QWORD))(*(_QWORD *)v9 + 224LL))(v9, (unsigned int)v22) )
          {
            v26 = (*(__int64 (__fastcall **)(CRenderTarget *, _QWORD))(*(_QWORD *)v9 + 224LL))(v9, (unsigned int)v22);
            v27 = CDrawingContext::PushStereoContext(v39, v26);
            v4 = v27;
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x192u);
              goto LABEL_26;
            }
            v36 = 1;
          }
          v28 = (struct CVisualTree *)*((_QWORD *)this + 2);
          v41 = 0LL;
          CDrawingContext::CalculateOcclusion(v39, v28, 1u, (__int64)&v50, 1, &v41);
          v29 = (*(__int64 (__fastcall **)(CRenderTarget *))(*(_QWORD *)v9 + 232LL))(v9);
          v30 = CDrawingContext::DrawVisualTree(v39, *((_QWORD *)this + 2), &v50, 0LL, 0x7FFFFFFF, v29, 0, 1, 0, 1, 1);
          v4 = v30;
          if ( v30 < 0 )
            break;
          if ( g_LockAndReadOffscreenTarget )
            (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, _QWORD))(*(_QWORD *)v40 + 176LL))(v40, 0LL, 0LL);
          if ( v36 )
          {
            v31 = CDrawingContext::PopStereoContext(v39, 0LL);
            v4 = v31;
            if ( v31 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x1B3u);
              goto LABEL_26;
            }
          }
          CDrawingContext::EndFrame(v39);
          v22 = (unsigned int)(v22 + 1);
          if ( (unsigned int)v22 >= *((_DWORD *)this + 40) )
            goto LABEL_26;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x1AAu);
LABEL_26:
        LOBYTE(v24) = LOBYTE(v38);
      }
      v7 = v35;
LABEL_28:
      if ( v5 )
      {
        *(_BYTE *)(v5 + 156) = LOBYTE(v24);
        *(_DWORD *)(v5 + 156) &= 0xFFFFC3FF;
        *(_DWORD *)(v5 + 156) |= (v8 & 0xF) << 10;
      }
      if ( !v6 )
        goto LABEL_32;
      goto LABEL_31;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x134u);
  }
LABEL_34:
  v32 = (CVisualGroup *)*((_QWORD *)this + 33);
  if ( v32 && v37 )
    CVisualGroup::SetExcludeSubtree(v32, 0);
  if ( (v4 & 0x80000000) != 0 )
    CRenderTarget::ReleaseDrawingContext(v9);
  CComposition::RestoreCursors(*((CComposition **)this - 12));
  return v4;
}
