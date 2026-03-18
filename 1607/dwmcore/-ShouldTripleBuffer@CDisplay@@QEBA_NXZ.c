/*
 * XREFs of ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x1800343C8
 * Callers:
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUHWND__@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAIPEA_N@Z @ 0x180034420 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAU.c)
 * Callees:
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180034D3C (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?IsWarpAdapterLuid@CDisplayManager@@QEAA_NU_LUID@@@Z @ 0x1800380E0 (-IsWarpAdapterLuid@CDisplayManager@@QEAA_NU_LUID@@@Z.c)
 */

char __fastcall CDisplay::ShouldTripleBuffer(struct _LUID *this)
{
  char v2; // cl

  if ( CDisplayManager::IsWarpAdapterLuid((CDisplayManager *)this, this[29])
    || g_pComposition && *((_QWORD *)g_pComposition + 65) && !CDisplay::IsPrimary((CDisplay *)this) )
  {
    return 0;
  }
  v2 = 1;
  if ( OSInfo::ProductType - 2 <= 1 )
    return 0;
  return v2;
}
