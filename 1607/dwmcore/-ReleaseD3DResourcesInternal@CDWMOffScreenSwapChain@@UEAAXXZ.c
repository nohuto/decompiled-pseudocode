/*
 * XREFs of ?ReleaseD3DResourcesInternal@CDWMOffScreenSwapChain@@UEAAXXZ @ 0x18007A6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMOffScreenSwapChain::ReleaseD3DResourcesInternal(CDWMOffScreenSwapChain *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 36) = 0LL;
  }
}
