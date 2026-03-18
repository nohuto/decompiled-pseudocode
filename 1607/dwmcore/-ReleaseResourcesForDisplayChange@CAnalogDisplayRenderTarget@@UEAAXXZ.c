/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CAnalogDisplayRenderTarget@@UEAAXXZ @ 0x180167DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ @ 0x18008E94C (-ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnalogDisplayRenderTarget::ReleaseResourcesForDisplayChange(CAnalogDisplayRenderTarget *this)
{
  __int64 v2; // rcx

  CHwDisplayRenderTarget::ReleaseResourcesForDisplayChange(this);
  v2 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 20) = 0LL;
  }
}
