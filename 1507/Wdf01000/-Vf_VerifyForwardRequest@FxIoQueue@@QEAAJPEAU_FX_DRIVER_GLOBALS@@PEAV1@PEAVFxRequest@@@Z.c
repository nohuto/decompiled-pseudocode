/*
 * XREFs of ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00D1C14
 * Callers:
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0095AF4 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1058 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D12B0 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoQueue *pDestQueue,
        FxRequest *pRequest)
{
  unsigned __int8 v8; // r8
  int IsDriverOwned; // ebx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  const void *_a1; // rdi
  FxDeviceBase *m_DeviceBase; // rax
  const void *v14; // rax
  int irql; // [rsp+68h] [rbp+10h] BYREF

  FxNonPagedObject::Lock(pRequest, (unsigned __int8 *)&irql, (unsigned __int8)pDestQueue);
  if ( FxDriverGlobals->FxVerifierOn )
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  else
    IsDriverOwned = 0;
  if ( IsDriverOwned >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(pRequest, FxDriverGlobals);
    else
      IsDriverOwned = 0;
  }
  if ( SLOBYTE(pRequest->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, v8);
  }
  else
  {
    KeReleaseSpinLock(&pRequest->m_NPLock.m_Lock, irql);
  }
  if ( IsDriverOwned < 0 )
    return (unsigned int)IsDriverOwned;
  if ( pDestQueue != this )
  {
    m_DeviceBase = pDestQueue->m_DeviceBase;
    if ( this->m_DeviceBase != m_DeviceBase )
    {
      if ( m_DeviceBase->m_ObjectSize )
        v14 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v14 = 0LL;
      WPP_IFR_SF_q(
        FxDriverGlobals,
        2u,
        0xDu,
        0x24u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v14);
      goto LABEL_18;
    }
    return (unsigned int)IsDriverOwned;
  }
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qd(
    FxDriverGlobals,
    2u,
    0xDu,
    0x23u,
    (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
    _a1,
    -1073741808);
LABEL_18:
  irql = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 3221225488LL;
}
