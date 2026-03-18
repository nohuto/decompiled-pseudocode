/*
 * XREFs of imp_WdfInterruptSynchronize @ 0x1C0098CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

BOOLEAN __fastcall imp_WdfInterruptSynchronize(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Interrupt,
        unsigned __int8 (__fastcall *Callback)(WDFINTERRUPT__ *, void *),
        void *Context)
{
  FxInterrupt *v6; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KINTERRUPT *m_Interrupt; // rax
  FxInterrupt *pFxInterrupt; // [rsp+40h] [rbp-28h] BYREF
  _QWORD SynchronizeContext[3]; // [rsp+48h] [rbp-20h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

  if ( !Interrupt )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1027uLL);
  v6 = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Interrupt & 1) != 0 )
  {
    Offset = LOWORD(v6->__vftable);
    v6 = (FxInterrupt *)((char *)v6 - Offset);
  }
  if ( v6->m_Type == 4135 )
  {
    pFxInterrupt = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pFxInterrupt, (void *)Interrupt, 0x1027u, Offset);
    v6 = pFxInterrupt;
  }
  if ( v6->m_PassiveHandling
    && (m_Globals = v6->m_Globals, m_Globals->FxVerifierOn)
    && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 0;
  }
  else
  {
    if ( !Callback )
      FxVerifierNullBugCheck(v6->m_Globals, retaddr);
    m_Interrupt = v6->m_Interrupt;
    SynchronizeContext[0] = v6;
    SynchronizeContext[1] = Callback;
    SynchronizeContext[2] = Context;
    if ( !m_Interrupt )
      m_Interrupt = v6->m_InterruptCaptured;
    return KeSynchronizeExecution(m_Interrupt, FxInterrupt::_InterruptSynchronizeThunk, SynchronizeContext);
  }
}
