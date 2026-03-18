/*
 * XREFs of ?Initialize@CAnalogCompositorTarget@@EEAAJXZ @ 0x18013D1D0
 * Callers:
 *     ?Create@CAnalogCompositorTarget@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18013CE7C (-Create@CAnalogCompositorTarget@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007AE38 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnalogCompositorTarget::Initialize(CAnalogCompositorTarget *this)
{
  unsigned int v1; // ebx
  int v2; // eax

  if ( (_QWORD)xmmword_1801A3FB0 )
  {
    v2 = CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), this);
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x51u);
  }
  else
  {
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x4Fu);
  }
  return v1;
}
