/*
 * XREFs of ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x18000E870
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F450 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000B538 (-GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PE.c)
 *     ?Top@?$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z @ 0x18000B9FC (-Top@-$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180037090 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18003C568 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x180043664 (-GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AC040 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?PopTransform@CDrawingContext@@QEAAXXZ @ 0x1800F3264 (-PopTransform@CDrawingContext@@QEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawCommandListBitmapRepresentation(
        CDrawingContext *this,
        struct CCommandListBitmapRepresentation *a2,
        const struct CMILMatrix *a3)
{
  __int64 v3; // rbx
  struct ID2D1PrivateCompositorCommandList *v4; // r13
  const struct D2D_SIZE_F *CurrentLayoutSize; // rax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int D2DCommandList; // eax
  int v13; // eax
  int v14; // eax
  __int64 *v15; // r14
  __int64 v16; // rbx
  int v17; // eax
  char v18; // si
  CCachedVisualImage *v19; // r14
  int v20; // eax
  char v22; // [rsp+40h] [rbp-40h]
  struct ID2D1PrivateCompositorCommandList *v23; // [rsp+48h] [rbp-38h] BYREF
  CCompositionSurfaceBitmap *v24; // [rsp+50h] [rbp-30h] BYREF
  CCachedVisualImage *v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp-20h]
  _BYTE v27[16]; // [rsp+68h] [rbp-18h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v22 = 0;
  v25 = a2;
  CurrentLayoutSize = CDrawingContext::GetCurrentLayoutSize(this);
  v9 = (*(__int64 (__fastcall **)(struct CCommandListBitmapRepresentation *, _QWORD, const struct D2D_SIZE_F *, _BYTE *))(v3 + 72))(
         a2,
         0LL,
         CurrentLayoutSize,
         v27);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x884u);
    goto LABEL_26;
  }
  if ( a3 )
  {
    v11 = CDrawingContext::PushTransformInternal(this, 0LL, a3, 1, 1);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x888u);
      goto LABEL_26;
    }
    v22 = 1;
  }
  if ( *((_BYTE *)this + 2616) || *((_DWORD *)this + 1447) )
  {
    v25 = (CCachedVisualImage *)0x3F8000003F800000LL;
    v26 = 0x3F8000003F800000LL;
    v20 = CDrawingContext::DrawSolidRectangle(this);
    v10 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x8D8u);
  }
  else
  {
    D2DCommandList = CCommandListBitmapRepresentation::GetD2DCommandList(
                       a2,
                       *((struct CPolygon **)this + 342),
                       (CDrawingContext *)((char *)this + 56),
                       *((struct ID2DContext **)this + 47),
                       &v23);
    v10 = D2DCommandList;
    if ( D2DCommandList >= 0 )
    {
      v4 = v23;
      if ( v23 )
      {
        v13 = CDrawingContext::ApplyRenderStateInternal(this, 0);
        v10 = v13;
        if ( v13 >= 0 )
        {
          v14 = CWatermarkStack<float,64,2,10>::Top((int *)this + 646, &v23);
          v10 = v14;
          if ( v14 >= 0 )
          {
            D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 61));
            v15 = (__int64 *)*((_QWORD *)this + 47);
            v16 = *v15;
            CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 56));
            v17 = (*(__int64 (__fastcall **)(__int64 *, char *, struct ID2D1PrivateCompositorCommandList *))(v16 + 160))(
                    v15,
                    (char *)this + 56,
                    v4);
            v10 = v17;
            if ( v17 >= 0 )
            {
              v18 = v22;
              if ( v22 )
              {
                CDrawingContext::PopTransform(this);
                v18 = 0;
              }
              v19 = v25;
              (**(void (__fastcall ***)(CCachedVisualImage *, GUID *, CCompositionSurfaceBitmap **))v25)(
                v25,
                &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
                &v24);
              CDrawingContext::RecordBitmapContentInfo(this, v19, v24, (struct MilRectF *)v27, 0LL);
              goto LABEL_24;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x8BFu);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x8A2u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x89Du);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DCommandList, 0x892u);
      v4 = v23;
    }
  }
  v18 = v22;
LABEL_24:
  if ( v18 )
    CDrawingContext::PopTransform(this);
LABEL_26:
  if ( v24 )
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v4 + 16LL))(v4);
  return v10;
}
