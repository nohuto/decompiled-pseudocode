/*
 * XREFs of ?GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ @ 0x180090964
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18008F758 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct IDXGIOutput *__fastcall CDisplay::GetDXGIOutput(CDisplay *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*((_QWORD *)this + 6));
  return (struct IDXGIOutput *)*((_QWORD *)this + 6);
}
