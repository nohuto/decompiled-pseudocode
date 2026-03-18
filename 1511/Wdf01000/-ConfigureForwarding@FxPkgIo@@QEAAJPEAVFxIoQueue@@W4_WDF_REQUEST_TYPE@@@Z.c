/*
 * XREFs of ?ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z @ 0x1C0081B7C
 * Callers:
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x1C0066ED0 (imp_WdfDeviceConfigureRequestDispatching.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C001E254 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0023108 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_Lqd @ 0x1C0081EEC (WPP_IFR_SF_Lqd.c)
 */

__int64 __fastcall FxPkgIo::ConfigureForwarding(FxPkgIo *this, FxIoQueue *TargetQueue, _WDF_REQUEST_TYPE RequestType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 _a3; // r14
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned int v9; // edi
  const void *globals; // rbx
  unsigned int v11; // r8d
  FxIoQueue *m_DefaultQueue; // rax
  const void *v13; // rbx
  FxIoQueue *v14; // rdx
  const void *v15; // rbx
  unsigned __int8 v16; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  _a3 = RequestType;
  v9 = 0;
  if ( FxIoQueue::IsIoEventHandlerRegistered(TargetQueue, RequestType) )
  {
    FxNonPagedObject::Lock(this, &irql, v8);
    m_DefaultQueue = this->m_DefaultQueue;
    if ( TargetQueue == m_DefaultQueue )
    {
      if ( TargetQueue->m_ObjectSize )
        v13 = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v13 = 0LL;
      v9 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x19u, WPP_FxPkgIo_cpp_Traceguids, v13, -1073741808);
    }
    else
    {
      v14 = this->m_DispatchTable[_a3];
      if ( !v14 || v14 == m_DefaultQueue )
      {
        this->m_DispatchTable[_a3] = TargetQueue;
        FxObject::MarkNoDeleteDDI(TargetQueue, ObjectLock);
        goto LABEL_19;
      }
      if ( TargetQueue->m_ObjectSize )
        v15 = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      v9 = -1071644156;
      WPP_IFR_SF_Lqd(m_Globals, (unsigned __int8)v14, v11, 0x1Au, WPP_FxPkgIo_cpp_Traceguids, _a3, v15, -1071644156);
    }
    FxVerifierDbgBreakPoint(m_Globals);
LABEL_19:
    FxNonPagedObject::Unlock(this, irql, v16);
    return v9;
  }
  if ( TargetQueue->m_ObjectSize )
    globals = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    globals = 0LL;
  v9 = -1073741808;
  WPP_IFR_SF_Lqd(m_Globals, v7, v8, 0x18u, WPP_FxPkgIo_cpp_Traceguids, _a3, globals, -1073741808);
  FxVerifierDbgBreakPoint(m_Globals);
  return v9;
}
