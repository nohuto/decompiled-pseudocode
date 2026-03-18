/*
 * XREFs of ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C014B740
 * Callers:
 *     UserSetWindowedSwapChain @ 0x1C014B548 (UserSetWindowedSwapChain.c)
 *     ?Delete@CSwapChainProp@@UEAAXXZ @ 0x1C014B720 (-Delete@CSwapChainProp@@UEAAXXZ.c)
 *     UserRemoveWindowedSwapChain @ 0x1C014E400 (UserRemoveWindowedSwapChain.c)
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
