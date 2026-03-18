/*
 * XREFs of ?Stop@FxTimer@@QEAAEE@Z @ 0x1C00637A0
 * Callers:
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C007A838 (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C00137D8 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C002B1C8 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C00671F0 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_D @ 0x1C006CC30 (WPP_IFR_SF_D.c)
 */

BOOLEAN __fastcall FxTimer::Stop(FxTimer *this, unsigned __int8 Wait, unsigned __int8 a3)
{
  const void *_a1; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned int v8; // edx
  unsigned __int8 v9; // r8
  _FX_DRIVER_GLOBALS *v10; // r10
  struct _KTHREAD *_a2; // rcx
  struct _KTHREAD *_a3; // rdx
  const void *v13; // rax
  unsigned __int8 v14; // dl
  BOOLEAN v15; // si
  unsigned __int8 v16; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  unsigned __int8 irql; // [rsp+58h] [rbp+10h] BYREF

  _a1 = 0LL;
  if ( !Wait )
    return MxTimer::Stop(&this->m_Timer);
  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0x11u, WPP_FxTimer_cpp_Traceguids, _a1, this->m_CallbackThread);
    goto LABEL_6;
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn && KeGetCurrentIrql() )
  {
    CurrentIrql = KeGetCurrentIrql();
    WPP_IFR_SF_D(m_Globals, CurrentIrql, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
LABEL_6:
    FxVerifierDbgBreakPoint(this->m_Globals);
    return 0;
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( this->m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v8, 9u) || v10->FxVerifyDownlevel) )
  {
    _a2 = this->m_StopThread;
    if ( _a2 )
    {
      _a3 = KeGetCurrentThread();
      if ( this->m_ObjectSize )
        v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v13 = 0LL;
      WPP_IFR_SF_qqq(v10, 2u, 0x12u, 0x13u, WPP_FxTimer_cpp_Traceguids, v13, _a2, _a3);
      FxVerifierDbgBreakPoint(this->m_Globals);
    }
  }
  this->m_StartAborted = 0;
  this->m_StopThread = KeGetCurrentThread();
  do
  {
    v14 = irql;
    this->m_StopAgain = 0;
    FxNonPagedObject::Unlock(this, v14, v9);
    v15 = MxTimer::Stop(&this->m_Timer);
    KeFlushQueuedDpcs();
    m_SystemWorkItem = this->m_SystemWorkItem;
    if ( m_SystemWorkItem )
      FxCREvent::EnterCRAndWaitAndLeave(&m_SystemWorkItem->m_WorkItemCompleted);
    FxNonPagedObject::Lock(this, &irql, v16);
  }
  while ( !v15 && this->m_StopAgain );
  this->m_StopThread = 0LL;
  this->m_StopAgain = 0;
  if ( this->m_StartAborted )
  {
    v15 = 1;
    this->m_StartAborted = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v9);
  return v15;
}
