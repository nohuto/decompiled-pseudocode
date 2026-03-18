/*
 * XREFs of ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C000838C
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C0071620 (DxgkDisplayOnOff.c)
 *     DxgkSetDisplayMode @ 0x1C0071D40 (DxgkSetDisplayMode.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C008BE9C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C008C040 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00D9440 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00DE56C (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkSetGammaRamp @ 0x1C0161A50 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008620 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 */

__int64 __fastcall COREDEVICEACCESS::AcquireExclusive(__int64 a1)
{
  COREACCESS *v1; // rdi

  v1 = (COREACCESS *)(a1 + 8);
  COREACCESS::AcquireExclusive(a1 + 8);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 72) + 376LL) == 1 )
  {
    if ( !*(_BYTE *)(a1 + 80) )
      return 0LL;
    COREACCESS::AcquireExclusive(a1 + 40);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 56) + 176LL) == 1 )
      return 0LL;
    COREACCESS::Release((COREACCESS *)(a1 + 40));
  }
  COREACCESS::Release(v1);
  return 3221226166LL;
}
