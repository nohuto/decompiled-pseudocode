/*
 * XREFs of ?Vf_VerifyForwardRequestToParent@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00D1D9C
 * Callers:
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C0095B4C (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1058 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D12B0 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequestToParent(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoQueue *DestQueue,
        FxRequest *Request)
{
  int IsDriverOwned; // edi
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a1; // rcx
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // r8
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  const void *v14; // rsi
  FxDeviceBase *v15; // rdx
  FxDeviceBase *v16; // rcx
  unsigned __int64 _a2; // rcx
  const void *v18; // rbx
  __int64 v19; // rax
  const void *v20; // rdx
  int irql; // [rsp+70h] [rbp+30h] BYREF

  if ( !*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags )
  {
    IsDriverOwned = -1073741808;
    m_DeviceBase = DestQueue->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v11 = 30;
    goto LABEL_6;
  }
  FxNonPagedObject::Lock(Request, (unsigned __int8 *)&irql, (unsigned __int8)DestQueue);
  if ( FxDriverGlobals->FxVerifierOn )
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(Request, FxDriverGlobals);
  else
    IsDriverOwned = 0;
  if ( IsDriverOwned >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(Request, FxDriverGlobals);
    else
      IsDriverOwned = 0;
  }
  if ( SLOBYTE(Request->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)Request[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, v12);
  }
  else
  {
    KeReleaseSpinLock(&Request->m_NPLock.m_Lock, irql);
  }
  if ( IsDriverOwned >= 0 )
  {
    if ( DestQueue == this )
    {
      IsDriverOwned = -1073741808;
      if ( this->m_ObjectSize )
        v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v14 = 0LL;
      WPP_IFR_SF_qd(
        FxDriverGlobals,
        2u,
        0xDu,
        0x1Fu,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v14,
        -1073741808);
      goto LABEL_43;
    }
    v15 = this->m_DeviceBase;
    v16 = DestQueue->m_DeviceBase;
    if ( *(FxDeviceBase **)&v15[1].m_ObjectFlags == v16 )
    {
      if ( Request->m_Reserved )
      {
        IsDriverOwned = -1073741808;
        if ( v16->m_ObjectSize )
          _a2 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          _a2 = 0LL;
        if ( Request->m_ObjectSize )
          v18 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v18 = 0LL;
        WPP_IFR_SF_qid(
          FxDriverGlobals,
          2u,
          0xDu,
          0x21u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          v18,
          _a2,
          -1073741808);
      }
      else
      {
        v19 = *(_QWORD *)&v15[3].m_SpinLock.m_DbgFlagIsInitialized;
        if ( !v19 || *(_BYTE *)(v19 + 1451) )
          return (unsigned int)IsDriverOwned;
        IsDriverOwned = -1073741808;
        if ( v15->m_ObjectSize )
          v20 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v20 = 0LL;
        WPP_IFR_SF_qd(
          FxDriverGlobals,
          2u,
          0xDu,
          0x22u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          v20,
          -1073741808);
      }
      goto LABEL_43;
    }
    IsDriverOwned = -1073741808;
    if ( v16->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v11 = 32;
LABEL_6:
    WPP_IFR_SF_qd(
      FxDriverGlobals,
      2u,
      0xDu,
      v11,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1,
      -1073741808);
LABEL_43:
    irql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  return (unsigned int)IsDriverOwned;
}
