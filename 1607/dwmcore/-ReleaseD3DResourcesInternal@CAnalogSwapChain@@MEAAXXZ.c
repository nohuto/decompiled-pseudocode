/*
 * XREFs of ?ReleaseD3DResourcesInternal@CAnalogSwapChain@@MEAAXXZ @ 0x180168610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnalogSwapChain::ReleaseD3DResourcesInternal(CAnalogSwapChain *this)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 88LL))(*((_QWORD *)this + 36));
  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 36) = 0LL;
  }
}
