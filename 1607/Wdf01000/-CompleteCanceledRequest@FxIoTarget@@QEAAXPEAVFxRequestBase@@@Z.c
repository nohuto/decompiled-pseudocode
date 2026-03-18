/*
 * XREFs of ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C002AB5C
 * Callers:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C002D814 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C000CFF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000D920 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C002DA64 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::CompleteCanceledRequest(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // r8
  __int64 v8; // rdx
  _IRP *v9; // r8
  const void *v10; // rdi
  _IRP *m_Irp; // rax
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v13; // r10
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
  v10 = 0LL;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_q(v13, 5u, 0xEu, 0x2Cu, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxRequestBase::CompleteSubmitted(Request, v8, v9);
  if ( v6 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x2Du, WPP_FxIoTarget_cpp_Traceguids, v10, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  FxIoTarget::DecrementIoCount(this);
}
