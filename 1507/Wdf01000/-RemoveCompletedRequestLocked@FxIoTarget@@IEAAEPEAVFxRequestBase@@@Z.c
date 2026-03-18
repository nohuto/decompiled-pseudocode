/*
 * XREFs of ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0014410
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0013B60 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00148C0 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C005C814 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C008409C (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084868 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

unsigned __int8 __fastcall FxIoTarget::RemoveCompletedRequestLocked(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *Flink; // rdx
  $CBDB4BB9AD9093A4D765C5B3340F9886 *v7; // rax
  _IRP *Irp; // rcx
  unsigned __int8 m_TargetFlags; // si
  _FX_DRIVER_GLOBALS *v10; // rax
  FxRequestBase *_a2; // rax
  const void *_a1; // rdx
  unsigned __int8 v14; // r8
  FxVerifierLock *m_IrpQueue; // rcx
  FxIoTarget_vtbl *v16; // rax
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    if ( !Request->m_ObjectSize || (_a2 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      _a2 = Request;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x28u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  Flink = Request->m_ListEntry.Flink;
  v7 = &Request->120;
  Irp = Request->m_CsqContext.Irp;
  if ( ($CBDB4BB9AD9093A4D765C5B3340F9886 *)Flink->Blink != &Request->120
    || *($CBDB4BB9AD9093A4D765C5B3340F9886 **)&Irp->Type != v7 )
  {
    __fastfail(3u);
  }
  *(_QWORD *)&Irp->Type = Flink;
  Flink->Blink = (_LIST_ENTRY *)Irp;
  Request->m_CsqContext.Irp = (_IRP *)&Request->120;
  v7->m_ListEntry.Flink = (_LIST_ENTRY *)v7;
  m_TargetFlags = Request->m_TargetFlags;
  Request->m_TargetFlags = m_TargetFlags & 0xE2;
  v10 = this->m_Globals;
  if ( v10->FxVerifierOn && v10->FxVerifierIO )
  {
    FxNonPagedObject::Lock(Request, &PreviousIrql, a3);
    Request->m_VerifierFlags &= ~0x100u;
    if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (m_IrpQueue = (FxVerifierLock *)Request[-1].m_IrpQueue) != 0LL )
      FxVerifierLock::Unlock(m_IrpQueue, PreviousIrql, v14);
    else
      KeReleaseSpinLock(&Request->m_NPLock.m_Lock, PreviousIrql);
  }
  if ( this->m_Removing )
  {
    if ( this->m_SentIoListHead.Flink == &this->m_SentIoListHead
      && this->m_IgnoredIoListHead.Flink == &this->m_IgnoredIoListHead )
    {
      v16 = this->__vftable;
      this->m_Removing = 0;
      v16->ClearTargetPointers(this);
      return 1;
    }
  }
  else if ( this->m_WaitingForSentIo
         && (m_TargetFlags & 0x10) == 0
         && this->m_SentIoListHead.Flink == &this->m_SentIoListHead )
  {
    this->m_WaitingForSentIo = 0;
    return 1;
  }
  return 0;
}
