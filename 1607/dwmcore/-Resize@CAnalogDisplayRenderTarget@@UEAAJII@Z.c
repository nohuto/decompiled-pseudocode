/*
 * XREFs of ?Resize@CAnalogDisplayRenderTarget@@UEAAJII@Z @ 0x180167DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z @ 0x180167E50 (-UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::Resize(
        CAnalogDisplayRenderTarget *this,
        unsigned int a2,
        unsigned int a3)
{
  int updated; // eax
  unsigned int v4; // ebx

  updated = CAnalogDisplayRenderTarget::UpdateFlippingChain((CAnalogDisplayRenderTarget *)((char *)this - 176), a2, a3);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xFEu);
  return v4;
}
