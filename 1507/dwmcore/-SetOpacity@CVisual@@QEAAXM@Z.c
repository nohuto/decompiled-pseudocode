/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180104AE8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180104B60 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?IsCloseRealZero@@YAHMM@Z @ 0x18005CB08 (-IsCloseRealZero@@YAHMM@Z.c)
 */

void __fastcall CVisual::SetOpacity(CVisual *this, float a2)
{
  float v2; // xmm0_4
  float v3; // xmm4_4
  int v4; // eax
  bool v5; // r9
  struct CVisual *v6; // r10
  int v7; // xmm4_4
  char v8; // dl
  int v9; // ecx

  v2 = *((float *)this + 100);
  if ( v2 != a2 )
  {
    IsCloseRealZero(v2, 0.0000011920929);
    v4 = IsCloseRealZero(v3, 0.0000011920929);
    v8 = v5;
    if ( v4 != v9 )
      v8 = 1;
    *((_DWORD *)v6 + 100) = v7;
    CVisual::PropagateFlags(v6, v8, 1, 0, v5, v5, v5);
  }
}
