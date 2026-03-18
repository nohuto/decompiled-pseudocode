/*
 * XREFs of imp_WdfTimerStop @ 0x1C0001110
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0014518 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_D @ 0x1C0070554 (WPP_IFR_SF_D.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

BOOLEAN __fastcall imp_WdfTimerStop(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Timer, unsigned __int8 Wait)
{
  FxTimer *v4; // rbx
  __int64 Offset; // rcx
  FxTimer *v9; // rbx
  FxTimer *v10; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v12; // edx
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // di
  FxSystemWorkItem *m_SystemWorkItem; // rbp
  FxTimer *v16; // rbx
  const void *_a1; // rdx
  unsigned __int8 CurrentIrql; // al
  _FX_DRIVER_GLOBALS *v19; // r10
  struct _KTHREAD *_a2; // rcx
  const void *v21; // r8
  struct _KTHREAD *_a3; // [rsp+38h] [rbp-20h]
  unsigned __int8 PreviousIrql; // [rsp+68h] [rbp+10h] BYREF
  FxTimer *pFxTimer; // [rsp+78h] [rbp+20h] BYREF

  if ( !Timer )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1028uLL);
  v4 = (FxTimer *)(~Timer & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Timer & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxTimer *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4136 )
  {
    pFxTimer = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pFxTimer, (void *)Timer, 0x1028u, Offset);
    v4 = pFxTimer;
  }
  if ( !Wait )
  {
    if ( v4->m_Timer.m_Timer.m_IsExtTimer )
      return ExCancelTimer(v4->m_Timer.m_Timer.m_KernelExTimer, 0LL);
    else
      return KeCancelTimer(&v4->m_Timer.m_Timer.KernelTimer);
  }
  if ( FxVerifierCheckIrqlLevel(v4->m_Globals, 0) < 0 )
    return 0;
  v9 = pFxTimer;
  if ( pFxTimer->m_CallbackThread == KeGetCurrentThread() )
  {
    v16 = pFxTimer;
    _a1 = (const void *)((unsigned __int64)pFxTimer ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pFxTimer->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(pFxTimer->m_Globals, 2u, 0x12u, 0x11u, WPP_FxTimer_cpp_Traceguids, _a1, pFxTimer->m_CallbackThread);
    FxVerifierDbgBreakPoint(v16->m_Globals);
    return 0;
  }
  v10 = pFxTimer;
  m_Globals = pFxTimer->m_Globals;
  if ( m_Globals->FxVerifierOn && KeGetCurrentIrql() )
  {
    CurrentIrql = KeGetCurrentIrql();
    WPP_IFR_SF_D(m_Globals, CurrentIrql, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
    FxVerifierDbgBreakPoint(v10->m_Globals);
    return 0;
  }
  FxNonPagedObject::Lock(pFxTimer, &PreviousIrql);
  if ( v10->m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v10->m_Globals, v12, 9u) || v19->FxVerifyDownlevel) )
  {
    _a2 = v9->m_StopThread;
    if ( _a2 )
    {
      _a3 = KeGetCurrentThread();
      v21 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v9->m_ObjectSize )
        v21 = 0LL;
      WPP_IFR_SF_qqq(v19, 2u, 0x12u, 0x13u, WPP_FxTimer_cpp_Traceguids, v21, _a2, _a3);
      FxVerifierDbgBreakPoint(v10->m_Globals);
    }
  }
  v9->m_StartAborted = 0;
  v9->m_StopThread = KeGetCurrentThread();
  do
  {
    v13 = PreviousIrql;
    v9->m_StopAgain = 0;
    FxNonPagedObject::Unlock(v9, v13);
    v14 = MxTimer::Stop(&v9->m_Timer);
    KeFlushQueuedDpcs();
    m_SystemWorkItem = v9->m_SystemWorkItem;
    if ( m_SystemWorkItem )
    {
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
    }
    FxNonPagedObject::Lock(v9, &PreviousIrql);
  }
  while ( !v14 && v9->m_StopAgain );
  v9->m_StopThread = 0LL;
  v9->m_StopAgain = 0;
  if ( v9->m_StartAborted )
  {
    v14 = 1;
    v9->m_StartAborted = 0;
  }
  FxNonPagedObject::Unlock(v9, PreviousIrql);
  return v14;
}
