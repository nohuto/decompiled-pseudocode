/*
 * XREFs of ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0019614
 * Callers:
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0019670 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0075950 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0075AE0 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 * Callees:
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0005A04 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0028A18 (-RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C0035AD0 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ?ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z @ 0x1C00567CC (-ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::DrainPendedRequestsLocked(
        FxIoTarget *this,
        _LIST_ENTRY *RequestListHead,
        unsigned __int8 RequestWillBeResent)
{
  FxRequestBase *v6; // rbx
  _LIST_ENTRY *v7; // rdi
  _IRP *m_Irp; // rax
  WDFWORKITEM__ *_a1; // rax
  const void *_a2; // r8
  _FX_DRIVER_GLOBALS *v11; // r10
  _LIST_ENTRY *Blink; // rax
  _IO_CSQ_IRP_CONTEXT *pContext; // [rsp+60h] [rbp+8h] BYREF

  while ( 1 )
  {
    pContext = 0LL;
    if ( !FxIrpQueue::RemoveNextIrpFromQueue(&this->m_PendedQueue, 0LL, &pContext) )
      break;
    v6 = (FxRequestBase *)&pContext[-5];
    v7 = (_LIST_ENTRY *)pContext;
    pContext->Irp = (_IRP *)pContext;
    v7->Flink = v7;
    m_Irp = v6->m_Irp.m_Irp;
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    v6->m_TargetFlags &= ~2u;
    if ( !RequestWillBeResent
      || FxRequestBase::CancelTimer(v6) && _InterlockedExchangeAdd(&v6->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
    {
      FxIoTarget::ClearCompletedRequestVerifierFlags(this, v6);
      Blink = RequestListHead->Blink;
      v7->Flink = RequestListHead;
      v7->Blink = Blink;
      if ( Blink->Flink != RequestListHead )
        __fastfail(3u);
      Blink->Flink = v7;
      RequestListHead->Blink = v7;
    }
    else
    {
      v6->m_Irp.m_Irp->IoStatus.Status = -1073741536;
      v6->m_TargetFlags |= 1u;
      if ( this->m_Globals->FxVerboseOn )
      {
        FxRequestBase::GetTraceObjectHandle(v6);
        _a1 = FxWmiProvider::GetHandle((FxWorkItem *)this);
        WPP_IFR_SF_qq(v11, 5u, 0xEu, 0x10u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
      }
    }
  }
}
