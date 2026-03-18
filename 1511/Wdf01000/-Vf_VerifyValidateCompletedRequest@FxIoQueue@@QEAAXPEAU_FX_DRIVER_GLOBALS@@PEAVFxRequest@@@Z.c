/*
 * XREFs of ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BAF6C
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007DA0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0022B88 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?PreRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00561FC (-PreRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0056278 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00B9F7C (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::Vf_VerifyValidateCompletedRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *Request)
{
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // dl
  const void *_a2; // rax
  const void *_a1; // rbx
  unsigned __int8 irql; // [rsp+58h] [rbp+10h] BYREF

  FxNonPagedObject::Lock(Request, &irql, (unsigned __int8)Request);
  if ( FxDriverGlobals->FxVerifierOn )
    FxRequest::Vf_VerifyRequestIsDriverOwned(Request, FxDriverGlobals);
  v7 = irql;
  Request->m_VerifierFlags &= ~1u;
  FxNonPagedObject::Unlock(Request, v7, v6);
  if ( Request->m_OwnerListEntry.Flink != &Request->m_OwnerListEntry )
  {
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    if ( Request->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0xDu, 0x4Cu, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1, _a2);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
}
