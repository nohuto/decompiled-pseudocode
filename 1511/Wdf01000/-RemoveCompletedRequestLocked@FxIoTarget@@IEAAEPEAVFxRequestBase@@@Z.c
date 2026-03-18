/*
 * XREFs of ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005D90
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0005730 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00197F0 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00565C8 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0075DF0 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00764C4 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 */

unsigned __int8 __fastcall FxIoTarget::RemoveCompletedRequestLocked(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 a3)
{
  _LIST_ENTRY *Flink; // rdx
  $62629F1B78C8AA6D0A69F9052F9E18D0 *v6; // rax
  _IRP *Irp; // rcx
  unsigned __int8 m_TargetFlags; // si
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  const void *_a2; // rax
  const void *_a1; // r8
  _FX_DRIVER_GLOBALS *v13; // r10
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // r8
  FxIoTarget_vtbl *v16; // rax
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp+8h] BYREF

  if ( this->m_Globals->FxVerboseOn )
  {
    _a2 = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_qq(v13, 5u, 0xEu, 0x28u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  Flink = Request->m_ListEntry.Flink;
  v6 = &Request->120;
  Irp = Request->m_CsqContext.Irp;
  if ( ($62629F1B78C8AA6D0A69F9052F9E18D0 *)Flink->Blink != &Request->120
    || *($62629F1B78C8AA6D0A69F9052F9E18D0 **)&Irp->Type != v6 )
  {
    __fastfail(3u);
  }
  *(_QWORD *)&Irp->Type = Flink;
  Flink->Blink = (_LIST_ENTRY *)Irp;
  Request->m_CsqContext.Irp = (_IRP *)&Request->120;
  v6->m_ListEntry.Flink = (_LIST_ENTRY *)v6;
  m_TargetFlags = Request->m_TargetFlags;
  Request->m_TargetFlags = m_TargetFlags & 0xE2;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(Request, &PreviousIrql, a3);
    v14 = PreviousIrql;
    Request->m_VerifierFlags &= ~0x100u;
    FxNonPagedObject::Unlock(Request, v14, v15);
  }
  if ( !this->m_Removing )
  {
    if ( this->m_WaitingForSentIo
      && (m_TargetFlags & 0x10) == 0
      && this->m_SentIoListHead.Flink == &this->m_SentIoListHead )
    {
      this->m_WaitingForSentIo = 0;
      return 1;
    }
    return 0;
  }
  if ( this->m_SentIoListHead.Flink != &this->m_SentIoListHead
    || this->m_IgnoredIoListHead.Flink != &this->m_IgnoredIoListHead )
  {
    return 0;
  }
  v16 = this->__vftable;
  this->m_Removing = 0;
  v16->ClearTargetPointers(this);
  return 1;
}
