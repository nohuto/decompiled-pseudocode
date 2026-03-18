/*
 * XREFs of ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012EAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180013898 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180013A80 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18005B478 (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18006E110 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CClippedBitmapLayer::ApplyState(CClippedBitmapLayer *this, struct CDrawingContext *a2)
{
  char v4; // r14
  int v5; // eax
  unsigned int v6; // ebx
  float v7; // xmm2_4
  float v8; // xmm1_4
  int v9; // eax
  unsigned int v11; // [rsp+28h] [rbp-39h]
  _DWORD v12[12]; // [rsp+38h] [rbp-29h] BYREF
  _OWORD v13[4]; // [rsp+68h] [rbp+7h] BYREF
  int v14; // [rsp+A8h] [rbp+47h]

  memset_0(v12, 0, 0x28uLL);
  v4 = 0;
  v13[0] = CMILMatrix::Identity;
  v13[1] = xmmword_1801EAD20;
  v13[2] = xmmword_1801EAD30;
  v13[3] = xmmword_1801EAD40;
  v14 = dword_1801EAD50;
  v5 = CExternalLayer::ApplyRenderTarget(this, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 90;
  }
  else
  {
    *((_BYTE *)this + 36) = *((_BYTE *)a2 + 6531);
    *((_BYTE *)a2 + 6531) = 0;
    LODWORD(v7) = *((_DWORD *)this + 29) ^ _xmm;
    LODWORD(v8) = *((_DWORD *)this + 28) ^ _xmm;
    *((_BYTE *)this + 35) = 1;
    CMILMatrix::SetTranslation((CMILMatrix *)v13, v8, v7, 0.0);
    v9 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v13, 0, 0);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x6Bu);
      goto LABEL_8;
    }
    v12[5] = 0;
    v12[0] = 16;
    v4 = 1;
    v5 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v12, 0);
    v6 = v5;
    if ( v5 >= 0 )
      return v6;
    v11 = 118;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v11);
LABEL_8:
  CExternalLayer::RestoreState(this, a2);
  if ( v4 )
    CDrawingContext::PopTransformInternal(a2, 0);
  return v6;
}
