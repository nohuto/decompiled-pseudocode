/*
 * XREFs of ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010960
 * Callers:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003CBE8 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 * Callees:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010CE0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180045EE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::ApplyState(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  _DWORD v7[14]; // [rsp+30h] [rbp-38h] BYREF

  v3 = CExternalLayer::ApplyState(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x6Fu);
  }
  else
  {
    v7[0] = 3;
    v7[1] = -16777215;
    v7[4] = 1;
    v5 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v7, 0);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x7Cu);
  }
  return v4;
}
