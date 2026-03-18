/*
 * XREFs of ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00148C0
 * Callers:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C0013F60 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0013DB0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0014410 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C00842B4 (-PrintDisposeMessage@FxIoTarget@@IEAAXXZ.c)
 */

void __fastcall FxIoTarget::CompleteCanceledRequest(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  const void *v6; // rdi
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // r8
  _IRP *m_Irp; // rax
  _FILE_OBJECT *m_TargetFileObject; // rcx
  unsigned __int64 v11; // rcx
  FxRequestBase *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v6 = 0LL;
  v7 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v5);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetFileObject = this[-1].m_TargetFileObject) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)m_TargetFileObject, irql, v8);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  if ( this->m_Globals->FxVerboseOn )
  {
    if ( Request->m_ObjectSize )
      v11 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v11 = 0LL;
    _a1 = Request;
    if ( v11 )
      _a1 = (FxRequestBase *)v11;
    WPP_IFR_SF_q(this->m_Globals, 5u, 0xEu, 0x2Cu, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxRequestBase::CompleteSubmitted(Request);
  if ( v7 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x2Du, WPP_FxIoTarget_cpp_Traceguids, v6, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( _InterlockedExchangeAdd(&this->m_IoCount, 0xFFFFFFFF) == 1 )
  {
    FxIoTarget::PrintDisposeMessage(this);
    KeSetEvent(&this->m_DisposeEvent->m_Event.m_Event, 0, 0);
  }
}
