/*
 * XREFs of ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0063AE4
 * Callers:
 *     ?FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z @ 0x1C0083858 (-FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C000CFC4 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C000CFF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000D920 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000DBD0 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C002DA64 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::RequestCompletionRoutine(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  FxRequestBase *_a1; // rax
  _FX_DRIVER_GLOBALS *v6; // r10
  unsigned __int8 v7; // bp
  char v8; // si
  unsigned __int8 v9; // r8
  _IRP *m_Irp; // rax
  unsigned __int8 v11; // r8
  FxRequestBase *TraceObjectHandle; // rax
  __int64 v13; // rdx
  _IRP *v14; // r8
  FxRequestBase *v15; // rax
  _FX_DRIVER_GLOBALS *v16; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v18; // rcx
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_q(v6, 5u, 0xEu, 0x31u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  v7 = 0;
  v8 = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags |= 1u;
  if ( !FxRequestBase::CancelTimer(Request) )
    goto LABEL_10;
  if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) != 1 )
  {
    v8 = 0;
LABEL_10:
    TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_q(this->m_Globals, 4u, 0xEu, 0x32u, WPP_FxIoTarget_cpp_Traceguids, TraceObjectHandle);
    goto LABEL_11;
  }
  v8 = 1;
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v7 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v9);
LABEL_11:
  FxNonPagedObject::Unlock(this, irql, v11);
  if ( v8 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      v15 = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_q(v16, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v15);
    }
    FxRequestBase::CompleteSubmitted(Request, v13, v14);
  }
  if ( v7 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v18 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v18, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v8 )
    FxIoTarget::DecrementIoCount(this);
}
