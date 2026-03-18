/*
 * XREFs of imp_WdfIoTargetPurge @ 0x1C0082190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

void __fastcall imp_WdfIoTargetPurge(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 IoTarget, int Action)
{
  FxIoTarget *v4; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 CurrentIrql; // al
  FxIoTarget *pTarget; // [rsp+68h] [rbp+20h] BYREF

  if ( !IoTarget )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1200uLL);
  v4 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  Offset = 0LL;
  if ( (IoTarget & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxIoTarget *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4608 )
  {
    pTarget = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pTarget, (void *)IoTarget, 0x1200u, Offset);
    v4 = pTarget;
  }
  m_Globals = v4->m_Globals;
  if ( Action && Action <= 2 )
  {
    if ( Action == 1 && m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
    else
    {
      ((void (__fastcall *)(FxIoTarget *, _QWORD, __int64))v4->Purge)(v4, (unsigned int)Action, Offset);
    }
  }
  else
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0xBu, WPP_FxIoTargetAPI_cpp_Traceguids, Action);
  }
}
