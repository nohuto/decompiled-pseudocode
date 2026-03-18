/*
 * XREFs of ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D20BC
 * Callers:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C0005710 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D140C (-Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyGetRequestUpdateFlags(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *TagRequest)
{
  const void *_a1; // rbx
  unsigned __int8 v8; // r8
  int IsTagRequest; // r14d
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 v11; // r8
  const void *v12; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql; // [rsp+90h] [rbp+40h] BYREF
  int v15; // [rsp+98h] [rbp+48h]

  if ( TagRequest )
  {
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)FxDriverGlobals, 0xBu) )
    {
      if ( this->m_Type != WdfIoQueueDispatchManual )
      {
        if ( this->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qd(
          FxDriverGlobals,
          2u,
          0xDu,
          0x16u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          _a1,
          -1073741808);
        v15 = 7567731;
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
        if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
          DbgBreakPoint();
        return 3221225488LL;
      }
    }
    else
    {
      FxNonPagedObject::Lock(TagRequest, &irql, (unsigned __int8)TagRequest);
      if ( FxDriverGlobals->FxVerifierOn )
        IsTagRequest = FxRequest::Vf_VerifyRequestIsTagRequest(TagRequest, FxDriverGlobals);
      else
        IsTagRequest = 0;
      if ( SLOBYTE(TagRequest->m_ObjectFlags) < 0
        && (m_ForwardProgressQueue = (FxVerifierLock *)TagRequest[-1].m_ForwardProgressQueue) != 0LL )
      {
        FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, v8);
      }
      else
      {
        KeReleaseSpinLock(&TagRequest->m_NPLock.m_Lock, irql);
      }
      if ( IsTagRequest < 0 )
        return (unsigned int)IsTagRequest;
    }
  }
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)TagRequest);
  if ( this->m_Type == WdfIoQueueDispatchSequential && !this->m_DriverIoCount )
  {
    v12 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_q(
      FxDriverGlobals,
      2u,
      0xDu,
      0x17u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      v12);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)Blink, irql, v11);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  return 0LL;
}
