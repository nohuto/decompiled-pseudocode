/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180120E48
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180009290 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?IsCloseRealZero@@YAHMM@Z @ 0x180035D90 (-IsCloseRealZero@@YAHMM@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

void __fastcall CVisual::SetOpacity(CVisual *this, float a2)
{
  float v2; // xmm0_4
  int v3; // eax
  bool v4; // r9
  float *v5; // r10
  char v6; // dl
  int v7; // ecx

  v2 = *((float *)this + 96);
  if ( v2 != a2 )
  {
    IsCloseRealZero(v2, 0.0000011920929);
    v3 = IsCloseRealZero(a2, 0.0000011920929);
    v6 = v4;
    if ( v3 != v7 )
      v6 = 1;
    v5[96] = a2;
    CVisual::PropagateFlags((struct CVisual *)v5, v6, 1, 0, v4, v4, v4);
  }
}
