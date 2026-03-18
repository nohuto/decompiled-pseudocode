/*
 * XREFs of ?Initialize@CAnalogCompositorTarget@@EEAAJXZ @ 0x180167180
 * Callers:
 *     ?EnsureAnalogCompositorTarget@CAnalogCompositorClient@@QEAAJPEAVCComposition@@@Z @ 0x180167488 (-EnsureAnalogCompositorTarget@CAnalogCompositorClient@@QEAAJPEAVCComposition@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180072DB8 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 */

__int64 __fastcall CAnalogCompositorTarget::Initialize(CAnalogCompositorTarget *this)
{
  unsigned int v1; // ebx
  int v2; // eax

  if ( (_QWORD)xmmword_1801F03A0 )
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
