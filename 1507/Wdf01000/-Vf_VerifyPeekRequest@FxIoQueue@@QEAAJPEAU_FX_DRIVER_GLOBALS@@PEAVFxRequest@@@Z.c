/*
 * XREFs of ?Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D22AC
 * Callers:
 *     ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x1C0095FBC (-PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPE.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D140C (-Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyPeekRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *TagRequest)
{
  unsigned __int8 v5; // r8
  unsigned int IsTagRequest; // edi
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  FxIoQueue *irql; // [rsp+30h] [rbp+8h] BYREF

  irql = this;
  FxNonPagedObject::Lock(TagRequest, (unsigned __int8 *)&irql, (unsigned __int8)TagRequest);
  if ( FxDriverGlobals->FxVerifierOn )
    IsTagRequest = FxRequest::Vf_VerifyRequestIsTagRequest(TagRequest, FxDriverGlobals);
  else
    IsTagRequest = 0;
  if ( SLOBYTE(TagRequest->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)TagRequest[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, (KIRQL)irql, v5);
  }
  else
  {
    KeReleaseSpinLock(&TagRequest->m_NPLock.m_Lock, (KIRQL)irql);
  }
  return IsTagRequest;
}
