/*
 * XREFs of ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00109C0
 * Callers:
 *     <none>
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

__int64 __fastcall FxIoTarget::_RequestCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxRequestBase *Context)
{
  FxIoTarget *m_Target; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 v6; // bp
  char v7; // si
  _FX_DRIVER_GLOBALS *v8; // rcx
  FxRequestBase *_a1; // rax
  FxRequestBase *v11; // rax
  _IRP *m_Irp; // rax
  FxRequestBase *v13; // rax
  _FX_DRIVER_GLOBALS *v14; // r10
  const void *v15; // rcx
  unsigned __int8 PreviousIrql; // [rsp+78h] [rbp+10h] BYREF

  m_Target = Context->m_Target;
  if ( Context->m_CompletionRoutine.m_Completion != FxIoTarget::_SyncCompletionRoutine
    && Irp->PendingReturned
    && Irp->CurrentLocation <= Irp->StackCount )
  {
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  m_Globals = m_Target->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v11 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Context->m_ObjectSize )
      v11 = 0LL;
    if ( !v11 )
      v11 = Context;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x31u, WPP_FxIoTarget_cpp_Traceguids, v11);
  }
  v6 = 0;
  v7 = 0;
  FxNonPagedObject::Lock(m_Target, &PreviousIrql);
  Context->m_TargetFlags |= 1u;
  if ( FxRequestBase::CancelTimer(Context) )
  {
    if ( _InterlockedExchangeAdd(&Context->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
    {
      v7 = 1;
      if ( (Context->m_TargetFlags & 8) != 0 )
      {
        m_Irp = Context->m_Irp.m_Irp;
        if ( m_Irp->IoStatus.Status == -1073741536 )
          m_Irp->IoStatus.Status = -1073741643;
      }
      v6 = FxIoTarget::RemoveCompletedRequestLocked(m_Target, Context);
      goto LABEL_7;
    }
    v7 = 0;
  }
  if ( !Context->m_ObjectSize || (_a1 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
    _a1 = Context;
  WPP_IFR_SF_q(m_Target->m_Globals, 4u, 0xEu, 0x32u, WPP_FxIoTarget_cpp_Traceguids, _a1);
LABEL_7:
  FxNonPagedObject::Unlock(m_Target, PreviousIrql);
  if ( v7 )
  {
    v8 = m_Target->m_Globals;
    if ( v8->FxVerboseOn )
    {
      v13 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Context->m_ObjectSize )
        v13 = 0LL;
      if ( !v13 )
        v13 = Context;
      WPP_IFR_SF_q(v8, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v13);
    }
    FxRequestBase::CompleteSubmitted(Context);
  }
  if ( v6 )
  {
    v14 = m_Target->m_Globals;
    if ( v14->FxVerboseOn )
    {
      v15 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_Target->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_qq(v14, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v15, &m_Target->m_SentIoEvent);
    }
    KeSetEvent(&m_Target->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v7 )
    FxIoTarget::DecrementIoCount(m_Target);
  return 3221225494LL;
}
