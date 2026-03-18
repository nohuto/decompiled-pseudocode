/*
 * XREFs of ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00144C0
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0012AA0 (imp_WdfRequestSend.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00151E0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C005CAB4 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C009177C (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLqd @ 0x1C0075864 (WPP_IFR_SF_qLqd.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0077124 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z @ 0x1C0084254 (-PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z.c)
 *     ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C00842B4 (-PrintDisposeMessage@FxIoTarget@@IEAAXXZ.c)
 *     ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1C00D1770 (-Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitLocked(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        int Flags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  _WDF_REQUEST_SEND_OPTIONS *v5; // rax
  const void *v6; // r12
  char v7; // r8
  char v8; // r13
  unsigned int v9; // edi
  char v13; // r15
  _WDF_IO_TARGET_STATE m_State; // edx
  int Timer; // ebp
  unsigned int v16; // ecx
  $CBDB4BB9AD9093A4D765C5B3340F9886 *v17; // rax
  _LIST_ENTRY *p_m_IgnoredIoListHead; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned __int8 v20; // r8
  _FX_DRIVER_GLOBALS *v21; // r13
  FxRequestBase *v23; // rax
  unsigned __int64 v24; // rbx
  int v25; // eax
  FxRequestBase *v26; // rax
  FxRequestBase *_a3; // rax
  FxRequestBase *v28; // rcx
  const void *v29; // rax
  FxRequestBase *v30; // rax
  FxTagTracker *v31; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int64 v33; // rcx
  FxRequestBase *v34; // rax
  FxRequestBase *v35; // rax
  FxRequestTimer *m_Timer; // r10
  LARGE_INTEGER Timeout; // rdx
  struct _EX_TIMER *m_KernelExTimer; // rcx
  unsigned __int8 v39; // r8
  FxVerifierLock *m_IrpQueue; // rcx
  unsigned __int8 PreviousIrql; // [rsp+51h] [rbp-67h] BYREF
  char v42; // [rsp+52h] [rbp-66h]
  _FX_DRIVER_GLOBALS *FxDriverGlobals; // [rsp+58h] [rbp-60h]
  _WDF_REQUEST_SEND_OPTIONS *v44; // [rsp+60h] [rbp-58h]
  _QWORD v45[2]; // [rsp+68h] [rbp-50h] BYREF

  m_Globals = this->m_Globals;
  v5 = Options;
  v6 = 0LL;
  v44 = Options;
  v7 = 0;
  FxDriverGlobals = m_Globals;
  v8 = 0;
  v9 = 0;
  v42 = 0;
  if ( Request->m_IrpCompletionReferenceCount )
  {
    if ( !Request->m_ObjectSize || (v23 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      v23 = Request;
    WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x1Du, WPP_FxIoTarget_cpp_Traceguids, v23);
    if ( Request->m_ObjectSize )
      v24 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v24 = 0LL;
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUEST_FATAL_ERROR, 3uLL, v24);
  }
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
  {
    v13 = 1;
    v25 = FxIoTarget::Vf_VerifySubmitLocked(this, m_Globals, Request);
    v7 = 0;
    Timer = v25;
    if ( v25 < 0 )
      goto LABEL_50;
    m_Globals = FxDriverGlobals;
    v5 = v44;
  }
  else
  {
    v13 = 0;
  }
  if ( (Flags & 1) == 0 || !v5->Timeout )
  {
LABEL_5:
    m_State = this->m_State;
    if ( (Flags & 4) != 0 )
    {
      if ( (unsigned int)(m_State - 3) > 2 || this->m_Removing )
      {
        v9 = 1;
        if ( !Request->m_ObjectSize
          || (v28 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        {
          v28 = Request;
        }
        if ( this->m_ObjectSize )
          v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v29 = 0LL;
        WPP_IFR_SF_qid(m_Globals, 4u, 0xEu, 0x20u, WPP_FxIoTarget_cpp_Traceguids, v29, (__int64)v28, this->m_State);
        Request->m_TargetFlags |= 0x10u;
        v8 = 1;
        v7 = 0;
        goto LABEL_8;
      }
      Timer = -1073741436;
      if ( !Request->m_ObjectSize || (_a3 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        _a3 = Request;
      if ( this->m_ObjectSize )
        v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qLqd(m_Globals, 4u, 0xEu, 0x1Fu, WPP_FxIoTarget_cpp_Traceguids, v6, m_State, _a3, -1073741436);
      v7 = 0;
    }
    else
    {
      if ( m_State == WdfIoTargetStarted )
      {
        v9 = 1;
LABEL_8:
        Timer = 0;
LABEL_9:
        Request->m_CsqContext.Irp = (_IRP *)&Request->120;
        Request->m_ListEntry.Flink = (_LIST_ENTRY *)&Request->120;
        goto $Done_9;
      }
      if ( m_State == WdfIoTargetStopped )
      {
        if ( Flags < 0 )
        {
          Timer = -1073741436;
          goto LABEL_50;
        }
        Timer = 1075838976;
        v9 = 2;
        goto LABEL_9;
      }
      if ( this->m_ObjectSize )
        v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Request->m_ObjectSize || (v30 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v30 = Request;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xEu, 0x21u, WPP_FxIoTarget_cpp_Traceguids, v30, (__int64)v6, this->m_State);
      Timer = -1073741436;
      v7 = 0;
    }
LABEL_50:
    v9 &= ~1u;
    Request->m_Irp.m_Irp->IoStatus.Status = Timer;
    if ( !v7 )
      return v9;
    goto LABEL_22;
  }
  Timer = FxRequestBase::CreateTimer(Request);
  if ( Timer >= 0 )
  {
    m_Globals = FxDriverGlobals;
    v7 = 0;
    v42 = 1;
    goto LABEL_5;
  }
  if ( !Request->m_ObjectSize || (v26 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
    v26 = Request;
  WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xEu, 0x1Eu, WPP_FxIoTarget_cpp_Traceguids, v26, Timer);
  v7 = 0;
$Done_9:
  if ( Timer < 0 )
    goto LABEL_50;
  Request->m_Target = this;
  _InterlockedIncrement(&this->m_IoCount);
  v16 = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    v31 = *(FxTagTracker **)&Request[-1].m_SystemBufferOffset;
    if ( v31 )
      FxTagTracker::UpdateTagHistory(
        v31,
        this,
        1472,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        v16);
  }
  Request->m_IrpCompletionReferenceCount = 1;
  v7 = 1;
  if ( Request->m_Canceled )
  {
    if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
      v9 = 0;
    else
      v9 |= 2u;
    Timer = -1073741536;
    goto LABEL_50;
  }
  if ( (v9 & 1) != 0 )
  {
    v17 = &Request->120;
    if ( v8 )
    {
      p_m_IgnoredIoListHead = &this->m_IgnoredIoListHead;
      Blink = this->m_IgnoredIoListHead.Blink;
      v17->m_ListEntry.Flink = &this->m_IgnoredIoListHead;
      Request->m_CsqContext.Irp = (_IRP *)Blink;
      if ( Blink->Flink != &this->m_IgnoredIoListHead )
        __fastfail(3u);
    }
    else
    {
      p_m_IgnoredIoListHead = &this->m_SentIoListHead;
      Blink = this->m_SentIoListHead.Blink;
      v17->m_ListEntry.Flink = &this->m_SentIoListHead;
      Request->m_CsqContext.Irp = (_IRP *)Blink;
      if ( Blink->Flink != &this->m_SentIoListHead )
        __fastfail(3u);
    }
    Blink->Flink = (_LIST_ENTRY *)v17;
    p_m_IgnoredIoListHead->Blink = (_LIST_ENTRY *)v17;
    if ( IoSetCompletionRoutineEx(
           this->m_InStackDevice,
           Request->m_Irp.m_Irp,
           (PIO_COMPLETION_ROUTINE)FxIoTarget::_RequestCompletionRoutine,
           Request,
           1u,
           1u,
           1u) < 0 )
    {
      CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxIoTarget::_RequestCompletionRoutine;
      CurrentStackLocation[-1].Context = Request;
      CurrentStackLocation[-1].Control = -32;
    }
    v21 = FxDriverGlobals;
  }
  else
  {
    Timer = FxIoTarget::PendRequestLocked(this, Request);
    if ( this->m_ObjectSize )
      v33 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v33 = 0LL;
    if ( !Request->m_ObjectSize || (v34 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      v34 = Request;
    v21 = FxDriverGlobals;
    WPP_IFR_SF_qid(FxDriverGlobals, 4u, 0xEu, 0x22u, WPP_FxIoTarget_cpp_Traceguids, v34, v33, Timer);
    if ( Timer >= 0 )
      goto LABEL_20;
    if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
      v9 = 0;
  }
  if ( Timer < 0 )
  {
    v7 = 1;
    goto LABEL_50;
  }
LABEL_20:
  if ( v42 )
  {
    if ( v21->FxVerboseOn )
    {
      if ( !Request->m_ObjectSize || (v35 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v35 = Request;
      WPP_IFR_SF_q(v21, 5u, 0xEu, 0x23u, WPP_FxIoTarget_cpp_Traceguids, v35);
    }
    m_Timer = Request->m_Timer;
    Timeout = (LARGE_INTEGER)v44->Timeout;
    Request->m_TargetFlags |= 4u;
    if ( m_Timer->Timer.m_Timer.m_IsExtTimer )
    {
      m_KernelExTimer = m_Timer->Timer.m_Timer.m_KernelExTimer;
      v45[1] = 0LL;
      v45[0] = 0LL;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
        m_KernelExTimer,
        (LARGE_INTEGER)Timeout.QuadPart,
        10000LL * m_Timer->Timer.m_Timer.m_Period,
        v45);
    }
    else
    {
      KeSetCoalescableTimer(
        &m_Timer->Timer.m_Timer.KernelTimer,
        Timeout,
        m_Timer->Timer.m_Timer.m_Period,
        0,
        &m_Timer->Timer.m_Timer.TimerDpc);
    }
  }
  if ( v13 )
  {
    FxNonPagedObject::Lock(Request, &PreviousIrql, v20);
    Request->m_VerifierFlags |= 0x100u;
    if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (m_IrpQueue = (FxVerifierLock *)Request[-1].m_IrpQueue) != 0LL )
      FxVerifierLock::Unlock(m_IrpQueue, PreviousIrql, v39);
    else
      KeReleaseSpinLock(&Request->m_NPLock.m_Lock, PreviousIrql);
  }
LABEL_22:
  if ( (v9 & 3) == 0 )
  {
    Request->Release(Request, this, 1630, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
    if ( _InterlockedExchangeAdd(&this->m_IoCount, 0xFFFFFFFF) == 1 )
    {
      FxIoTarget::PrintDisposeMessage(this);
      KeSetEvent(&this->m_DisposeEvent->m_Event.m_Event, 0, 0);
    }
  }
  return v9;
}
