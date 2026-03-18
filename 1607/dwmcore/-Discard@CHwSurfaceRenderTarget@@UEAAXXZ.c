/*
 * XREFs of ?Discard@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x18017B300
 * Callers:
 *     ?Discard@CHwTextureRenderTarget@@UEAAXXZ @ 0x18017B800 (-Discard@CHwTextureRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 */

void __fastcall CHwSurfaceRenderTarget::Discard(CHwSurfaceRenderTarget *this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(int (__fastcall **)(CHwSurfaceRenderTarget *, __int64 *))(*(_QWORD *)this + 216LL))(this, &v5) >= 0 )
  {
    v2 = *((_QWORD *)this + 21);
    v3 = *(_QWORD *)(v2 + 136);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 576) + 936LL))(
        *(_QWORD *)(v5 + 576),
        *(_QWORD *)(v2 + 136));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_x(v4, &EVTDESC_ETWGUID_RENDEROPT_DISCARDRESOURCEEVENT, v3);
    }
  }
}
