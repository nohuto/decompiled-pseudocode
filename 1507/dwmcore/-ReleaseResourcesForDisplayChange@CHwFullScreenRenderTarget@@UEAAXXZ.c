/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x18008AD80
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x18013FEA0 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 112LL))(*((_QWORD *)this + 4)) )
    {
      v3 = *(_QWORD *)this;
      v4 = 0LL;
      (*(void (__fastcall **)(CHwFullScreenRenderTarget *, _QWORD, __int64 *))(v3 + 336))(this, 0LL, &v4);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  CHwDisplayRenderTarget::ReleaseResourcesForDisplayChange(this);
}
