/*
 * XREFs of ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C005C814
 * Callers:
 *     ?FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z @ 0x1C0083A84 (-FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0013D84 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0013DB0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0014410 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C00842B4 (-PrintDisposeMessage@FxIoTarget@@IEAAXXZ.c)
 */

void __fastcall FxIoTarget::RequestCompletionRoutine(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int64 v6; // rcx
  FxRequestBase *_a1; // rax
  unsigned __int8 v8; // bp
  char v9; // si
  unsigned __int8 v10; // r8
  _IRP *m_Irp; // rax
  unsigned __int8 v12; // r8
  unsigned __int64 v13; // rcx
  FxRequestBase *v14; // rax
  _FILE_OBJECT *m_TargetFileObject; // rcx
  unsigned __int64 v16; // rcx
  FxRequestBase *v17; // rax
  _FX_DRIVER_GLOBALS *v18; // r10
  const void *v19; // rcx
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    if ( Request->m_ObjectSize )
      v6 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v6 = 0LL;
    _a1 = Request;
    if ( v6 )
      _a1 = (FxRequestBase *)v6;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x31u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  v8 = 0;
  v9 = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags |= 1u;
  if ( FxRequestBase::CancelTimer(Request) )
  {
    if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
    {
      v9 = 1;
      if ( (Request->m_TargetFlags & 8) != 0 )
      {
        m_Irp = Request->m_Irp.m_Irp;
        if ( m_Irp->IoStatus.Status == -1073741536 )
          m_Irp->IoStatus.Status = -1073741643;
      }
      v8 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v10);
      goto LABEL_21;
    }
    v9 = 0;
  }
  if ( Request->m_ObjectSize )
    v13 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v13 = 0LL;
  v14 = Request;
  if ( v13 )
    v14 = (FxRequestBase *)v13;
  WPP_IFR_SF_q(this->m_Globals, 4u, 0xEu, 0x32u, WPP_FxIoTarget_cpp_Traceguids, v14);
LABEL_21:
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetFileObject = this[-1].m_TargetFileObject) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)m_TargetFileObject, irql, v12);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  if ( v9 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      if ( Request->m_ObjectSize )
        v16 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v16 = 0LL;
      v17 = Request;
      if ( v16 )
        v17 = (FxRequestBase *)v16;
      WPP_IFR_SF_q(this->m_Globals, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v17);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v8 )
  {
    v18 = this->m_Globals;
    if ( v18->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v19 = 0LL;
      WPP_IFR_SF_qq(v18, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v19, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(&this->m_IoCount, 0xFFFFFFFF) == 1 )
    {
      FxIoTarget::PrintDisposeMessage(this);
      KeSetEvent(&this->m_DisposeEvent->m_Event.m_Event, 0, 0);
    }
  }
}
