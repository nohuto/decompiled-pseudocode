/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x18007B400
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x18017FA50 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(CHwFullScreenRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 112LL))(v2) )
    {
      v4 = *(_QWORD *)this;
      v5 = 0LL;
      (*(void (__fastcall **)(CHwFullScreenRenderTarget *, _QWORD, __int64 *))(v4 + 360))(this, 0LL, &v5);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v3 = *((_QWORD *)this + 23);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 23) = 0LL;
  }
  CHwDisplayRenderTarget::ReleaseResourcesForDisplayChange(this);
}
