/*
 * XREFs of ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C0145630
 * Callers:
 *     UserSetWindowedSwapChain @ 0x1C0145438 (UserSetWindowedSwapChain.c)
 *     ?Delete@CSwapChainProp@@UEAAXXZ @ 0x1C0145610 (-Delete@CSwapChainProp@@UEAAXXZ.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0149650 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainProp::ClearCompositionSurfaceObj(CSwapChainProp *this)
{
  unsigned int v2; // ebx
  CompositionObject *v3; // rcx

  v2 = 0;
  v3 = (CompositionObject *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    CompositionObject::Release(v3);
    *((_QWORD *)this + 2) = 0LL;
    return 1;
  }
  return v2;
}
