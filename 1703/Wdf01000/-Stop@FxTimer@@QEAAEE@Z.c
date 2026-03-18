/*
 * XREFs of ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0066A98
 * Callers:
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C007E75C (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0014518 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_D @ 0x1C0070554 (WPP_IFR_SF_D.c)
 */

BOOLEAN __fastcall FxTimer::Stop(FxTimer *this, unsigned __int8 Wait, unsigned __int8 a3)
{
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v7; // rdx
  _FX_DRIVER_GLOBALS *v9; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned int v11; // edx
  unsigned __int8 v12; // r8
  _FX_DRIVER_GLOBALS *v13; // r10
  struct _KTHREAD *_a2; // rcx
  const void *v15; // r8
  unsigned __int8 v16; // dl
  BOOLEAN v17; // di
  unsigned __int8 v18; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rsi
  struct _KTHREAD *_a3; // [rsp+38h] [rbp-20h]
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  if ( !Wait )
    return MxTimer::Stop(&this->m_Timer);
  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    m_ObjectSize = this->m_ObjectSize;
    m_Globals = this->m_Globals;
    v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v7 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x11u, WPP_FxTimer_cpp_Traceguids, v7, this->m_CallbackThread);
    goto LABEL_6;
  }
  v9 = this->m_Globals;
  if ( v9->FxVerifierOn && KeGetCurrentIrql() )
  {
    CurrentIrql = KeGetCurrentIrql();
    WPP_IFR_SF_D(v9, CurrentIrql, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
LABEL_6:
    FxVerifierDbgBreakPoint(this->m_Globals);
    return 0;
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( this->m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v11, 9u) || v13->FxVerifyDownlevel) )
  {
    _a2 = this->m_StopThread;
    if ( _a2 )
    {
      _a3 = KeGetCurrentThread();
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_qqq(v13, 2u, 0x12u, 0x13u, WPP_FxTimer_cpp_Traceguids, v15, _a2, _a3);
      FxVerifierDbgBreakPoint(this->m_Globals);
    }
  }
  this->m_StartAborted = 0;
  this->m_StopThread = KeGetCurrentThread();
  do
  {
    v16 = irql;
    this->m_StopAgain = 0;
    FxNonPagedObject::Unlock(this, v16, v12);
    v17 = MxTimer::Stop(&this->m_Timer);
    KeFlushQueuedDpcs();
    m_SystemWorkItem = this->m_SystemWorkItem;
    if ( m_SystemWorkItem )
    {
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
    }
    FxNonPagedObject::Lock(this, &irql, v18);
  }
  while ( !v17 && this->m_StopAgain );
  this->m_StopThread = 0LL;
  this->m_StopAgain = 0;
  if ( this->m_StartAborted )
  {
    v17 = 1;
    this->m_StartAborted = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v12);
  return v17;
}
