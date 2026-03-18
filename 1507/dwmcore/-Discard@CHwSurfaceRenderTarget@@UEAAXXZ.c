/*
 * XREFs of ?Discard@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x18013A29C
 * Callers:
 *     ?Discard@CHwTextureRenderTarget@@UEAAXXZ @ 0x18013B000 (-Discard@CHwTextureRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 */

void __fastcall CHwSurfaceRenderTarget::Discard(CHwSurfaceRenderTarget *this)
{
  __int64 v1; // rsi
  __int64 v2; // rcx

  v1 = *(_QWORD *)(*((_QWORD *)this + 21) + 136LL);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 20) + 552LL) + 936LL))(
      *(_QWORD *)(*((_QWORD *)this + 20) + 552LL),
      v1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(v2, &EVTDESC_ETWGUID_RENDEROPT_DISCARDRESOURCEEVENT, v1);
  }
}
