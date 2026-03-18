/*
 * XREFs of ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C000B620
 * Callers:
 *     imp_WdfRequestUnmarkCancelable @ 0x1C00083C0 (imp_WdfRequestUnmarkCancelable.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C00233E0 (imp_WdfRequestMarkCancelableEx.c)
 *     imp_WdfRequestMarkCancelable @ 0x1C00238C0 (imp_WdfRequestMarkCancelable.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z @ 0x1C0007448 (-RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000BE58 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00206C4 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1C00D23B4 (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 */

int __fastcall FxIoQueue::RequestCancelable(
        FxIoQueue *this,
        FxRequest *pRequest,
        unsigned __int8 Cancelable,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *),
        unsigned __int8 FailIfIrpIsCancelled)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  int result; // eax
  unsigned int *v11; // r8
  int inserted; // r14d
  KIRQL v13; // dl
  unsigned __int64 *p_m_Lock; // rcx
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r8
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  _LIST_ENTRY *v19; // rcx
  FxVerifierLock *Blink; // rcx
  unsigned __int8 v21; // dl
  unsigned int RefCount; // edx
  _LIST_ENTRY *v23; // rcx
  _LIST_ENTRY *v24; // rcx
  unsigned __int8 v25; // r8
  _LIST_ENTRY *v26; // rcx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 v28; // [rsp+31h] [rbp-Fh] BYREF
  unsigned __int8 v29[14]; // [rsp+32h] [rbp-Eh] BYREF
  unsigned __int8 irql; // [rsp+60h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    result = FxIoQueue::Vf_VerifyRequestCancelable(this, this->m_Globals, pRequest, Cancelable);
  else
    result = 0;
  if ( result >= 0 )
  {
    if ( Cancelable )
    {
      if ( m_Globals->FxVerifierOn )
      {
        FxNonPagedObject::Lock(pRequest, &PreviousIrql, Cancelable);
        pRequest->m_VerifierFlags |= 0x10u;
        if ( (pRequest->m_ObjectFlags & 0x80) != 0
          && (m_ForwardProgressQueue = (FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue) != 0LL )
        {
          FxVerifierLock::Unlock(m_ForwardProgressQueue, PreviousIrql, v17);
        }
        else
        {
          KeReleaseSpinLock(&pRequest->m_NPLock.m_Lock, PreviousIrql);
        }
      }
      FxNonPagedObject::Lock(this, &irql, Cancelable);
      pRequest->m_CancelRoutine.m_Cancel = EvtRequestCancel;
      if ( this->m_CancelDispatchedRequests )
      {
        inserted = -1073741536;
      }
      else
      {
        inserted = FxRequest::InsertTailIrpQueue(pRequest, &this->m_DriverCancelable, v11);
        if ( inserted >= 0 )
        {
          if ( (this->m_ObjectFlags & 0x80) != 0 )
          {
            Blink = (FxVerifierLock *)this[-1].m_IoPkgListNode.m_ListEntry.Blink;
            if ( Blink )
            {
              v21 = irql;
LABEL_53:
              FxVerifierLock::Unlock(Blink, v21, (unsigned __int8)v11);
              return inserted;
            }
          }
          v13 = irql;
          p_m_Lock = &this->m_NPLock.m_Lock;
LABEL_10:
          KeReleaseSpinLock(p_m_Lock, v13);
          return inserted;
        }
      }
      if ( !FailIfIrpIsCancelled )
      {
        inserted = 0;
        pRequest->m_Canceled = 1;
        if ( (this->m_ObjectFlags & 0x80) != 0 && (v19 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
          FxVerifierLock::Unlock((FxVerifierLock *)v19, irql, (unsigned __int8)v11);
        else
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
        RefCount = _InterlockedIncrement(&pRequest->m_Refcnt);
        if ( (pRequest->m_ObjectFlags & 0x80) != 0 )
          v23 = pRequest[-1].m_ForwardProgressList.Blink;
        else
          v23 = 0LL;
        if ( v23 )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)v23,
            (void *)0x75657551,
            2185,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
            TagAddRef,
            RefCount);
        FxIoQueue::CancelForDriver(this, pRequest);
        return inserted;
      }
      pRequest->m_CancelRoutine.m_Cancel = 0LL;
      if ( (this->m_ObjectFlags & 0x80) != 0 && (v24 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        FxVerifierLock::Unlock((FxVerifierLock *)v24, irql, (unsigned __int8)v11);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      if ( !m_Globals->FxVerifierOn )
        return inserted;
      FxNonPagedObject::Lock(pRequest, &v28, v25);
      pRequest->m_VerifierFlags &= ~0x10u;
      if ( (pRequest->m_ObjectFlags & 0x80) != 0 )
      {
        Blink = (FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue;
        if ( Blink )
        {
          v21 = v28;
          goto LABEL_53;
        }
      }
      v13 = v28;
    }
    else
    {
      FxNonPagedObject::Lock(this, &irql, Cancelable);
      inserted = FxRequest::RemoveFromIrpQueue(pRequest, &this->m_DriverCancelable);
      if ( inserted >= 0 )
        pRequest->m_CancelRoutine.m_Cancel = 0LL;
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v26 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        FxVerifierLock::Unlock((FxVerifierLock *)v26, irql, v15);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      if ( !m_Globals->FxVerifierOn || inserted < 0 )
        return inserted;
      FxNonPagedObject::Lock(pRequest, v29, v16);
      pRequest->m_VerifierFlags &= ~0x10u;
      if ( (pRequest->m_ObjectFlags & 0x80) != 0 )
      {
        Blink = (FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue;
        if ( Blink )
        {
          v21 = v29[0];
          goto LABEL_53;
        }
      }
      v13 = v29[0];
    }
    p_m_Lock = &pRequest->m_NPLock.m_Lock;
    goto LABEL_10;
  }
  return result;
}
