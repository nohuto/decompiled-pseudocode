/*
 * XREFs of ?GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ @ 0x180034398
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007EB8C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ @ 0x180166F3C (-EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct IDXGIOutput *__fastcall CDisplay::GetDXGIOutput(CDisplay *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return (struct IDXGIOutput *)*((_QWORD *)this + 5);
}
