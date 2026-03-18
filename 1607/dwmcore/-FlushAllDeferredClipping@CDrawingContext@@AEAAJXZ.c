/*
 * XREFs of ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x180003978
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x1800040C0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x180003900 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushAllDeferredClipping(CDrawingContext *this)
{
  int v2; // eax
  unsigned int v3; // edi

  v2 = CDrawingContext::FlushDeferredD2DLayers(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x18B4u);
  }
  else if ( *((_BYTE *)this + 6530) )
  {
    *(_WORD *)((char *)this + 6529) = 1;
  }
  return v3;
}
