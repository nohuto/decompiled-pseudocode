/*
 * XREFs of ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00197F0
 * Callers:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C00250AC (-Cancel@FxRequestBase@@QEAAEXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005A30 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005D90 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::CompleteCanceledRequest(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // r8
  const void *v8; // rdi
  _IRP *m_Irp; // rax
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v11; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v6 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v5);
  FxNonPagedObject::Unlock(this, irql, v7);
  v8 = 0LL;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_q(v11, 5u, 0xEu, 0x2Cu, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxRequestBase::CompleteSubmitted(Request);
  if ( v6 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x2Du, WPP_FxIoTarget_cpp_Traceguids, v8, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  FxIoTarget::DecrementIoCount(this);
}
