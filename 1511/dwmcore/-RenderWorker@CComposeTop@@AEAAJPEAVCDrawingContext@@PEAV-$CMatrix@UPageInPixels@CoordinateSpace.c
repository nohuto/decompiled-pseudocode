/*
 * XREFs of ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAVCOverlayContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180130C14
 * Callers:
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800B8CE8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@@Z @ 0x1800FCD48 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18003FD48 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180045EE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046E74 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046ED0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CComposeTop::RenderWorker(
        __int64 a1,
        CDrawingContext *a2,
        const struct D2DMatrix *a3,
        CShape *a4,
        __int64 a5,
        _OWORD *a6)
{
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 (__fastcall *v12)(CShape *, __int128 *, _OWORD *); // rbx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // [rsp+40h] [rbp-79h] BYREF
  _DWORD v21[11]; // [rsp+44h] [rbp-75h] BYREF
  __int128 v22; // [rsp+70h] [rbp-49h] BYREF
  _OWORD v23[4]; // [rsp+80h] [rbp-39h] BYREF

  if ( a5 && *(_BYTE *)(a5 + 841) )
  {
    v9 = *(_OWORD *)(a1 + 40);
    v23[0] = *(_OWORD *)(a1 + 24);
    v10 = *(_OWORD *)(a1 + 56);
    v23[1] = v9;
    v11 = *(_OWORD *)(a1 + 72);
    v23[2] = v10;
    v23[3] = v11;
  }
  else
  {
    D2DMatrixMultiply((struct D2DMatrix *)v23, (const struct D2DMatrix *)(a1 + 24), a3);
  }
  v12 = *(__int64 (__fastcall **)(CShape *, __int128 *, _OWORD *))(*(_QWORD *)a4 + 24LL);
  v22 = 0uLL;
  v13 = v12(a4, &v22, v23);
  v14 = v13;
  if ( v13 >= 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      memset_0(v21, 0, 0x28uLL);
      v21[0] = 0;
      v20 = 2;
      v15 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v20, 1);
      v14 = v15;
      if ( v15 >= 0 )
      {
        v16 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v23, 0, 1);
        v14 = v16;
        if ( v16 >= 0 )
        {
          v17 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
          v14 = v17;
          if ( v17 >= 0 )
          {
            v18 = CDrawingContext::FillShapeWithBitmap(
                    a2,
                    *(int (__fastcall ****)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))(a1 + 8),
                    (CBaseMatrix *)&IdentityMatrix,
                    a4,
                    1,
                    0LL);
            v14 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1D5u);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1D0u);
          }
          CDrawingContext::PopTransformInternal(a2, 1);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1CAu);
        }
        CDrawingContext::PopRenderOptionsInternal(a2, 1);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1C6u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1B6u);
  }
  if ( a6 )
    *a6 = v22;
  return v14;
}
