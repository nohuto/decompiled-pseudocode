/*
 * XREFs of ?TempDisableHardwareProtection@CComposition@@SAXXZ @ 0x1801017A0
 * Callers:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800957EC (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 * Callees:
 *     ?LogTempHardwareProtectionState@CComposition@@SAXXZ @ 0x180100F20 (-LogTempHardwareProtectionState@CComposition@@SAXXZ.c)
 */

void __fastcall CComposition::TempDisableHardwareProtection(__int64 a1)
{
  bool v1; // al

  v1 = CComposition::s_bHwProtectionTempDisabled;
  CComposition::s_bHwProtectionTempDisabled = 1;
  if ( !v1 )
    CComposition::LogTempHardwareProtectionState(a1);
}
