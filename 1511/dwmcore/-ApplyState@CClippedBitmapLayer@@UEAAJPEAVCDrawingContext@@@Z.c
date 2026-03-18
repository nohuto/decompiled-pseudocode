/*
 * XREFs of ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180114F60
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010C40 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180010E18 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180045EE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046E74 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CClippedBitmapLayer::ApplyState(CClippedBitmapLayer *this, struct CDrawingContext *a2)
{
  char v4; // r14
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v10; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v11[16]; // [rsp+3Ch] [rbp-15h] BYREF
  int v12; // [rsp+4Ch] [rbp-5h]
  _DWORD v13[12]; // [rsp+68h] [rbp+17h] BYREF
  int v14; // [rsp+98h] [rbp+47h]
  int v15; // [rsp+9Ch] [rbp+4Bh]
  int v16; // [rsp+A0h] [rbp+4Fh]
  int v17; // [rsp+A4h] [rbp+53h]

  v10 = 0;
  memset_0(v11, 0, 0x28uLL);
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v4 = 0;
  v13[11] = 0;
  v13[9] = 0;
  v13[8] = 0;
  v13[7] = 0;
  v13[6] = 0;
  v13[4] = 0;
  v13[3] = 0;
  v13[2] = 0;
  v13[1] = 0;
  v17 = 1065353216;
  v13[10] = 1065353216;
  v13[5] = 1065353216;
  v13[0] = 1065353216;
  v5 = CExternalLayer::ApplyRenderTarget(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_BYTE *)this + 36) = *((_BYTE *)a2 + 5967);
    *((_BYTE *)a2 + 5967) = 0;
    v14 = *((_DWORD *)this + 26) ^ _xmm;
    v15 = *((_DWORD *)this + 27) ^ _xmm;
    *((_BYTE *)this + 35) = 1;
    v7 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v13, 0, 0);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v12 = 0;
      v10 = 16;
      v4 = 1;
      v8 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v10, 0);
      v6 = v8;
      if ( v8 >= 0 )
        return v6;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x75u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x6Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x59u);
  }
  CExternalLayer::RestoreState(this, a2);
  if ( v4 )
    CDrawingContext::PopTransformInternal(a2, 0);
  return v6;
}
