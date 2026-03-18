/*
 * XREFs of ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003E644
 * Callers:
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F450 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180037110 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18010BF88 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18003EDDC (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x180044B58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046E74 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180048704 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AD4F0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800F7A40 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x18010DFC4 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(struct CComposition **this, struct CVisual *a2, bool a3)
{
  unsigned int v3; // ebx
  CDrawingContext *v4; // rsi
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x1308u);
    goto LABEL_17;
  }
  if ( !a3 || !CVisual::GetEffectiveOffset(a2, &v22, &v20, &v23) )
  {
LABEL_4:
    v10 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1319u);
    }
    else
    {
      v11 = CVisualTree::PreCompute(v19);
      v3 = v11;
      if ( v11 < 0 )
      {
        v18 = 4891;
      }
      else
      {
        v12 = CDrawingContext::Create(this[3], &v21);
        v3 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x131Du);
          v4 = v21;
          goto LABEL_13;
        }
        CBaseMatrixStack::Top((CBaseMatrixStack *)(this + 57), (struct CBaseMatrix *)v25);
        v4 = v21;
        v11 = CDrawingContext::BeginFrame(v21, this[44], 0, (struct D2DMatrix *)v25, 0LL, 0, 0LL);
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
          *((_DWORD *)v4 + 1490) = *((_DWORD *)this + 1490);
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
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1354u);
          }
          else
          {
            *((_BYTE *)this + 5970) |= *((_BYTE *)v4 + 5970);
            *((_BYTE *)this + 5971) |= *((_BYTE *)v4 + 5971);
            *((_BYTE *)this + 5972) |= *((_BYTE *)v4 + 5972);
          }
          CDrawingContext::EndFrame(v4);
          goto LABEL_13;
        }
        v18 = 4904;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v18);
    }
LABEL_13:
    if ( v5 )
      CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
    if ( v4 )
      CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v4 + 8));
    goto LABEL_17;
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
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1314u);
LABEL_17:
  if ( v19 )
    CMILRefCountBase::Release(v19);
  return v3;
}
