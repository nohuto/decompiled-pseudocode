/*
 * XREFs of ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C00239A4
 * Callers:
 *     imp_WdfTimerStart @ 0x1C00255E0 (imp_WdfTimerStart.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

BOOLEAN __fastcall FxTimer::Start(FxTimer *this, _LARGE_INTEGER DueTime, unsigned __int8 a3)
{
  BOOLEAN v4; // si
  char v5; // r14
  unsigned __int8 v7; // r8
  unsigned int v8; // ecx
  FxSystemWorkItem *m_SystemWorkItem; // rax
  __int64 m_TolerableDelay; // r9
  BOOLEAN v11; // al
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  __int64 v17; // rax
  const void *v18; // rax
  FxVerifierLock *m_CallbackThread; // rcx
  FxVerifierLock *v20; // rcx
  unsigned __int8 irql[4]; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]

  v4 = 0;
  v5 = 0;
  FxNonPagedObject::Lock(this, irql, a3);
  if ( this->m_RunningDown )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xFu, WPP_FxTimer_cpp_Traceguids, _a1);
    m_Globals = this->m_Globals;
    v22 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v22,
      m_Globals->Public.DriverName,
      (const char *)&v22);
    if ( *(_BYTE *)(v17 + 318) )
      DbgBreakPoint();
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
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_CallbackThread = (FxVerifierLock *)this[-1].m_CallbackThread) != 0LL )
    FxVerifierLock::Unlock(m_CallbackThread, irql[0], v7);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql[0]);
  if ( v5 )
  {
    v8 = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      m_SystemWorkItem = this[-1].m_SystemWorkItem;
    else
      m_SystemWorkItem = 0LL;
    if ( m_SystemWorkItem )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_SystemWorkItem,
        this,
        607,
        "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
        TagAddRef,
        v8);
    m_TolerableDelay = this->m_TolerableDelay;
    if ( this->m_Timer.m_Timer.m_IsExtTimer )
    {
      v23 = 0LL;
      v24 = 0LL;
      if ( (_DWORD)m_TolerableDelay == -1 )
        v24 = -1LL;
      else
        v24 = 10000 * m_TolerableDelay;
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
              this->m_Timer.m_Timer.m_KernelExTimer,
              (_LARGE_INTEGER)DueTime.QuadPart,
              10000LL * this->m_Timer.m_Timer.m_Period,
              &v23);
    }
    else
    {
      v11 = KeSetCoalescableTimer(
              &this->m_Timer.m_Timer.KernelTimer,
              DueTime,
              this->m_Timer.m_Timer.m_Period,
              m_TolerableDelay,
              &this->m_Timer.m_Timer.TimerDpc);
    }
    v4 = v11;
    FxNonPagedObject::Lock(this, irql, v12);
    if ( this->m_StopThread )
      this->m_StopAgain = 1;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v20 = (FxVerifierLock *)this[-1].m_CallbackThread) != 0LL )
      FxVerifierLock::Unlock(v20, irql[0], v13);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql[0]);
    this->Release(this, this, 624, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  }
  return v4;
}
