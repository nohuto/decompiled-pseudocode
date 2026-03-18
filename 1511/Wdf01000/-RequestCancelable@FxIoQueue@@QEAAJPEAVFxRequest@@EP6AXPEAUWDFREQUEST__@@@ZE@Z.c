/*
 * XREFs of ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C001E324
 * Callers:
 *     imp_WdfRequestUnmarkCancelable @ 0x1C000FCE0 (imp_WdfRequestUnmarkCancelable.c)
 *     imp_WdfRequestMarkCancelable @ 0x1C002A380 (imp_WdfRequestMarkCancelable.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C002A450 (imp_WdfRequestMarkCancelableEx.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z @ 0x1C000EDFC (-RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C001EA9C (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C0022B10 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0069D34 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1C00BAE40 (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 */

int __fastcall FxIoQueue::RequestCancelable(
        FxIoQueue *this,
        FxRequest *pRequest,
        unsigned __int8 Cancelable,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *),
        unsigned __int8 FailIfIrpIsCancelled)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  unsigned int *v11; // r8
  int inserted; // esi
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // dl
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

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
        FxRequestBase::SetVerifierFlags(pRequest, 16);
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
          FxNonPagedObject::Unlock(this, irql, (unsigned __int8)v11);
          return inserted;
        }
      }
      v14 = irql;
      if ( !FailIfIrpIsCancelled )
      {
        inserted = 0;
        pRequest->m_Canceled = 1;
        FxNonPagedObject::Unlock(this, v14, (unsigned __int8)v11);
        FxObject::AddRef(
          pRequest,
          (void *)0x75657551,
          2185,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxIoQueue::CancelForDriver(this, pRequest);
        return inserted;
      }
      pRequest->m_CancelRoutine.m_Cancel = 0LL;
      FxNonPagedObject::Unlock(this, v14, (unsigned __int8)v11);
      if ( !m_Globals->FxVerifierOn )
        return inserted;
    }
    else
    {
      FxNonPagedObject::Lock(this, &irql, Cancelable);
      inserted = FxRequest::RemoveFromIrpQueue(pRequest, &this->m_DriverCancelable);
      if ( inserted >= 0 )
        pRequest->m_CancelRoutine.m_Cancel = 0LL;
      FxNonPagedObject::Unlock(this, irql, v13);
      if ( !m_Globals->FxVerifierOn || inserted < 0 )
        return inserted;
    }
    FxRequestBase::ClearVerifierFlags(pRequest, 16);
    return inserted;
  }
  return result;
}
