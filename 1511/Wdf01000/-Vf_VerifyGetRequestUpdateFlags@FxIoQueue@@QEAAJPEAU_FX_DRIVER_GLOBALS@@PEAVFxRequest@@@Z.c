/*
 * XREFs of ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BAC24
 * Callers:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000B6C0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA218 (-Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyGetRequestUpdateFlags(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *TagRequest)
{
  const void *v3; // rbx
  const void *_a1; // rdi
  unsigned __int8 v9; // r8
  int IsTagRequest; // r14d
  unsigned __int8 v11; // r8
  unsigned __int8 irql; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0LL;
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
          (const _GUID *)&FxObject::`vftable'.DebugExtension,
          _a1,
          -1073741808);
        FxVerifierDbgBreakPoint(FxDriverGlobals);
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
      FxNonPagedObject::Unlock(TagRequest, irql, v9);
      if ( IsTagRequest < 0 )
        return (unsigned int)IsTagRequest;
    }
  }
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)TagRequest);
  if ( this->m_Type == WdfIoQueueDispatchSequential && !this->m_DriverIoCount )
  {
    if ( this->m_ObjectSize )
      v3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xDu, 0x17u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v3);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  FxNonPagedObject::Unlock(this, irql, v11);
  return 0LL;
}
