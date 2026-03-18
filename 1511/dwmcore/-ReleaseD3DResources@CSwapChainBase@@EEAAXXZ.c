/*
 * XREFs of ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x180072C70
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CSwapChainBase::ReleaseD3DResources(CSwapChainBase *this)
{
  __int64 i; // rbx
  CMILPoolResource *v3; // rcx

  (*(void (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 272LL))(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 70); i = (unsigned int)(i + 1) )
  {
    v3 = *(CMILPoolResource **)(*((_QWORD *)this + 32) + 8 * i);
    if ( v3 )
    {
      CMILPoolResource::Release(v3);
      *(_QWORD *)(*((_QWORD *)this + 32) + 8 * i) = 0LL;
    }
  }
}
