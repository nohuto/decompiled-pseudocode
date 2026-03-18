/*
 * XREFs of ?Initialize@CAnalogCompositor@@EEAAJXZ @ 0x18013B060
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CAnalogCompositorTarget@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18013CE7C (-Create@CAnalogCompositorTarget@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAnalogCompositor::Initialize(struct CComposition **this)
{
  int v1; // ebx
  int v2; // eax

  if ( (_QWORD)xmmword_1801A3FB0 )
  {
    v1 = 0;
    if ( !*((_QWORD *)&xmmword_1801A3FB0 + 1) )
    {
      v2 = CAnalogCompositorTarget::Create(this[2], (struct CAnalogCompositorTarget **)&xmmword_1801A3FB0 + 1);
      v1 = v2;
      if ( v2 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x6Au);
    }
    if ( v1 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x2Cu);
  }
  else
  {
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x2Bu);
  }
  return (unsigned int)v1;
}
