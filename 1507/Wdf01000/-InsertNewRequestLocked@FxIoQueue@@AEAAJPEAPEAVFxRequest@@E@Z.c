/*
 * XREFs of ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0030B08
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005650 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0017320 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00206C4 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxIoQueue::InsertNewRequestLocked(FxIoQueue *this, FxRequest **Request, unsigned int *PreviousIrql)
{
  unsigned __int8 v5; // di
  unsigned __int8 v6; // r8
  int flags; // r14d
  _LIST_ENTRY *Blink; // rcx
  __int64 v9; // r8
  unsigned __int16 v10; // r9
  FxRequest *v11; // rdi
  FxDeviceBase *m_DeviceBase; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a4; // rax
  unsigned __int8 v15; // r8
  const _GUID *Line; // [rsp+20h] [rbp-48h]
  unsigned __int8 v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = (unsigned __int8)PreviousIrql;
  v5 = (unsigned __int8)PreviousIrql;
  flags = FxRequest::InsertTailIrpQueue(*Request, &this->m_Queue, PreviousIrql);
  if ( flags >= 0 )
  {
    (*Request)->m_IoQueue = this;
    if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    {
      this->m_TransitionFromEmpty = 1;
      this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
      if ( this->m_IsDevicePowerPolicyOwner )
      {
        if ( this->m_PowerManaged
          && !this->m_PowerReferenced
          && (int)FxPowerIdleMachine::PowerReferenceWorker(
                    *(FxPowerIdleMachine **)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL),
                    0,
                    FxPowerReferenceDefault,
                    0LL,
                    0,
                    0LL) >= 0 )
        {
          this->m_PowerReferenced = 1;
        }
      }
    }
  }
  else
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)Blink, v5, v6);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v5);
    v11 = *Request;
    (*Request)->m_Irp.m_Irp->IoStatus.Information = 0LL;
    m_DeviceBase = v11->m_DeviceBase;
    m_Globals = v11->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( v11->m_ObjectSize )
        _a4 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a4 = 0LL;
      WPP_IFR_SF_qqxd(
        m_Globals,
        (unsigned __int8)v11->m_Irp.m_Irp,
        v11->m_Irp.m_Irp->IoStatus.Information,
        0xBu,
        Line,
        _a4,
        v11->m_Irp.m_Irp,
        v11->m_Irp.m_Irp->IoStatus.Information,
        flags);
    }
    if ( m_DeviceBase )
      v11->m_PriorityBoost = HIBYTE(m_DeviceBase[1].m_Globals);
    else
      v11->m_PriorityBoost = 0;
    FxRequest::CompleteInternal(v11, (_FX_DRIVER_GLOBALS *)(unsigned int)flags, v9, v10);
    (*Request)->Release(
      *Request,
      (void *)1886220099,
      2611,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &v18, v15);
  }
  *Request = 0LL;
  return (unsigned int)flags;
}
