/*
 * XREFs of ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x18008BF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CSwapChainBase::ReleaseD3DResources(CSwapChainBase *this)
{
  __int64 i; // rbx
  CMILPoolResource *v3; // rcx

  (*(void (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 256LL))(this);
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
