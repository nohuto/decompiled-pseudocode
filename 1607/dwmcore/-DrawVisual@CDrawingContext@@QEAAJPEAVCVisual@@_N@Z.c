/*
 * XREFs of ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180004184
 * Callers:
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180005840 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A440 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180122064 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180004548 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004F7EC (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x18006D184 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18006F210 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B8530 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801098AC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180124730 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(struct CComposition **this, struct CVisual *a2, bool a3)
{
  unsigned int v3; // ebx
  CDrawingContext *v4; // rsi
  char v5; // r13
  int VisualTree; // eax
  int v10; // eax
  int v11; // eax
  bool IsBounding; // al
  int v13; // eax
  const struct CVisual *v15; // rdx
  int v16; // eax
  unsigned int v17; // [rsp+28h] [rbp-A9h]
  struct CVisualTree *v18; // [rsp+68h] [rbp-69h] BYREF
  float v19; // [rsp+70h] [rbp-61h] BYREF
  float v20; // [rsp+74h] [rbp-5Dh] BYREF
  CDrawingContext *v21; // [rsp+78h] [rbp-59h] BYREF
  float v22; // [rsp+80h] [rbp-51h] BYREF
  _BYTE v23[64]; // [rsp+88h] [rbp-49h] BYREF
  int v24; // [rsp+C8h] [rbp-9h]
  _BYTE v25[16]; // [rsp+D8h] [rbp+7h] BYREF

  v3 = 0;
  v4 = 0LL;
  v18 = 0LL;
  v5 = 0;
  v21 = 0LL;
  if ( !a2 )
    return v3;
  v20 = 0.0;
  v19 = 0.0;
  v24 = 0;
  VisualTree = CVisual::GetVisualTree(a2, &v18, a3);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x12BFu);
  }
  else
  {
    if ( !a3 || !CVisual::GetEffectiveOffset(a2, &v20, &v19, &v22) )
    {
LABEL_4:
      v10 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
      v3 = v10;
      if ( v10 < 0 )
      {
        v17 = 4816;
      }
      else
      {
        v10 = CVisualTree::PreCompute(v18);
        v3 = v10;
        if ( v10 < 0 )
        {
          v17 = 4818;
        }
        else
        {
          v11 = CDrawingContext::Create(this[3], &v21);
          v3 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x12D4u);
            v4 = v21;
LABEL_13:
            if ( v5 )
              CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
            if ( v4 )
              CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v4 + 8));
            goto LABEL_17;
          }
          CBaseMatrixStack::Top((CBaseMatrixStack *)(this + 67), (struct CMILMatrix *)v23);
          v4 = v21;
          v10 = CDrawingContext::BeginFrame(v21, this[54], 0, (__int64)v23, 0LL, 0, 0LL);
          v3 = v10;
          if ( v10 >= 0 )
          {
            *((_BYTE *)v4 + 344) = *((_BYTE *)this + 344);
            *((_DWORD *)v4 + 81) = *((_DWORD *)this + 81);
            *((_DWORD *)v4 + 82) = *((_DWORD *)this + 82);
            *((_DWORD *)v4 + 88) = *((_DWORD *)this + 88);
            *((_DWORD *)v4 + 83) = *((_DWORD *)this + 83);
            *((_DWORD *)v4 + 84) = *((_DWORD *)this + 84);
            *((_DWORD *)v4 + 85) = *((_DWORD *)this + 85);
            CDrawingContext::CalcClippedNodeWorldSpaceBounds(this, a2, v25);
            if ( !CDrawingContext::IsBounding((CDrawingContext *)this) )
            {
              v21 = 0LL;
              CDrawingContext::CalculateOcclusion(v4, v18, 1, (__int64)&v21);
            }
            IsBounding = CDrawingContext::IsBounding((CDrawingContext *)this);
            v13 = CDrawingContext::DrawVisualTree(v4, 0x7FFFFFFF, 0, 1, !IsBounding, 0, 0, 1);
            v3 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1309u);
            }
            else
            {
              *((_BYTE *)this + 6534) |= *((_BYTE *)v4 + 6534);
              *((_BYTE *)this + 6535) |= *((_BYTE *)v4 + 6535);
              *((_BYTE *)this + 6536) |= *((_BYTE *)v4 + 6536);
            }
            CDrawingContext::EndFrame(v4);
            goto LABEL_13;
          }
          v17 = 4831;
        }
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v17);
      goto LABEL_13;
    }
    v16 = CDrawingContext::PushOffsetInternal(
            (CDrawingContext *)this,
            v15,
            COERCE_FLOAT(LODWORD(v20) ^ _xmm),
            COERCE_FLOAT(LODWORD(v19) ^ _xmm),
            0.0);
    v3 = v16;
    if ( v16 >= 0 )
    {
      v5 = 1;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x12CBu);
  }
LABEL_17:
  if ( v18 )
    CMILRefCountBase::Release(v18);
  return v3;
}
