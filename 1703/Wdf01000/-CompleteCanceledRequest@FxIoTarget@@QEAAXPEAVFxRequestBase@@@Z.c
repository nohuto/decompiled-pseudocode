/*
 * XREFs of ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0029D8C
 * Callers:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C002F60C (-Cancel@FxRequestBase@@QEAAEXZ.c)
 * Callees:
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0010000 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0010CF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::CompleteCanceledRequest(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v5; // si
  unsigned __int8 v6; // r8
  __int64 v7; // rdx
  _IRP *v8; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IRP *m_Irp; // rax
  unsigned __int64 v11; // rdx
  FxRequestBase *_a1; // rax
  _FX_DRIVER_GLOBALS *v13; // rcx
  const void *v14; // r10
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v5 = FxIoTarget::RemoveCompletedRequestLocked(this, Request);
  FxNonPagedObject::Unlock(this, irql, v6);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v11 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a1 = Request;
    if ( !Request->m_ObjectSize )
      v11 = 0LL;
    if ( v11 )
      _a1 = (FxRequestBase *)v11;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x2Cu, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxRequestBase::CompleteSubmitted(Request, v7, v8);
  if ( v5 )
  {
    v13 = this->m_Globals;
    if ( v13->FxVerboseOn )
    {
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v14 = 0LL;
      WPP_IFR_SF_qq(v13, 5u, 0xEu, 0x2Du, WPP_FxIoTarget_cpp_Traceguids, v14, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  FxIoTarget::DecrementIoCount(this);
}
