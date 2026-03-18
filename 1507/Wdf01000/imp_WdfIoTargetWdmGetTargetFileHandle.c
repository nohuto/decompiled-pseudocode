/*
 * XREFs of imp_WdfIoTargetWdmGetTargetFileHandle @ 0x1C0082C70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void *__fastcall imp_WdfIoTargetWdmGetTargetFileHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 IoTarget)
{
  WDFIOTARGET__ *_a1; // rbx
  FxIoTargetRemote *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  void *m_TargetHandle; // rsi
  FxIoTargetRemote *pTarget; // [rsp+68h] [rbp+10h] BYREF

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
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x3Du, WPP_FxIoTargetAPI_cpp_Traceguids, _a1);
    v3 = pTarget;
  }
  m_TargetHandle = v3->m_TargetHandle;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x3Eu, WPP_FxIoTargetAPI_cpp_Traceguids, _a1, v3->m_TargetHandle);
  return m_TargetHandle;
}
