/*
 * XREFs of ?Initialize@CAnalogCompositor@@EEAAJXZ @ 0x180165270
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureAnalogCompositorTarget@CAnalogCompositorClient@@QEAAJPEAVCComposition@@@Z @ 0x180167488 (-EnsureAnalogCompositorTarget@CAnalogCompositorClient@@QEAAJPEAVCComposition@@@Z.c)
 */

__int64 __fastcall CAnalogCompositor::Initialize(struct CComposition **this)
{
  unsigned int v1; // ebx
  int v2; // eax

  if ( (_QWORD)xmmword_1801F03A0 )
  {
    v2 = CAnalogCompositorClient::EnsureAnalogCompositorTarget((CAnalogCompositorClient *)this, this[2]);
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x2Cu);
  }
  else
  {
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x2Bu);
  }
  return v1;
}
