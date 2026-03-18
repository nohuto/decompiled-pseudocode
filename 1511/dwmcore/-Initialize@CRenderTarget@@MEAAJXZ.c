/*
 * XREFs of ?Initialize@CRenderTarget@@MEAAJXZ @ 0x1800AD450
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x1800AD24C (-ReleaseDrawingContext@CRenderTarget@@IEAAXXZ.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AD4F0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
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
