/*
 * XREFs of ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084464
 * Callers:
 *     ?_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C007A4A0 (-_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C000CFF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000D920 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000DBD0 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C002D814 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C002DA64 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::TimerCallback(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v4; // bp
  FxRequestBase *_a2; // rax
  const void *_a1; // r8
  _FX_DRIVER_GLOBALS *v8; // r10
  unsigned __int8 v9; // r8
  char v10; // si
  unsigned __int8 m_TargetFlags; // al
  __int64 v12; // rdx
  _IRP *v13; // r8
  FxRequestBase *TraceObjectHandle; // rax
  _FX_DRIVER_GLOBALS *v15; // r10
  const void *v16; // rax
  signed __int32 m_IrpCompletionReferenceCount; // eax
  signed __int32 v18; // edx
  unsigned __int8 v19; // r8
  unsigned __int8 v20; // al
  _IRP *m_Irp; // rcx
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a2 = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_qq(v8, 5u, 0xEu, 0x29u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags &= ~4u;
  v10 = 1;
  m_TargetFlags = Request->m_TargetFlags;
  if ( (m_TargetFlags & 1) == 0 )
  {
    Request->m_TargetFlags = m_TargetFlags | 8;
    m_IrpCompletionReferenceCount = Request->m_IrpCompletionReferenceCount;
    do
    {
      if ( m_IrpCompletionReferenceCount <= 0 )
        break;
      v18 = m_IrpCompletionReferenceCount;
      m_IrpCompletionReferenceCount = _InterlockedCompareExchange(
                                        &Request->m_IrpCompletionReferenceCount,
                                        m_IrpCompletionReferenceCount + 1,
                                        m_IrpCompletionReferenceCount);
    }
    while ( v18 != m_IrpCompletionReferenceCount );
    FxNonPagedObject::Unlock(this, irql, v9);
    FxRequestBase::Cancel(Request);
    FxNonPagedObject::Lock(this, &irql, v19);
  }
  if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    v20 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v9);
    m_Irp = Request->m_Irp.m_Irp;
    v4 = v20;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  else
  {
    v10 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v9);
  if ( v10 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_q(v15, 5u, 0xEu, 0x2Au, WPP_FxIoTarget_cpp_Traceguids, TraceObjectHandle);
    }
    FxRequestBase::CompleteSubmitted(Request, v12, v13);
  }
  if ( v4 )
  {
    if ( this->m_ObjectSize )
      v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v16 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xEu, 0x2Bu, WPP_FxIoTarget_cpp_Traceguids, v16, &this->m_SentIoEvent);
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v10 )
    FxIoTarget::DecrementIoCount(this);
}
