/*
 * XREFs of ?CreateSwapChainProp@CSwapChainProp@@SAHPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C01453BC
 * Callers:
 *     UserSetWindowedSwapChain @ 0x1C0145438 (UserSetWindowedSwapChain.c)
 * Callees:
 *     ?Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z @ 0x1C01455D0 (-Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainProp::CreateSwapChainProp(struct CompositionSurfaceObject *a1, struct CSwapChainProp **a2)
{
  unsigned int v2; // edi
  struct CSwapChainProp *v5; // rbx

  v2 = 0;
  *a2 = 0LL;
  v5 = (struct CSwapChainProp *)Win32AllocPoolZInit(32LL, 1668772693LL);
  if ( v5 )
  {
    *(_QWORD *)v5 = &CSwapChainProp::`vftable';
    if ( (unsigned int)CSwapChainProp::Init(v5, a1) )
    {
      *a2 = v5;
      return 1;
    }
    else
    {
      (**(void (__fastcall ***)(struct CSwapChainProp *))v5)(v5);
    }
  }
  return v2;
}
