/*
 * XREFs of ?ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z @ 0x1C00A4A3C
 * Callers:
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x1C0070BB0 (imp_WdfDeviceConfigureRequestDispatching.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C000C9E8 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureForwarding(FxPkgGeneral *this, FxIoQueue *TargetQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int v5; // esi
  unsigned __int8 v6; // r8
  const void *_a1; // rdi
  unsigned __int8 v9; // r8
  FxIoQueue *m_DriverCreatedQueue; // rax
  const void *v11; // rax
  FxCallbackLock *m_CallbackLockPtr; // rcx
  int irql; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+70h] [rbp+18h]

  m_Globals = this->m_Globals;
  v5 = 0;
  if ( FxIoQueue::IsIoEventHandlerRegistered(TargetQueue, WdfRequestTypeCreate) )
  {
    FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, v6);
    m_DriverCreatedQueue = this->m_DriverCreatedQueue;
    if ( m_DriverCreatedQueue )
    {
      v5 = -1073741811;
      if ( m_DriverCreatedQueue->m_ObjectSize )
        v11 = (const void *)((unsigned __int64)m_DriverCreatedQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v11 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x13u, WPP_FxPkgGeneral_cpp_Traceguids, v11, -1073741811);
      v14 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
    else
    {
      this->m_DriverCreatedQueue = TargetQueue;
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_CallbackLockPtr = this[-1].m_CallbackLockPtr) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)m_CallbackLockPtr, irql, v9);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    return v5;
  }
  else
  {
    if ( TargetQueue->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x12u, WPP_FxPkgGeneral_cpp_Traceguids, _a1, -1073741808);
    irql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
}
