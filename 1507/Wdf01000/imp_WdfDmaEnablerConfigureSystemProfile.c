/*
 * XREFs of imp_WdfDmaEnablerConfigureSystemProfile @ 0x1C005FC70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1C00256D4 (WPP_IFR_SF_Dd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0064C70 (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 */

int __fastcall imp_WdfDmaEnablerConfigureSystemProfile(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaEnabler,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *ProfileConfig,
        unsigned int ConfigDirection)
{
  FxDmaEnabler *v6; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxDmaEnabler *pDmaEnabler; // [rsp+40h] [rbp-10h] BYREF

  if ( !DmaEnabler )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1400uLL);
  v6 = (FxDmaEnabler *)(~DmaEnabler & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (DmaEnabler & 1) != 0 )
  {
    Offset = LOWORD(v6->__vftable);
    v6 = (FxDmaEnabler *)((char *)v6 - Offset);
  }
  if ( v6->m_Type == 5120 )
  {
    pDmaEnabler = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pDmaEnabler, (void *)DmaEnabler, 0x1400u, Offset);
    v6 = pDmaEnabler;
  }
  m_Globals = v6->m_Globals;
  if ( !ProfileConfig )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaEnablerAPI_cpp_Traceguids, -1073741811);
    goto LABEL_10;
  }
  if ( ProfileConfig->Size == 32 )
  {
    if ( !ProfileConfig->DmaDescriptor )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x16u, WPP_FxDmaEnablerAPI_cpp_Traceguids, ProfileConfig, -1073741811);
LABEL_10:
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return -1073741811;
    }
    if ( ConfigDirection > 1 )
    {
      WPP_IFR_SF_Dd(m_Globals, 2u, 0xFu, 0x17u, WPP_FxDmaEnablerAPI_cpp_Traceguids, ConfigDirection, -1073741811);
      return -1073741811;
    }
    return FxDmaEnabler::ConfigureSystemAdapter(v6, ProfileConfig, (_WDF_DMA_DIRECTION)ConfigDirection);
  }
  else
  {
    WPP_IFR_SF_DDd(
      m_Globals,
      DmaEnabler,
      0xFu,
      0x15u,
      WPP_FxDmaEnablerAPI_cpp_Traceguids,
      ProfileConfig->Size,
      32,
      -1073741820);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741820;
  }
}
