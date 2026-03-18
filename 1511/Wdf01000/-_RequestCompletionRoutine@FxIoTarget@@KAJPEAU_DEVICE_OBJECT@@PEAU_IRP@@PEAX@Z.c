/*
 * XREFs of ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0005730
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0005A04 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005A30 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005D90 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C0006040 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 */

__int64 __fastcall FxIoTarget::_RequestCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxRequestBase *Context)
{
  FxIoTarget *m_Target; // rdi
  unsigned __int8 v5; // bp
  char v6; // si
  const void *TraceObjectHandle; // rax
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v10; // r10
  _IRP *m_Irp; // rax
  const void *v12; // rax
  _FX_DRIVER_GLOBALS *v13; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v15; // rcx
  unsigned __int8 PreviousIrql; // [rsp+68h] [rbp+10h] BYREF

  m_Target = Context->m_Target;
  if ( Context->m_CompletionRoutine.m_Completion != FxIoTarget::_SyncCompletionRoutine
    && Irp->PendingReturned
    && Irp->CurrentLocation <= Irp->StackCount )
  {
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  if ( m_Target->m_Globals->FxVerboseOn )
  {
    _a1 = FxRequestBase::GetTraceObjectHandle(Context);
    WPP_IFR_SF_q(v10, 5u, 0xEu, 0x31u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  v5 = 0;
  v6 = 0;
  FxNonPagedObject::Lock(m_Target, &PreviousIrql);
  Context->m_TargetFlags |= 1u;
  if ( !FxRequestBase::CancelTimer(Context) )
    goto LABEL_20;
  if ( _InterlockedExchangeAdd(&Context->m_IrpCompletionReferenceCount, 0xFFFFFFFF) != 1 )
  {
    v6 = 0;
LABEL_20:
    TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Context);
    WPP_IFR_SF_q(m_Target->m_Globals, 4u, 0xEu, 0x32u, WPP_FxIoTarget_cpp_Traceguids, TraceObjectHandle);
    goto LABEL_11;
  }
  v6 = 1;
  if ( (Context->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Context->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v5 = FxIoTarget::RemoveCompletedRequestLocked(m_Target, Context);
LABEL_11:
  FxNonPagedObject::Unlock(m_Target, PreviousIrql);
  if ( v6 )
  {
    if ( m_Target->m_Globals->FxVerboseOn )
    {
      v12 = FxRequestBase::GetTraceObjectHandle(Context);
      WPP_IFR_SF_q(v13, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v12);
    }
    FxRequestBase::CompleteSubmitted(Context);
  }
  if ( v5 )
  {
    m_Globals = m_Target->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( m_Target->m_ObjectSize )
        v15 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v15, &m_Target->m_SentIoEvent);
    }
    KeSetEvent(&m_Target->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v6 )
    FxIoTarget::DecrementIoCount(m_Target);
  return 3221225494LL;
}
