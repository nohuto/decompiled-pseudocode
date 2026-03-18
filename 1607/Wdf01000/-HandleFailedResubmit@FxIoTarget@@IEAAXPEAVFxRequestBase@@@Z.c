/*
 * XREFs of ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0083D90
 * Callers:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084288 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C000CFF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000D920 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C002DA64 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::HandleFailedResubmit(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  const void *v5; // rdi
  FxRequestBase *_a1; // rax
  _FX_DRIVER_GLOBALS *v7; // r10
  unsigned __int8 v8; // r8
  _IRP *m_Irp; // rax
  unsigned __int8 v10; // bp
  unsigned __int8 v11; // r8
  __int64 v12; // rdx
  _IRP *v13; // r8
  FxRequestBase *TraceObjectHandle; // rax
  _FX_DRIVER_GLOBALS *v15; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_q(v7, 5u, 0xEu, 0x2Eu, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags |= 1u;
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v10 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v8);
  FxNonPagedObject::Unlock(this, irql, v11);
  if ( this->m_Globals->FxVerboseOn )
  {
    TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_q(v15, 5u, 0xEu, 0x2Fu, WPP_FxIoTarget_cpp_Traceguids, TraceObjectHandle);
  }
  FxRequestBase::CompleteSubmitted(Request, v12, v13);
  if ( v10 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x30u, WPP_FxIoTarget_cpp_Traceguids, v5, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  FxIoTarget::DecrementIoCount(this);
}
