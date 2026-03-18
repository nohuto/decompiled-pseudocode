/*
 * XREFs of ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0088748
 * Callers:
 *     ?_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C007E100 (-_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0010000 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C0010284 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0010CF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C002F60C (-Cancel@FxRequestBase@@QEAAEXZ.c)
 */

void __fastcall FxIoTarget::TimerCallback(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v4; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxRequestBase *_a2; // r8
  unsigned __int64 v8; // rcx
  const void *_a1; // rdx
  unsigned __int8 v10; // r8
  char v11; // si
  unsigned __int8 m_TargetFlags; // al
  __int64 v13; // rdx
  _IRP *v14; // r8
  _FX_DRIVER_GLOBALS *v15; // rcx
  unsigned __int64 v16; // r8
  FxRequestBase *v17; // rax
  const void *v18; // rdx
  signed __int32 m_IrpCompletionReferenceCount; // eax
  signed __int32 v20; // edx
  unsigned __int8 v21; // r8
  unsigned __int8 v22; // al
  _IRP *m_Irp; // rcx
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a2 = Request;
    v8 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v8 = 0LL;
    if ( v8 )
      _a2 = (FxRequestBase *)v8;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags &= ~4u;
  v11 = 1;
  m_TargetFlags = Request->m_TargetFlags;
  if ( (m_TargetFlags & 1) == 0 )
  {
    Request->m_TargetFlags = m_TargetFlags | 8;
    m_IrpCompletionReferenceCount = Request->m_IrpCompletionReferenceCount;
    do
    {
      if ( m_IrpCompletionReferenceCount <= 0 )
        break;
      v20 = m_IrpCompletionReferenceCount;
      m_IrpCompletionReferenceCount = _InterlockedCompareExchange(
                                        &Request->m_IrpCompletionReferenceCount,
                                        m_IrpCompletionReferenceCount + 1,
                                        m_IrpCompletionReferenceCount);
    }
    while ( v20 != m_IrpCompletionReferenceCount );
    FxNonPagedObject::Unlock(this, irql, v10);
    FxRequestBase::Cancel(Request);
    FxNonPagedObject::Lock(this, &irql, v21);
  }
  if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    v22 = FxIoTarget::RemoveCompletedRequestLocked(this, Request);
    m_Irp = Request->m_Irp.m_Irp;
    v4 = v22;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  else
  {
    v11 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v10);
  if ( v11 )
  {
    v15 = this->m_Globals;
    if ( v15->FxVerboseOn )
    {
      v16 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v17 = Request;
      if ( !Request->m_ObjectSize )
        v16 = 0LL;
      if ( v16 )
        v17 = (FxRequestBase *)v16;
      WPP_IFR_SF_q(v15, 5u, 0xEu, 0x2Au, WPP_FxIoTarget_cpp_Traceguids, v17);
    }
    FxRequestBase::CompleteSubmitted(Request, v13, v14);
  }
  if ( v4 )
  {
    v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v18 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xEu, 0x2Bu, WPP_FxIoTarget_cpp_Traceguids, v18, &this->m_SentIoEvent);
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v11 )
    FxIoTarget::DecrementIoCount(this);
}
