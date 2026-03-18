/*
 * XREFs of ?UnregisterSurfaceHandles@CAnalogExclusiveView@@AEAAXXZ @ 0x180165B4C
 * Callers:
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x180165588 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180165750 (-NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnalogExclusiveView::UnregisterSurfaceHandles(CAnalogExclusiveView *this)
{
  if ( *((_BYTE *)this + 129) )
  {
    (*(void (__fastcall **)(_QWORD, char *, __int64))(*(_QWORD *)xmmword_1801F03A0 + 72LL))(
      xmmword_1801F03A0,
      (char *)this + 144,
      2LL);
    *((_BYTE *)this + 129) = 0;
  }
}
