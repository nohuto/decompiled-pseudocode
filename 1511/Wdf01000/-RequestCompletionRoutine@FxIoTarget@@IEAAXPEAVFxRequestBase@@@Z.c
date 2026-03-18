/*
 * XREFs of ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00565C8
 * Callers:
 *     ?FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z @ 0x1C00758B8 (-FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0005A04 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005A30 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005D90 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C0006040 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
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
  FxRequestBase *v13; // rax
  _FX_DRIVER_GLOBALS *v14; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v16; // rcx
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
      v13 = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_q(v14, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v13);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v7 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v16 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v16, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v8 )
    FxIoTarget::DecrementIoCount(this);
}
