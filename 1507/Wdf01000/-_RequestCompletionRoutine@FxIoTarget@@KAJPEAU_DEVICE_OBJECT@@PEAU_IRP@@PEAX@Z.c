/*
 * XREFs of ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0013B60
 * Callers:
 *     <none>
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

__int64 __fastcall FxIoTarget::_RequestCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxRequestBase *Context)
{
  FxIoTarget *m_Target; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 v6; // r14
  char v7; // bp
  unsigned __int8 v8; // r8
  _FX_DRIVER_GLOBALS *v9; // rcx
  FxRequestBase *_a1; // rax
  FxRequestBase *v12; // rax
  _IRP *m_Irp; // rax
  FxVerifierLock *m_TargetFileObject; // rcx
  FxRequestBase *v15; // rax
  _FX_DRIVER_GLOBALS *v16; // r10
  const void *v17; // rcx
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
    if ( !Context->m_ObjectSize || (v12 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      v12 = Context;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x31u, WPP_FxIoTarget_cpp_Traceguids, v12);
  }
  v6 = 0;
  v7 = 0;
  FxNonPagedObject::Lock(m_Target, &PreviousIrql, (unsigned __int8)Context);
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
  if ( SLOBYTE(m_Target->m_ObjectFlags) < 0
    && (m_TargetFileObject = (FxVerifierLock *)m_Target[-1].m_TargetFileObject) != 0LL )
  {
    FxVerifierLock::Unlock(m_TargetFileObject, PreviousIrql, v8);
  }
  else
  {
    KeReleaseSpinLock(&m_Target->m_NPLock.m_Lock, PreviousIrql);
  }
  if ( v7 )
  {
    v9 = m_Target->m_Globals;
    if ( v9->FxVerboseOn )
    {
      if ( !Context->m_ObjectSize || (v15 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v15 = Context;
      WPP_IFR_SF_q(v9, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v15);
    }
    FxRequestBase::CompleteSubmitted(Context);
  }
  if ( v6 )
  {
    v16 = m_Target->m_Globals;
    if ( v16->FxVerboseOn )
    {
      if ( m_Target->m_ObjectSize )
        v17 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v17 = 0LL;
      WPP_IFR_SF_qq(v16, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v17, &m_Target->m_SentIoEvent);
    }
    KeSetEvent(&m_Target->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v7 && _InterlockedExchangeAdd(&m_Target->m_IoCount, 0xFFFFFFFF) == 1 )
  {
    FxIoTarget::PrintDisposeMessage(m_Target);
    KeSetEvent(&m_Target->m_DisposeEvent->m_Event.m_Event, 0, 0);
  }
  return 3221225494LL;
}
