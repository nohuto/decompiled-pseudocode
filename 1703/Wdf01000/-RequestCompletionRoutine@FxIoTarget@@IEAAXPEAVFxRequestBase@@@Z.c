/*
 * XREFs of ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0066E14
 * Callers:
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002AA48 (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0088990 (-_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0090DD0 (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0010000 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C0010284 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0010CC0 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0010CF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::RequestCompletionRoutine(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v7; // rdx
  bool v8; // zf
  FxRequestBase *_a1; // rax
  unsigned __int8 v10; // bp
  char v11; // si
  _IRP *m_Irp; // rax
  unsigned __int8 v13; // r8
  unsigned __int64 v14; // rcx
  FxRequestBase *v15; // rax
  __int64 v16; // rdx
  _IRP *v17; // r8
  _FX_DRIVER_GLOBALS *v18; // rcx
  unsigned __int64 v19; // rdx
  FxRequestBase *v20; // rax
  _FX_DRIVER_GLOBALS *v21; // rcx
  const void *v22; // r10
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

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
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x31u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  v10 = 0;
  v11 = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags |= 1u;
  if ( FxRequestBase::CancelTimer(Request) )
  {
    if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
    {
      v11 = 1;
      if ( (Request->m_TargetFlags & 8) != 0 )
      {
        m_Irp = Request->m_Irp.m_Irp;
        if ( m_Irp->IoStatus.Status == -1073741536 )
          m_Irp->IoStatus.Status = -1073741643;
      }
      v10 = FxIoTarget::RemoveCompletedRequestLocked(this, Request);
      goto LABEL_19;
    }
    v11 = 0;
  }
  v14 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
  v15 = Request;
  if ( !Request->m_ObjectSize )
    v14 = 0LL;
  if ( v14 )
    v15 = (FxRequestBase *)v14;
  WPP_IFR_SF_q(this->m_Globals, 4u, 0xEu, 0x32u, WPP_FxIoTarget_cpp_Traceguids, v15);
LABEL_19:
  FxNonPagedObject::Unlock(this, irql, v13);
  if ( v11 )
  {
    v18 = this->m_Globals;
    if ( v18->FxVerboseOn )
    {
      v19 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v20 = Request;
      if ( !Request->m_ObjectSize )
        v19 = 0LL;
      if ( v19 )
        v20 = (FxRequestBase *)v19;
      WPP_IFR_SF_q(v18, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v20);
    }
    FxRequestBase::CompleteSubmitted(Request, v16, v17);
  }
  if ( v10 )
  {
    v21 = this->m_Globals;
    if ( v21->FxVerboseOn )
    {
      v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v22 = 0LL;
      WPP_IFR_SF_qq(v21, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v22, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v11 )
    FxIoTarget::DecrementIoCount(this);
}
