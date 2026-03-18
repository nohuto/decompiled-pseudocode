/*
 * XREFs of ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x1C0095FBC
 * Callers:
 *     imp_WdfIoQueueFindRequest @ 0x1C0093A10 (imp_WdfIoQueueFindRequest.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C0075088 (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 *     ?Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D22AC (-Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::PeekRequest(
        FxIoQueue *this,
        FxRequest *TagRequest,
        _FILE_OBJECT *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  bool v6; // zf
  const void *_a1; // rbx
  int v12; // edi
  int result; // eax
  unsigned __int8 v14; // r8
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v16; // r8
  FxRequest *v17; // rbx
  unsigned __int8 v18; // r8
  char m_ObjectFlags; // al
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 PreviousIrql[4]; // [rsp+40h] [rbp-10h] BYREF
  int v22; // [rsp+44h] [rbp-Ch]
  FxRequest *pRequest; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  v6 = this->m_Type == WdfIoQueueDispatchManual;
  pRequest = 0LL;
  if ( !v6 )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v12 = -1073741808;
    WPP_IFR_SF_qd(
      m_Globals,
      2u,
      0xDu,
      0x1Du,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1,
      -1073741808);
    v22 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return v12;
  }
  if ( !TagRequest
    || (!m_Globals->FxVerifierOn
      ? (result = 0)
      : (result = FxIoQueue::Vf_VerifyPeekRequest(this, m_Globals, TagRequest)),
        result >= 0) )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)FileObject);
    v12 = FxRequest::PeekRequest(&this->m_Queue, TagRequest, FileObject, Parameters, &pRequest);
    if ( v12 == -2147483622 && !FileObject && !TagRequest && this->m_Queue.m_RequestCount > 0 )
      this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)Blink, irql, v14);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    if ( v12 >= 0 )
    {
      v17 = pRequest;
      if ( m_Globals->FxVerifierOn )
      {
        FxNonPagedObject::Lock(pRequest, PreviousIrql, v16);
        m_ObjectFlags = v17->m_ObjectFlags;
        v17->m_VerifierFlags |= 2u;
        if ( m_ObjectFlags < 0 && (m_ForwardProgressQueue = (FxVerifierLock *)v17[-1].m_ForwardProgressQueue) != 0LL )
          FxVerifierLock::Unlock(m_ForwardProgressQueue, PreviousIrql[0], v18);
        else
          KeReleaseSpinLock(&v17->m_NPLock.m_Lock, PreviousIrql[0]);
      }
      *pOutRequest = v17;
    }
    return v12;
  }
  return result;
}
