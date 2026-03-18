/*
 * XREFs of ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0087FFC
 * Callers:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0088530 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0010000 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0010CF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::HandleFailedResubmit(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v7; // rdx
  bool v8; // zf
  FxRequestBase *_a1; // rax
  _IRP *m_Irp; // rax
  unsigned __int8 v11; // si
  unsigned __int8 v12; // r8
  __int64 v13; // rdx
  _IRP *v14; // r8
  _FX_DRIVER_GLOBALS *v15; // rcx
  FxRequestBase *v16; // rax
  unsigned __int64 v17; // r8
  _FX_DRIVER_GLOBALS *v18; // rcx
  const void *v19; // r10
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = Request->m_ObjectSize;
    v7 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v8 = m_ObjectSize == 0;
    _a1 = Request;
    if ( v8 )
      v7 = 0LL;
    if ( v7 )
      _a1 = (FxRequestBase *)v7;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x2Eu, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags |= 1u;
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v11 = FxIoTarget::RemoveCompletedRequestLocked(this, Request);
  FxNonPagedObject::Unlock(this, irql, v12);
  v15 = this->m_Globals;
  if ( v15->FxVerboseOn )
  {
    v16 = Request;
    v17 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v17 = 0LL;
    if ( v17 )
      v16 = (FxRequestBase *)v17;
    WPP_IFR_SF_q(v15, 5u, 0xEu, 0x2Fu, WPP_FxIoTarget_cpp_Traceguids, v16);
  }
  FxRequestBase::CompleteSubmitted(Request, v13, v14);
  if ( v11 )
  {
    v18 = this->m_Globals;
    if ( v18->FxVerboseOn )
    {
      v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v19 = 0LL;
      WPP_IFR_SF_qq(v18, 5u, 0xEu, 0x30u, WPP_FxIoTarget_cpp_Traceguids, v19, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  FxIoTarget::DecrementIoCount(this);
}
