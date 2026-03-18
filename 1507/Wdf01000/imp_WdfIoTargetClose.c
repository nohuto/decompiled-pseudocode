/*
 * XREFs of imp_WdfIoTargetClose @ 0x1C0081DF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0085BB4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 */

void __fastcall imp_WdfIoTargetClose(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 IoTarget)
{
  WDFIOTARGET__ *_a1; // rdi
  FxIoTargetRemote *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  FxIoTargetRemote *pTarget; // [rsp+60h] [rbp+18h] BYREF

  _a1 = (WDFIOTARGET__ *)IoTarget;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1201uLL);
  v3 = (FxIoTargetRemote *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(IoTarget) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    IoTarget = LOWORD(v3->__vftable);
    v3 = (FxIoTargetRemote *)((char *)v3 - IoTarget);
  }
  if ( v3->m_Type == 4609 )
  {
    pTarget = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pTarget, _a1, 0x1201u, IoTarget);
    v3 = pTarget;
  }
  m_Globals = v3->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x18u, WPP_FxIoTargetAPI_cpp_Traceguids, _a1);
    v3 = pTarget;
  }
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    FxIoTargetRemote::Close(v3, FxIoTargetRemoteCloseReasonPlainClose);
  }
}
