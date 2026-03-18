/*
 * XREFs of ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801530A8
 * Callers:
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800BC9F0 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180111CC4 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800035A8 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x180004A08 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18006E110 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposeTop::RenderWorker(
        __int64 a1,
        CDrawingContext *a2,
        const struct CMILMatrix *a3,
        CShape *a4,
        _OWORD *a5)
{
  __int64 (__fastcall *v8)(CShape *, __int128 *, _BYTE *); // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v16; // [rsp+40h] [rbp-81h] BYREF
  _DWORD v17[11]; // [rsp+44h] [rbp-7Dh] BYREF
  _BYTE v18[64]; // [rsp+70h] [rbp-51h] BYREF
  int v19; // [rsp+B0h] [rbp-11h]
  __int128 v20; // [rsp+C0h] [rbp-1h] BYREF

  v19 = 0;
  CMILMatrix::Multiply((const struct CMILMatrix *)(a1 + 24), a3, (struct CMILMatrix *)v18);
  v8 = *(__int64 (__fastcall **)(CShape *, __int128 *, _BYTE *))(*(_QWORD *)a4 + 24LL);
  v20 = 0uLL;
  v9 = v8(a4, &v20, v18);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x19Cu);
  }
  else if ( *(_QWORD *)(a1 + 8) )
  {
    memset_0(v17, 0, 0x24uLL);
    v17[0] = 0;
    v16 = 2;
    v11 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v16, 1);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1ACu);
    }
    else
    {
      v12 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v18, 0, 1);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1AFu);
      }
      else
      {
        v13 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
        v10 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1B5u);
        }
        else
        {
          v14 = CDrawingContext::FillShapeWithBitmap(
                  a2,
                  *(CCachedVisualImage **)(a1 + 8),
                  &CMILMatrix::Identity,
                  a4,
                  1,
                  0LL);
          v10 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1BAu);
        }
        CDrawingContext::PopTransformInternal(a2, 1);
      }
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
    }
  }
  if ( a5 )
    *a5 = v20;
  return v10;
}
