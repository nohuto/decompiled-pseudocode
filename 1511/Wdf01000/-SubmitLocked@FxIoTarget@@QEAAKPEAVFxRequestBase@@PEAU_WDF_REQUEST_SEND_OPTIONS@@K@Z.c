/*
 * XREFs of ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0005E40
 * Callers:
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C0003984 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     imp_WdfRequestSend @ 0x1C0004AD0 (imp_WdfRequestSend.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0056818 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 * Callees:
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0005BC8 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C0006040 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C00328C8 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qLqd @ 0x1C006A32C (WPP_IFR_SF_qLqd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z @ 0x1C0075F40 (-PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1C00BA4AC (-Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitLocked(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        int Flags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v6; // r15
  char v7; // r13
  char v8; // dl
  unsigned int v9; // esi
  _WDF_REQUEST_SEND_OPTIONS *v11; // rax
  char v13; // r12
  int Timer; // ebp
  _FX_DRIVER_GLOBALS *v15; // r14
  unsigned int v16; // edx
  $62629F1B78C8AA6D0A69F9052F9E18D0 *v17; // rax
  _LIST_ENTRY *p_m_IgnoredIoListHead; // rcx
  _LIST_ENTRY *Blink; // rdx
  const void *TraceObjectHandle; // rax
  _FX_DRIVER_GLOBALS *v22; // r10
  unsigned __int64 v23; // rbx
  int v24; // eax
  const void *v25; // rax
  const void *_a3; // rax
  _FX_DRIVER_GLOBALS *v27; // r10
  unsigned int v28; // r11d
  void *v29; // rax
  const void *v30; // r8
  _FX_DRIVER_GLOBALS *v31; // r10
  int v32; // r11d
  const void *v33; // rax
  int v34; // r8d
  _FX_DRIVER_GLOBALS *v35; // r10
  FxTagTracker *v36; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  const void *v38; // rax
  __int64 v39; // r8
  const void *v40; // rax
  FxRequestTimer *m_Timer; // rcx
  __int64 Timeout; // rdx
  char v43; // [rsp+90h] [rbp+8h]
  _FX_DRIVER_GLOBALS *FxDriverGlobals; // [rsp+98h] [rbp+10h]

  m_Globals = this->m_Globals;
  v6 = 0LL;
  FxDriverGlobals = m_Globals;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v11 = Options;
  v43 = 0;
  if ( Request->m_IrpCompletionReferenceCount )
  {
    TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_q(v22, 2u, 0xEu, 0x1Du, WPP_FxIoTarget_cpp_Traceguids, TraceObjectHandle);
    if ( Request->m_ObjectSize )
      v23 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v23 = 0LL;
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUEST_FATAL_ERROR, 3uLL, v23);
  }
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
  {
    v13 = 1;
    v24 = FxIoTarget::Vf_VerifySubmitLocked(this, m_Globals, Request);
    v8 = 0;
    Timer = v24;
    if ( v24 < 0 )
      goto LABEL_42;
    v11 = Options;
  }
  else
  {
    v13 = 0;
  }
  if ( (Flags & 1) == 0 || !v11->Timeout )
  {
LABEL_5:
    if ( (Flags & 4) != 0 )
    {
      if ( (unsigned int)(this->m_State - 3) > 2 || this->m_Removing )
      {
        v9 = 1;
        v29 = FxRequestBase::GetTraceObjectHandle(Request);
        WPP_IFR_SF_qid(v31, 4u, 0xEu, 0x20u, WPP_FxIoTarget_cpp_Traceguids, v30, (__int64)v29, v32);
        Request->m_TargetFlags |= 0x10u;
        v7 = 1;
        v8 = 0;
        goto LABEL_8;
      }
      Timer = -1073741436;
      if ( this->m_ObjectSize )
        v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a3 = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_qLqd(v27, 4u, 0xEu, 0x1Fu, WPP_FxIoTarget_cpp_Traceguids, v6, v28, _a3, -1073741436);
      v8 = 0;
    }
    else
    {
      if ( this->m_State == WdfIoTargetStarted )
      {
        v9 = 1;
LABEL_8:
        Timer = 0;
LABEL_9:
        v15 = FxDriverGlobals;
        Request->m_CsqContext.Irp = (_IRP *)&Request->120;
        Request->m_ListEntry.Flink = (_LIST_ENTRY *)&Request->120;
        goto $Done_0;
      }
      if ( this->m_State == WdfIoTargetStopped )
      {
        if ( Flags < 0 )
        {
          Timer = -1073741436;
          goto LABEL_42;
        }
        Timer = 1075838976;
        v9 = 2;
        goto LABEL_9;
      }
      if ( this->m_ObjectSize )
        v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v33 = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_qid(v35, 2u, 0xEu, 0x21u, WPP_FxIoTarget_cpp_Traceguids, v33, (__int64)v6, v34);
      v8 = 0;
      Timer = -1073741436;
    }
LABEL_42:
    v9 &= ~1u;
    Request->m_Irp.m_Irp->IoStatus.Status = Timer;
    if ( !v8 )
      return v9;
    goto LABEL_22;
  }
  Timer = FxRequestBase::CreateTimer(Request);
  if ( Timer >= 0 )
  {
    v8 = 0;
    v43 = 1;
    goto LABEL_5;
  }
  v25 = FxRequestBase::GetTraceObjectHandle(Request);
  v15 = FxDriverGlobals;
  WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xEu, 0x1Eu, WPP_FxIoTarget_cpp_Traceguids, v25, Timer);
  v8 = 0;
$Done_0:
  if ( Timer < 0 )
    goto LABEL_42;
  Request->m_Target = this;
  _InterlockedIncrement(&this->m_IoCount);
  v16 = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    v36 = *(FxTagTracker **)&Request[-1].m_SystemBufferOffset;
    if ( v36 )
      FxTagTracker::UpdateTagHistory(
        v36,
        this,
        1472,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        v16);
  }
  v8 = 1;
  Request->m_IrpCompletionReferenceCount = 1;
  if ( Request->m_Canceled )
  {
    if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
      v9 = 0;
    else
      v9 |= 2u;
    Timer = -1073741536;
    goto LABEL_42;
  }
  if ( (v9 & 1) != 0 )
  {
    v17 = &Request->120;
    if ( v7 )
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
  }
  else
  {
    Timer = FxIoTarget::PendRequestLocked(this, Request);
    v38 = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_qid(v15, 4u, 0xEu, 0x22u, WPP_FxIoTarget_cpp_Traceguids, v38, v39, Timer);
    if ( Timer >= 0 )
      goto LABEL_19;
    if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
      v9 = 0;
  }
  if ( Timer < 0 )
  {
    v8 = 1;
    goto LABEL_42;
  }
LABEL_19:
  if ( v43 )
  {
    if ( v15->FxVerboseOn )
    {
      v40 = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_q(v15, 5u, 0xEu, 0x23u, WPP_FxIoTarget_cpp_Traceguids, v40);
    }
    m_Timer = Request->m_Timer;
    Timeout = Options->Timeout;
    Request->m_TargetFlags |= 4u;
    MxTimer::Start(&m_Timer->Timer, (_LARGE_INTEGER)Timeout, 0);
  }
  if ( v13 )
    FxRequestBase::SetVerifierFlags(Request, 256);
LABEL_22:
  if ( (v9 & 3) == 0 )
  {
    Request->Release(Request, this, 1630, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
    FxIoTarget::DecrementIoCount(this);
  }
  return v9;
}
