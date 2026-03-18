/*
 * XREFs of ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084868
 * Callers:
 *     ?_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0077200 (-_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0013DB0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C0013F60 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0014410 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C00842B4 (-PrintDisposeMessage@FxIoTarget@@IEAAXXZ.c)
 */

void __fastcall FxIoTarget::TimerCallback(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v4; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int64 v7; // rax
  FxRequestBase *_a2; // rcx
  const void *_a1; // rax
  unsigned __int8 v10; // r8
  char v11; // bp
  unsigned __int8 m_TargetFlags; // al
  _FILE_OBJECT *v13; // rcx
  signed __int32 m_IrpCompletionReferenceCount; // eax
  signed __int32 v15; // edx
  _FILE_OBJECT *m_TargetFileObject; // rcx
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // al
  _IRP *m_Irp; // rcx
  unsigned __int64 v20; // rcx
  FxRequestBase *v21; // rax
  const void *v22; // rax
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    if ( Request->m_ObjectSize )
      v7 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v7 = 0LL;
    _a2 = Request;
    if ( v7 )
      _a2 = (FxRequestBase *)v7;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
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
      v15 = m_IrpCompletionReferenceCount;
      m_IrpCompletionReferenceCount = _InterlockedCompareExchange(
                                        &Request->m_IrpCompletionReferenceCount,
                                        m_IrpCompletionReferenceCount + 1,
                                        m_IrpCompletionReferenceCount);
    }
    while ( v15 != m_IrpCompletionReferenceCount );
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetFileObject = this[-1].m_TargetFileObject) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)m_TargetFileObject, irql, v10);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    FxRequestBase::Cancel(Request);
    FxNonPagedObject::Lock(this, &irql, v17);
  }
  if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    v18 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v10);
    m_Irp = Request->m_Irp.m_Irp;
    v4 = v18;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  else
  {
    v11 = 0;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v13 = this[-1].m_TargetFileObject) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v13, irql, v10);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  if ( v11 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      if ( Request->m_ObjectSize )
        v20 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v20 = 0LL;
      v21 = Request;
      if ( v20 )
        v21 = (FxRequestBase *)v20;
      WPP_IFR_SF_q(this->m_Globals, 5u, 0xEu, 0x2Au, WPP_FxIoTarget_cpp_Traceguids, v21);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v4 )
  {
    if ( this->m_ObjectSize )
      v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v22 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xEu, 0x2Bu, WPP_FxIoTarget_cpp_Traceguids, v22, &this->m_SentIoEvent);
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(&this->m_IoCount, 0xFFFFFFFF) == 1 )
    {
      FxIoTarget::PrintDisposeMessage(this);
      KeSetEvent(&this->m_DisposeEvent->m_Event.m_Event, 0, 0);
    }
  }
}
