/*
 * XREFs of ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800299D8
 * Callers:
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011F00 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180022E20 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180022D18 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18002A1D4 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x18002F32C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180035B14 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800569F8 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800DCD90 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x1800F4178 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(struct CComposition **this, struct CVisual *a2, bool a3)
{
  unsigned int v3; // ebx
  CDrawingContext *v4; // rdi
  char v5; // r13
  int VisualTree; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char IsBounding; // al
  int v14; // eax
  const struct CVisual *v16; // rdx
  int v17; // eax
  unsigned int v18; // [rsp+28h] [rbp-99h]
  struct CVisualTree *v19; // [rsp+68h] [rbp-59h] BYREF
  float v20; // [rsp+70h] [rbp-51h] BYREF
  CDrawingContext *v21; // [rsp+78h] [rbp-49h] BYREF
  float v22; // [rsp+80h] [rbp-41h] BYREF
  float v23; // [rsp+84h] [rbp-3Dh] BYREF
  _BYTE v24[16]; // [rsp+88h] [rbp-39h] BYREF
  _BYTE v25[64]; // [rsp+98h] [rbp-29h] BYREF

  v3 = 0;
  v4 = 0LL;
  v19 = 0LL;
  v5 = 0;
  v21 = 0LL;
  if ( !a2 )
    return v3;
  v22 = 0.0;
  v20 = 0.0;
  VisualTree = CVisual::GetVisualTree(a2, &v19, a3);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x12F1u);
    goto LABEL_20;
  }
  if ( !a3 || !CVisual::GetEffectiveOffset(a2, &v22, &v20, &v23) )
  {
LABEL_4:
    v10 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1302u);
    }
    else
    {
      v11 = CVisualTree::PreCompute(v19);
      v3 = v11;
      if ( v11 < 0 )
      {
        v18 = 4868;
      }
      else
      {
        v12 = CDrawingContext::Create(this[3], &v21);
        v3 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1306u);
          v4 = v21;
          goto LABEL_16;
        }
        CBaseMatrixStack::Top((CBaseMatrixStack *)(this + 57), (struct CBaseMatrix *)v25);
        v4 = v21;
        v11 = CDrawingContext::BeginFrame(v21, this[44], (struct D2DMatrix *)v25, 0LL, 0, 0LL);
        v3 = v11;
        if ( v11 >= 0 )
        {
          *((_BYTE *)v4 + 264) = *((_BYTE *)this + 264);
          *((_DWORD *)v4 + 61) = *((_DWORD *)this + 61);
          *((_DWORD *)v4 + 62) = *((_DWORD *)this + 62);
          *((_DWORD *)v4 + 68) = *((_DWORD *)this + 68);
          *((_DWORD *)v4 + 63) = *((_DWORD *)this + 63);
          *((_DWORD *)v4 + 64) = *((_DWORD *)this + 64);
          *((_DWORD *)v4 + 65) = *((_DWORD *)this + 65);
          *((_BYTE *)v4 + 5932) = *((_BYTE *)this + 5932);
          *((_BYTE *)v4 + 5933) = *((_BYTE *)this + 5933);
          *((_BYTE *)v4 + 5934) = *((_BYTE *)this + 5934);
          *((_BYTE *)v4 + 5935) = *((_BYTE *)this + 5935);
          CDrawingContext::CalcClippedNodeWorldSpaceBounds(this, a2, v24);
          if ( !(unsigned __int8)CDrawingContext::IsBounding((CDrawingContext *)this) )
          {
            v21 = 0LL;
            CDrawingContext::CalculateOcclusion(v4, v19, 1, 0LL, (__int64)&v21);
          }
          IsBounding = CDrawingContext::IsBounding((CDrawingContext *)this);
          v14 = CDrawingContext::DrawVisualTree(v4, 0x7FFFFFFF, 0, 1, IsBounding == 0, 0, 0, 1);
          v3 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1340u);
          }
          else
          {
            if ( *((_BYTE *)v4 + 5938) )
              *((_BYTE *)this + 5938) = 1;
            if ( *((_BYTE *)v4 + 5940) )
              *((_BYTE *)this + 5940) = 1;
          }
          CDrawingContext::EndFrame(v4);
          goto LABEL_16;
        }
        v18 = 4881;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v18);
    }
LABEL_16:
    if ( v5 )
      CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
    if ( v4 )
      CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v4 + 8));
    goto LABEL_20;
  }
  v17 = CDrawingContext::PushOffsetInternal(
          (CDrawingContext *)this,
          v16,
          COERCE_FLOAT(LODWORD(v22) ^ _xmm),
          COERCE_FLOAT(LODWORD(v20) ^ _xmm),
          0.0);
  v3 = v17;
  if ( v17 >= 0 )
  {
    v5 = 1;
    goto LABEL_4;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x12FDu);
LABEL_20:
  if ( v19 )
    CMILRefCountBase::Release(v19);
  return v3;
}
