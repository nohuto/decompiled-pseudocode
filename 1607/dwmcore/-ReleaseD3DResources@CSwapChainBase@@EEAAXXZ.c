/*
 * XREFs of ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x18007A030
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
