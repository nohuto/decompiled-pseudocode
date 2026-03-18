/*
 * XREFs of ?Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z @ 0x1C011AC68
 * Callers:
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C011AA6C (-CreateSwapChainProp@CSwapChainProp@@SAHPEAUCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C011AAE8 (UserSetWindowedSwapChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainProp::Init(CSwapChainProp *this, struct CompositionSurfaceObject *a2)
{
  __int64 result; // rax

  if ( (int)CompositionObject::AddRef(a2) < 0 )
    return 0LL;
  *((_DWORD *)this + 6) = 0;
  result = 1LL;
  *((_QWORD *)this + 2) = a2;
  return result;
}
