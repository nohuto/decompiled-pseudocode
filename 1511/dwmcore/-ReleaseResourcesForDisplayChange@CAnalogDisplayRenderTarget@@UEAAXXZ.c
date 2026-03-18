/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CAnalogDisplayRenderTarget@@UEAAXXZ @ 0x18013DF30
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ @ 0x18007FFE0 (-ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ.c)
 */

void __fastcall CAnalogDisplayRenderTarget::ReleaseResourcesForDisplayChange(CAnalogDisplayRenderTarget *this)
{
  __int64 v2; // rsi

  CHwDisplayRenderTarget::ReleaseResourcesForDisplayChange(this);
  v2 = *((_QWORD *)this + 19);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*((_QWORD *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
}
