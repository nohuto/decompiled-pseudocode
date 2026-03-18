/*
 * XREFs of ?DwmEnableHDR@CD3DDeviceManager@@SAJXZ @ 0x180172850
 * Callers:
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUHWND__@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAIPEA_N@Z @ 0x180034420 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 CD3DDeviceManager::DwmEnableHDR(void)
{
  unsigned int v0; // ebx
  HMODULE LibraryA; // rax
  unsigned int (*ProcAddress)(void); // rax

  v0 = -2147467263;
  if ( CCommonRegistryData::m_fEnableHighColor )
  {
    LibraryA = hModule;
    if ( hModule == (HMODULE)-1LL )
    {
      LibraryA = LoadLibraryA("dwmhdr.dll");
      hModule = LibraryA;
    }
    if ( LibraryA )
    {
      ProcAddress = (unsigned int (*)(void))GetProcAddress(LibraryA, "DwmEnableHDR");
      if ( ProcAddress )
        return ProcAddress();
    }
  }
  return v0;
}
