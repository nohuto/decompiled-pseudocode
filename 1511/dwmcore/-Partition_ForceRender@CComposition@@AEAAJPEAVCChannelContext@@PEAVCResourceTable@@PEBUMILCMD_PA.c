/*
 * XREFs of ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800957EC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x180094AF8 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 *     ?LogTempHardwareProtectionState@CComposition@@SAXXZ @ 0x180100F20 (-LogTempHardwareProtectionState@CComposition@@SAXXZ.c)
 *     ?TempDisableHardwareProtection@CComposition@@SAXXZ @ 0x1801017A0 (-TempDisableHardwareProtection@CComposition@@SAXXZ.c)
 */

__int64 __fastcall CComposition::Partition_ForceRender(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_FORCERENDER *a4)
{
  if ( *((_DWORD *)a4 + 1) )
    *(_BYTE *)(*((_QWORD *)this + 4) + 110LL) = 1;
  if ( *((_DWORD *)a4 + 3) == 1 && CComposition::s_cHwProtectedEntities )
  {
    CComposition::TempDisableHardwareProtection();
  }
  else if ( *((_DWORD *)a4 + 3) == 2 && CComposition::s_bHwProtectionTempDisabled )
  {
    CComposition::s_bHwProtectionTempDisabled = 0;
    CComposition::LogTempHardwareProtectionState();
  }
  CComposition::ForceFullRender(this, *((_DWORD *)a4 + 2) != 0);
  return 0LL;
}
