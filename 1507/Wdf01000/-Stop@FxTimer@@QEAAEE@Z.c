/*
 * XREFs of ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0007D00
 * Callers:
 *     imp_WdfTimerStop @ 0x1C0007C80 (imp_WdfTimerStop.c)
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C0077874 (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_D @ 0x1C00659E0 (WPP_IFR_SF_D.c)
 */

BOOLEAN __fastcall FxTimer::Stop(FxTimer *this, unsigned __int8 Wait, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v5; // edx
  unsigned __int8 v6; // r8
  char m_ObjectFlags; // al
  BOOLEAN v8; // al
  char v9; // di
  unsigned __int8 v10; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  const void *_a1; // rdx
  int *v14; // rcx
  int *v15; // r8
  unsigned __int8 CurrentIrql; // al
  __int64 v17; // rax
  _FX_DRIVER_GLOBALS *v18; // r10
  struct _KTHREAD *_a2; // rcx
  struct _KTHREAD *_a3; // rdx
  const void *v21; // rax
  _FX_DRIVER_GLOBALS *v22; // rax
  __int64 v23; // rax
  FxVerifierLock *m_CallbackThread; // rcx
  FxVerifierLock *v25; // rcx
  char v27[16]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+78h] [rbp+28h] BYREF
  int v29; // [rsp+80h] [rbp+30h] BYREF
  int v30; // [rsp+88h] [rbp+38h] BYREF

  if ( !Wait )
  {
    if ( this->m_Timer.m_Timer.m_IsExtTimer )
      return ExCancelTimer(this->m_Timer.m_Timer.m_KernelExTimer, 0LL);
    else
      return KeCancelTimer(&this->m_Timer.m_Timer.KernelTimer);
  }
  if ( this->m_CallbackThread != KeGetCurrentThread() )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn && KeGetCurrentIrql() )
    {
      CurrentIrql = KeGetCurrentIrql();
      WPP_IFR_SF_D(m_Globals, CurrentIrql, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
      v14 = &v30;
      v30 = 7567731;
      v15 = &v30;
      goto LABEL_22;
    }
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( this->m_Globals->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v5, 9u) || v18->FxVerifyDownlevel) )
    {
      _a2 = this->m_StopThread;
      if ( _a2 )
      {
        _a3 = KeGetCurrentThread();
        v21 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
        WPP_IFR_SF_qqq(v18, 2u, 0x12u, 0x13u, WPP_FxTimer_cpp_Traceguids, v21, _a2, _a3);
        v22 = this->m_Globals;
        *(_DWORD *)v27 = 7567731;
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
          v22->Public.DriverName,
          v27,
          v22->Public.DriverName,
          v27);
        if ( *(_BYTE *)(v23 + 318) )
          DbgBreakPoint();
      }
    }
    this->m_StartAborted = 0;
    this->m_StopThread = KeGetCurrentThread();
    do
    {
      m_ObjectFlags = this->m_ObjectFlags;
      this->m_StopAgain = 0;
      if ( m_ObjectFlags < 0 && (m_CallbackThread = (FxVerifierLock *)this[-1].m_CallbackThread) != 0LL )
        FxVerifierLock::Unlock(m_CallbackThread, irql, v6);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      if ( this->m_Timer.m_Timer.m_IsExtTimer )
        v8 = ExCancelTimer(this->m_Timer.m_Timer.m_KernelExTimer, 0LL);
      else
        v8 = KeCancelTimer(&this->m_Timer.m_Timer.KernelTimer);
      v9 = v8;
      KeFlushQueuedDpcs();
      m_SystemWorkItem = this->m_SystemWorkItem;
      if ( m_SystemWorkItem )
        FxCREvent::EnterCRAndWaitAndLeave(&m_SystemWorkItem->m_WorkItemCompleted);
      FxNonPagedObject::Lock(this, &irql, v10);
    }
    while ( !v9 && this->m_StopAgain );
    this->m_StopThread = 0LL;
    this->m_StopAgain = 0;
    if ( this->m_StartAborted )
    {
      v9 = 1;
      this->m_StartAborted = 0;
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v25 = (FxVerifierLock *)this[-1].m_CallbackThread) != 0LL )
      FxVerifierLock::Unlock(v25, irql, v6);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    return v9;
  }
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0x11u, WPP_FxTimer_cpp_Traceguids, _a1, this->m_CallbackThread);
  v14 = &v29;
  v29 = 7567731;
  v15 = &v29;
LABEL_22:
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    this->m_Globals->Public.DriverName,
    (const char *)v15,
    this->m_Globals->Public.DriverName,
    (const char *)v14);
  if ( *(_BYTE *)(v17 + 318) )
    DbgBreakPoint();
  return 0;
}
