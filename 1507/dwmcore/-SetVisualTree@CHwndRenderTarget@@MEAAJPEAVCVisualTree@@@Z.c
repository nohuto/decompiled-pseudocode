/*
 * XREFs of ?SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x18004CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800585D0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::SetVisualTree(CHwndRenderTarget *this, struct CVisualTree *a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CRenderTarget::SetVisualTree(this, a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2A3u);
  else
    *((_BYTE *)this + 561) = 1;
  return v4;
}
