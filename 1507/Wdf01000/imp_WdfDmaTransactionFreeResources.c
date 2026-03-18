/*
 * XREFs of imp_WdfDmaTransactionFreeResources @ 0x1C005E700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C0061BC8 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 */

void __fastcall imp_WdfDmaTransactionFreeResources(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 DmaTransaction)
{
  WDFDMATRANSACTION__ *_a1; // rbx
  FxDmaPacketTransaction *v3; // rcx
  FxDmaEnabler *m_DmaEnabler; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int m_Profile; // eax
  int v7; // r8d
  const void *_a2; // rdx
  FxDmaPacketTransaction *pDmaTrans; // [rsp+60h] [rbp+18h] BYREF

  _a1 = (WDFDMATRANSACTION__ *)DmaTransaction;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v3 = (FxDmaPacketTransaction *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DmaTransaction) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    DmaTransaction = LOWORD(v3->__vftable);
    v3 = (FxDmaPacketTransaction *)((char *)v3 - DmaTransaction);
  }
  if ( v3->m_Type == 5121 )
  {
    pDmaTrans = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pDmaTrans, _a1, 0x1401u, DmaTransaction);
    v3 = pDmaTrans;
  }
  m_DmaEnabler = v3->m_DmaEnabler;
  m_Globals = v3->m_Globals;
  m_Profile = m_DmaEnabler->m_Profile;
  if ( m_Profile <= 8 && (v7 = 394, _bittest(&v7, m_Profile)) )
  {
    if ( m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    {
      FxDmaPacketTransaction::ReleaseAdapter(v3);
      return;
    }
    if ( m_DmaEnabler->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)m_DmaEnabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0xFu, 0x23u, WPP_FxDmaTransactionAPI_cpp_Traceguids, _a1, _a2);
  }
  else
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x22u, WPP_FxDmaTransactionAPI_cpp_Traceguids, _a1, m_Profile);
  }
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
