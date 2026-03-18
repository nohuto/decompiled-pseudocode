/*
 * XREFs of ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003EFF4
 * Callers:
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C00016B0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     imp_WdfRegistryClose @ 0x1C0001F60 (imp_WdfRegistryClose.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0006000 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006A40 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007930 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009E80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C000ABA0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C000B050 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C000B120 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C000B310 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000B600 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?SelfDestruct@FxObject@@MEAAXXZ @ 0x1C000BF70 (-SelfDestruct@FxObject@@MEAAXXZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000C660 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C000C920 (imp_WdfRegistryOpenKey.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000E810 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000F470 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0010CF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     imp_WdfObjectDereferenceActual @ 0x1C0015F10 (imp_WdfObjectDereferenceActual.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C001B738 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     FxIoTargetSendIoctl @ 0x1C00287A0 (FxIoTargetSendIoctl.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0029E20 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C006A220 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C007AF44 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x1C007AF80 (--1FxCallbackSpinLock@@UEAA@XZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C007B134 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 */

FxVerifierLock *__fastcall FxVerifierLock::`scalar deleting destructor'(FxVerifierLock *this)
{
  struct _KTHREAD *m_OwningThread; // rcx

  m_OwningThread = this->m_OwningThread;
  if ( m_OwningThread )
  {
    WPP_IFR_SF_qqq(
      this->m_Globals,
      2u,
      0x12u,
      0xDu,
      WPP_FxVerifierLock_hpp_Traceguids,
      this,
      m_OwningThread,
      this->m_ParentObject);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  this->m_Mutex.m_DbgFlagIsInitialized = 0;
  this->m_Lock.m_DbgFlagIsInitialized = 0;
  FxPoolFree(this);
  return this;
}
