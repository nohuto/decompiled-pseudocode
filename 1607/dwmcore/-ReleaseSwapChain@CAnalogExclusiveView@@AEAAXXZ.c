/*
 * XREFs of ?ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x180165AEC
 * Callers:
 *     ?ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x18010E98C (-ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVI.c)
 *     ?DetachFromChannel@CAnalogExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801656B0 (-DetachFromChannel@CAnalogExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?NotifyInvalid@CAnalogExclusiveView@@UEAAXPEBVIDeviceResource@@@Z @ 0x180165720 (-NotifyInvalid@CAnalogExclusiveView@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180165750 (-NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CAnalogExclusiveView::ReleaseSwapChain(CAnalogExclusiveView *this)
{
  RTL_SRWLOCK *v1; // rdi

  v1 = (RTL_SRWLOCK *)((char *)this + 184);
  AcquireSRWLockExclusive((PSRWLOCK)this + 23);
  if ( *((_QWORD *)this + 17) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 17));
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  ReleaseSRWLockExclusive(v1);
}
