/*
 * XREFs of ?Initialize@CRenderTarget@@MEAAJXZ @ 0x180058690
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800569F8 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x180058508 (-ReleaseDrawingContext@CRenderTarget@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderTarget::Initialize(struct CComposition **this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CDrawingContext::Create(this[2], this + 9);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x39u);
    CRenderTarget::ReleaseDrawingContext((CRenderTarget *)this);
  }
  return v3;
}
