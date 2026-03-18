/*
 * XREFs of ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00100B0
 * Callers:
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C00030EC (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     imp_WdfRequestSend @ 0x1C0003AA0 (imp_WdfRequestSend.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0029E20 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0066DAC (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 * Callees:
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C0010284 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C00116C4 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C001938C (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00664E8 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qLqd @ 0x1C007C944 (WPP_IFR_SF_qLqd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z @ 0x1C0088174 (-PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1C00D4BBC (-Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitLocked(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        int Flags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  char v7; // r12
  char v8; // dl
  unsigned int v9; // esi
  _WDF_REQUEST_SEND_OPTIONS *v10; // rax
  char v12; // r15
  _WDF_IO_TARGET_STATE m_State; // r8d
  int Timer; // ebp
  unsigned int v15; // edx
  bool v16; // zf
  $4F60D2EEAF443BADC51864A01D9AEC36 *v17; // rax
  _LIST_ENTRY *p_m_IgnoredIoListHead; // rcx
  _IRP *Blink; // rdx
  unsigned __int16 *p_m_ObjectSize; // rdi
  unsigned __int64 v22; // rsi
  FxRequestBase *v23; // rax
  int v24; // eax
  unsigned __int64 v25; // rcx
  FxRequestBase *v26; // rax
  unsigned __int64 v27; // rcx
  FxRequestBase *_a3; // rdx
  const void *v29; // rcx
  unsigned __int64 v30; // rcx
  FxRequestBase *v31; // rdx
  const void *v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  FxRequestBase *v35; // rax
  FxTagTracker *m_TargetCompletionContext; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  FxRequestBase *v40; // rax
  unsigned __int64 v41; // rcx
  FxRequestBase *v42; // rax
  FxRequestTimer *m_Timer; // rcx
  __int64 Timeout; // rdx
  char v45; // [rsp+A0h] [rbp+8h]

  m_Globals = this->m_Globals;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = Options;
  v45 = 0;
  if ( Request->m_IrpCompletionReferenceCount )
  {
    p_m_ObjectSize = &Request->m_ObjectSize;
    v22 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v23 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Request->m_ObjectSize )
      v23 = 0LL;
    if ( v23 )
      Request = v23;
    WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x1Du, WPP_FxIoTarget_cpp_Traceguids, Request);
    if ( !*p_m_ObjectSize )
      v22 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_REQUEST_FATAL_ERROR, 3uLL, v22);
  }
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
  {
    v12 = 1;
    v24 = FxIoTarget::Vf_VerifySubmitLocked(this, m_Globals, Request);
    v8 = 0;
    Timer = v24;
    if ( v24 < 0 )
      goto LABEL_53;
    v10 = Options;
  }
  else
  {
    v12 = 0;
  }
  if ( (Flags & 1) == 0 || !v10->Timeout )
  {
LABEL_5:
    m_State = this->m_State;
    if ( (Flags & 4) != 0 )
    {
      if ( (unsigned int)(m_State - 3) > 2 || this->m_Removing )
      {
        v9 = 1;
        v30 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
        v31 = Request;
        if ( !Request->m_ObjectSize )
          v30 = 0LL;
        if ( v30 )
          v31 = (FxRequestBase *)v30;
        v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v32 = 0LL;
        WPP_IFR_SF_qid(m_Globals, 4u, 0xEu, 0x20u, WPP_FxIoTarget_cpp_Traceguids, v32, (__int64)v31, m_State);
        Request->m_TargetFlags |= 0x10u;
        v8 = 0;
        v7 = 1;
        goto LABEL_8;
      }
      Timer = -1073741436;
      v27 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      _a3 = Request;
      if ( !Request->m_ObjectSize )
        v27 = 0LL;
      if ( v27 )
        _a3 = (FxRequestBase *)v27;
      v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v29 = 0LL;
      WPP_IFR_SF_qLqd(m_Globals, 4u, 0xEu, 0x1Fu, WPP_FxIoTarget_cpp_Traceguids, v29, m_State, _a3, -1073741436);
      v8 = 0;
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
        goto $Done_4;
      }
      if ( m_State == WdfIoTargetStopped )
      {
        if ( Flags < 0 )
        {
          Timer = -1073741436;
          goto LABEL_53;
        }
        Timer = 1075838976;
        v9 = 2;
        goto LABEL_9;
      }
      v33 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !this->m_ObjectSize )
        v33 = 0LL;
      v34 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v35 = Request;
      if ( !Request->m_ObjectSize )
        v34 = 0LL;
      if ( v34 )
        v35 = (FxRequestBase *)v34;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xEu, 0x21u, WPP_FxIoTarget_cpp_Traceguids, v35, v33, m_State);
      v8 = 0;
      Timer = -1073741436;
    }
LABEL_53:
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
    v45 = 1;
    goto LABEL_5;
  }
  v25 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !Request->m_ObjectSize )
    v25 = 0LL;
  v26 = Request;
  if ( v25 )
    v26 = (FxRequestBase *)v25;
  WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxIoTarget_cpp_Traceguids, v26, Timer);
  v8 = 0;
$Done_4:
  if ( Timer < 0 )
    goto LABEL_53;
  Request->m_Target = this;
  _InterlockedIncrement(&this->m_IoCount);
  v15 = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    m_TargetCompletionContext = (FxTagTracker *)Request[-1].m_TargetCompletionContext;
    if ( m_TargetCompletionContext )
      FxTagTracker::UpdateTagHistory(
        m_TargetCompletionContext,
        this,
        1472,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        v15);
  }
  v16 = Request->m_Canceled == 0;
  v8 = 1;
  Request->m_IrpCompletionReferenceCount = 1;
  if ( !v16 )
  {
    if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
      v9 = 0;
    else
      v9 |= 2u;
    Timer = -1073741536;
    goto LABEL_53;
  }
  if ( (v9 & 1) != 0 )
  {
    v17 = &Request->120;
    if ( v7 )
    {
      p_m_IgnoredIoListHead = &this->m_IgnoredIoListHead;
      Blink = (_IRP *)this->m_IgnoredIoListHead.Blink;
      if ( *(FxIoTarget **)&Blink->Type != (FxIoTarget *)&this->m_IgnoredIoListHead )
        __fastfail(3u);
    }
    else
    {
      p_m_IgnoredIoListHead = &this->m_SentIoListHead;
      Blink = (_IRP *)this->m_SentIoListHead.Blink;
      if ( *(FxIoTarget **)&Blink->Type != (FxIoTarget *)&this->m_SentIoListHead )
        __fastfail(3u);
    }
    v17->m_ListEntry.Flink = p_m_IgnoredIoListHead;
    Request->m_CsqContext.Irp = Blink;
    *(_QWORD *)&Blink->Type = v17;
    p_m_IgnoredIoListHead->Blink = (_LIST_ENTRY *)v17;
    if ( IoSetCompletionRoutineEx(
           this->m_InStackDevice,
           Request->m_Irp.m_Irp,
           FxIoTarget::_RequestCompletionRoutine,
           Request,
           1u,
           1u,
           1u) < 0 )
    {
      CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = FxIoTarget::_RequestCompletionRoutine;
      CurrentStackLocation[-1].Context = Request;
      CurrentStackLocation[-1].Control = -32;
    }
  }
  else
  {
    Timer = FxIoTarget::PendRequestLocked(this, Request);
    v38 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !this->m_ObjectSize )
      v38 = 0LL;
    v39 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v40 = Request;
    if ( !Request->m_ObjectSize )
      v39 = 0LL;
    if ( v39 )
      v40 = (FxRequestBase *)v39;
    WPP_IFR_SF_qid(m_Globals, 4u, 0xEu, 0x22u, WPP_FxIoTarget_cpp_Traceguids, v40, v38, Timer);
    if ( Timer >= 0 )
      goto LABEL_19;
    if ( !_InterlockedAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) )
      v9 = 0;
  }
  if ( Timer < 0 )
  {
    v8 = 1;
    goto LABEL_53;
  }
LABEL_19:
  if ( v45 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v41 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v42 = Request;
      if ( !Request->m_ObjectSize )
        v41 = 0LL;
      if ( v41 )
        v42 = (FxRequestBase *)v41;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x23u, WPP_FxIoTarget_cpp_Traceguids, v42);
    }
    m_Timer = Request->m_Timer;
    Timeout = Options->Timeout;
    Request->m_TargetFlags |= 4u;
    MxTimer::Start(&m_Timer->Timer, (_LARGE_INTEGER)Timeout, 0);
  }
  if ( v12 )
    FxRequestBase::SetVerifierFlags(Request, 256);
LABEL_22:
  if ( !v9 )
  {
    Request->Release(Request, this, 1630, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
    FxIoTarget::DecrementIoCount(this);
  }
  return v9;
}
