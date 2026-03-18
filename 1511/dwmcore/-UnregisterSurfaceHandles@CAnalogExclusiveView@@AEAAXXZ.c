/*
 * XREFs of ?UnregisterSurfaceHandles@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B9A8
 * Callers:
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B3E4 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x18013B570 (-NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CAnalogExclusiveView::UnregisterSurfaceHandles(CAnalogExclusiveView *this)
{
  if ( *((_BYTE *)this + 57) )
  {
    (*(void (__fastcall **)(_QWORD, char *, __int64))(*(_QWORD *)xmmword_1801A3FB0 + 72LL))(
      xmmword_1801A3FB0,
      (char *)this + 72,
      2LL);
    *((_BYTE *)this + 57) = 0;
  }
}
