/*
 * XREFs of ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C00023A0
 * Callers:
 *     imp_WdfTimerStart @ 0x1C0002260 (imp_WdfTimerStart.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

BOOLEAN __fastcall FxTimer::Start(FxTimer *this, _LARGE_INTEGER DueTime, unsigned __int8 a3)
{
  char v5; // si
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // r8
  unsigned int v8; // ecx
  __int64 m_TolerableDelay; // r9
  BOOLEAN v10; // al
  unsigned __int8 v11; // r8
  BOOLEAN v12; // bl
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // r8
  FxVerifierLock *m_CallbackThread; // rcx
  const void *_a1; // rax
  const void *v18; // rcx
  FxVerifierLock *v19; // rcx
  FxSystemWorkItem *m_SystemWorkItem; // rax
  FxVerifierLock *v21; // rcx
  FxVerifierLock *v22; // rcx
  unsigned __int8 irql[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-30h] BYREF
  __int64 v25; // [rsp+50h] [rbp-28h]

  v5 = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_CallbackThread = (FxVerifierLock *)this[-1].m_CallbackThread) != 0LL )
  {
    FxVerifierLock::Lock(m_CallbackThread, irql, a3);
    v6 = irql[0];
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql[0] = v6;
  }
  if ( this->m_RunningDown )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xFu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  else if ( this->m_StopThread )
  {
    if ( this->m_ObjectSize )
      v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v18 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0x10u, WPP_FxTimer_cpp_Traceguids, v18, this->m_StopThread);
    this->m_StartAborted = 1;
  }
  else
  {
    v5 = 1;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v19 = (FxVerifierLock *)this[-1].m_CallbackThread) != 0LL )
    FxVerifierLock::Unlock(v19, v6, v7);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v6);
  if ( !v5 )
    return 0;
  v8 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_SystemWorkItem = this[-1].m_SystemWorkItem;
    if ( m_SystemWorkItem )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_SystemWorkItem,
        this,
        607,
        "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
        TagAddRef,
        v8);
  }
  m_TolerableDelay = this->m_TolerableDelay;
  if ( this->m_Timer.m_Timer.m_IsExtTimer )
  {
    v24 = 0LL;
    v25 = 0LL;
    if ( (_DWORD)m_TolerableDelay == -1 )
      v25 = -1LL;
    else
      v25 = 10000 * m_TolerableDelay;
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
            this->m_Timer.m_Timer.m_KernelExTimer,
            (_LARGE_INTEGER)DueTime.QuadPart,
            10000LL * this->m_Timer.m_Timer.m_Period,
            &v24);
  }
  else
  {
    v10 = KeSetCoalescableTimer(
            &this->m_Timer.m_Timer.KernelTimer,
            DueTime,
            this->m_Timer.m_Timer.m_Period,
            m_TolerableDelay,
            &this->m_Timer.m_Timer.TimerDpc);
  }
  v12 = v10;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v21 = (FxVerifierLock *)this[-1].m_CallbackThread) != 0LL )
  {
    FxVerifierLock::Lock(v21, irql, v11);
    v13 = irql[0];
  }
  else
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( this->m_StopThread )
    this->m_StopAgain = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v22 = (FxVerifierLock *)this[-1].m_CallbackThread) != 0LL )
    FxVerifierLock::Unlock(v22, v13, v14);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v13);
  this->Release(this, this, 624, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  return v12;
}
