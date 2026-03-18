/*
 * XREFs of ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8CFC
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18003C134 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x18003C450 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18011F7A0 (-Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8D84 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180107EE4 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::TryTargetNextBuffer(CIndirectSwapchainRenderTarget *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  int RenderTargetForAcquiredBuffer; // eax

  *((_BYTE *)this + 512) &= ~8u;
  v2 = *((_QWORD *)this + 65);
  v3 = 0;
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v2 + 56LL))(v2, 0LL, (char *)this + 528);
    v3 = v4;
    if ( v4 < 0 )
    {
      if ( v4 == -2005270490 )
      {
        CIndirectSwapchainRenderTarget::Unregister(this);
      }
      else
      {
        if ( v4 != -2147483638 )
          return v3;
        *((_BYTE *)this + 512) |= 8u;
      }
      return 0;
    }
    else
    {
      RenderTargetForAcquiredBuffer = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(this);
      v3 = RenderTargetForAcquiredBuffer;
      if ( RenderTargetForAcquiredBuffer < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetForAcquiredBuffer, 0x18Fu);
    }
  }
  return v3;
}
