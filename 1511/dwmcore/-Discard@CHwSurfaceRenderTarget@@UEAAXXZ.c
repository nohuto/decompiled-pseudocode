/*
 * XREFs of ?Discard@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x18014AD1C
 * Callers:
 *     ?Discard@CHwTextureRenderTarget@@UEAAXXZ @ 0x18014B190 (-Discard@CHwTextureRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

void __fastcall CHwSurfaceRenderTarget::Discard(CHwSurfaceRenderTarget *this)
{
  __int64 v1; // rsi
  __int64 v2; // rcx

  v1 = *(_QWORD *)(*((_QWORD *)this + 21) + 136LL);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 20) + 560LL) + 936LL))(
      *(_QWORD *)(*((_QWORD *)this + 20) + 560LL),
      v1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(v2, &EVTDESC_ETWGUID_RENDEROPT_DISCARDRESOURCEEVENT, v1);
  }
}
