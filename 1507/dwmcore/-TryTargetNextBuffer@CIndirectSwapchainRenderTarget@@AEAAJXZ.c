/*
 * XREFs of ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EEBF8
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800691B0 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800EEA90 (-Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EDF48 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800EECB0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::TryTargetNextBuffer(CIndirectSwapchainRenderTarget *this)
{
  unsigned int v1; // ebx
  __int64 v2; // r14
  int v4; // eax
  int RenderTargetForAcquiredBuffer; // eax

  *((_BYTE *)this + 416) &= ~0x10u;
  v1 = 0;
  v2 = *((_QWORD *)this + 53);
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)v2 + 56LL))(
           *((_QWORD *)this + 53),
           0LL,
           (char *)this + 432);
    v1 = v4;
    if ( v4 >= 0 )
    {
      RenderTargetForAcquiredBuffer = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer((struct _LUID *)this);
      v1 = RenderTargetForAcquiredBuffer;
      if ( RenderTargetForAcquiredBuffer < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetForAcquiredBuffer, 0x188u);
    }
    else
    {
      if ( v4 == -2005270490 )
      {
        CIndirectSwapchainRenderTarget::Unregister(this);
        return 0;
      }
      if ( v4 == -2147483638 )
      {
        *((_BYTE *)this + 416) |= 0x10u;
        return 0;
      }
    }
  }
  return v1;
}
