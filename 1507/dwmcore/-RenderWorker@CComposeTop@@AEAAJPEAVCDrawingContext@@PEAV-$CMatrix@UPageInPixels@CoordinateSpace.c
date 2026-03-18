/*
 * XREFs of ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119FE8
 * Callers:
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800EA6F8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119DC4 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18002B104 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180030040 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180031110 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CComposeTop::RenderWorker(
        __int64 a1,
        CDrawingContext *a2,
        const struct D2DMatrix *a3,
        CShape *a4,
        _OWORD *a5)
{
  __int64 v8; // r9
  __int64 (__fastcall *v9)(CShape *, __int128 *, _BYTE *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v17; // [rsp+40h] [rbp-71h] BYREF
  _DWORD v18[11]; // [rsp+44h] [rbp-6Dh] BYREF
  __int128 v19; // [rsp+70h] [rbp-41h] BYREF
  _BYTE v20[64]; // [rsp+80h] [rbp-31h] BYREF

  D2DMatrixMultiply((struct D2DMatrix *)v20, (const struct D2DMatrix *)(a1 + 24), a3);
  v9 = *(__int64 (__fastcall **)(CShape *, __int128 *, _BYTE *))(*(_QWORD *)v8 + 24LL);
  v19 = 0uLL;
  v10 = v9(a4, &v19, v20);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      memset_0(v18, 0, 0x28uLL);
      v18[0] = 0;
      v17 = 16;
      v12 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v17, 1);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v13 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v20, 0, 1);
        v11 = v13;
        if ( v13 >= 0 )
        {
          v14 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
          v11 = v14;
          if ( v14 >= 0 )
          {
            v15 = CDrawingContext::FillShapeWithBitmap(a2, *(CBitmapResource **)(a1 + 8), &IdentityMatrix, a4, 1, 0LL);
            v11 = v15;
            if ( v15 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1CBu);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1C4u);
          }
          CDrawingContext::PopTransformInternal(a2, 1);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1BEu);
        }
        CDrawingContext::PopRenderOptionsInternal(a2, 1);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1BAu);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1AAu);
  }
  if ( a5 )
    *a5 = v19;
  return v11;
}
