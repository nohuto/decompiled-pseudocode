/*
 * XREFs of ?ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z @ 0x1C008E99C
 * Callers:
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x1C0066ED0 (imp_WdfDeviceConfigureRequestDispatching.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C001E254 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureForwarding(FxPkgGeneral *this, FxIoQueue *TargetQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int v5; // esi
  unsigned __int8 v6; // r8
  const void *_a1; // rbx
  unsigned __int8 v9; // r8
  FxIoQueue *m_DriverCreatedQueue; // rax
  const void *v11; // rax
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v5 = 0;
  if ( FxIoQueue::IsIoEventHandlerRegistered(TargetQueue, WdfRequestTypeCreate) )
  {
    FxNonPagedObject::Lock(this, &irql, v6);
    m_DriverCreatedQueue = this->m_DriverCreatedQueue;
    if ( m_DriverCreatedQueue )
    {
      v5 = -1073741811;
      if ( m_DriverCreatedQueue->m_ObjectSize )
        v11 = (const void *)((unsigned __int64)m_DriverCreatedQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v11 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x13u, WPP_FxPkgGeneral_cpp_Traceguids, v11, -1073741811);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    else
    {
      this->m_DriverCreatedQueue = TargetQueue;
    }
    FxNonPagedObject::Unlock(this, irql, v9);
    return v5;
  }
  else
  {
    if ( TargetQueue->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x12u, WPP_FxPkgGeneral_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
}
