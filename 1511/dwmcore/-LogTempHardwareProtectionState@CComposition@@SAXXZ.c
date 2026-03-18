/*
 * XREFs of ?LogTempHardwareProtectionState@CComposition@@SAXXZ @ 0x180100F20
 * Callers:
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800957EC (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?TempDisableHardwareProtection@CComposition@@SAXXZ @ 0x1801017A0 (-TempDisableHardwareProtection@CComposition@@SAXXZ.c)
 * Callees:
 *     Template_q @ 0x180111C90 (Template_q.c)
 */

void __fastcall CComposition::LogTempHardwareProtectionState(__int64 a1)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(a1, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, CComposition::s_bHwProtectionTempDisabled);
}
