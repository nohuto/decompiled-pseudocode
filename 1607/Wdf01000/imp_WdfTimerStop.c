/*
 * XREFs of imp_WdfTimerStop @ 0x1C0001000
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C00137D8 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C002B1C8 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C00671F0 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_D @ 0x1C006CC30 (WPP_IFR_SF_D.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

BOOLEAN __fastcall imp_WdfTimerStop(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Timer, unsigned __int8 Wait)
{
  const void *_a1; // rsi
  FxTimer *v5; // rbx
  __int64 Offset; // rcx
  FxTimer *v10; // rbx
  FxTimer *v11; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v13; // edx
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // di
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  FxTimer *v17; // rbx
  unsigned __int8 CurrentIrql; // al
  _FX_DRIVER_GLOBALS *v19; // r10
  struct _KTHREAD *_a2; // rcx
  struct _KTHREAD *_a3; // rdx
  const void *v22; // rax
  unsigned __int8 PreviousIrql; // [rsp+68h] [rbp+10h] BYREF
  FxTimer *pFxTimer; // [rsp+78h] [rbp+20h] BYREF

  if ( !Timer )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1028uLL);
  _a1 = 0LL;
  v5 = (FxTimer *)(~Timer & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Timer & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxTimer *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4136 )
  {
    pFxTimer = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pFxTimer, (void *)Timer, 0x1028u, Offset);
    v5 = pFxTimer;
  }
  if ( !Wait )
  {
    if ( v5->m_Timer.m_Timer.m_IsExtTimer )
      return ExCancelTimer(v5->m_Timer.m_Timer.m_KernelExTimer, 0LL);
    else
      return KeCancelTimer(&v5->m_Timer.m_Timer.KernelTimer);
  }
  if ( FxVerifierCheckIrqlLevel(v5->m_Globals, 0) < 0 )
    return 0;
  v10 = pFxTimer;
  if ( pFxTimer->m_CallbackThread == KeGetCurrentThread() )
  {
    v17 = pFxTimer;
    if ( pFxTimer->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)pFxTimer ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qq(pFxTimer->m_Globals, 2u, 0x12u, 0x11u, WPP_FxTimer_cpp_Traceguids, _a1, pFxTimer->m_CallbackThread);
    FxVerifierDbgBreakPoint(v17->m_Globals);
    return 0;
  }
  v11 = pFxTimer;
  m_Globals = pFxTimer->m_Globals;
  if ( m_Globals->FxVerifierOn && KeGetCurrentIrql() )
  {
    CurrentIrql = KeGetCurrentIrql();
    WPP_IFR_SF_D(m_Globals, CurrentIrql, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
    FxVerifierDbgBreakPoint(v11->m_Globals);
    return 0;
  }
  FxNonPagedObject::Lock(pFxTimer, &PreviousIrql);
  if ( v11->m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v11->m_Globals, v13, 9u) || v19->FxVerifyDownlevel) )
  {
    _a2 = v10->m_StopThread;
    if ( _a2 )
    {
      _a3 = KeGetCurrentThread();
      if ( v10->m_ObjectSize )
        v22 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v22 = 0LL;
      WPP_IFR_SF_qqq(v19, 2u, 0x12u, 0x13u, WPP_FxTimer_cpp_Traceguids, v22, _a2, _a3);
      FxVerifierDbgBreakPoint(v11->m_Globals);
    }
  }
  v10->m_StartAborted = 0;
  v10->m_StopThread = KeGetCurrentThread();
  do
  {
    v14 = PreviousIrql;
    v10->m_StopAgain = 0;
    FxNonPagedObject::Unlock(v10, v14);
    v15 = MxTimer::Stop(&v10->m_Timer);
    KeFlushQueuedDpcs();
    m_SystemWorkItem = v10->m_SystemWorkItem;
    if ( m_SystemWorkItem )
      FxCREvent::EnterCRAndWaitAndLeave(&m_SystemWorkItem->m_WorkItemCompleted);
    FxNonPagedObject::Lock(v10, &PreviousIrql);
  }
  while ( !v15 && v10->m_StopAgain );
  v10->m_StopThread = 0LL;
  v10->m_StopAgain = 0;
  if ( v10->m_StartAborted )
  {
    v15 = 1;
    v10->m_StartAborted = 0;
  }
  FxNonPagedObject::Unlock(v10, PreviousIrql);
  return v15;
}
