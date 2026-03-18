/*
 * XREFs of ?UnregisterSurfaceHandles@CAnalogRenderTarget@@AEAAXXZ @ 0x1801277E4
 * Callers:
 *     ?NotifyUpdate@CAnalogRenderTarget@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180126750 (-NotifyUpdate@CAnalogRenderTarget@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ @ 0x18012785C (-UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?SetExclusiveSurface@CAnalogCompositorClient@@QEAAXPEAXIK@Z @ 0x1801275B0 (-SetExclusiveSurface@CAnalogCompositorClient@@QEAAXPEAXIK@Z.c)
 */

void __fastcall CAnalogRenderTarget::UnregisterSurfaceHandles(CAnalogRenderTarget *this)
{
  if ( *((_BYTE *)this + 214) )
  {
    CAnalogCompositorClient::SetExclusiveSurface(this, 0LL, 0, 0);
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)qword_180195FD0 + 72LL))(
      qword_180195FD0,
      (char *)this + 240,
      2LL);
    *((_BYTE *)this + 214) = 0;
  }
}
