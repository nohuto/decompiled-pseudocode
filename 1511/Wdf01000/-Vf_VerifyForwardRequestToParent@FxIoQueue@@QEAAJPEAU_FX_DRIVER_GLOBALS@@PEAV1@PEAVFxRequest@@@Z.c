/*
 * XREFs of ?Vf_VerifyForwardRequestToParent@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00BA990
 * Callers:
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C0082318 (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00B9F7C (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA134 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequestToParent(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoQueue *DestQueue,
        FxRequest *Request)
{
  int IsDriverOwned; // ebx
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a1; // rcx
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // r8
  const void *v13; // rsi
  FxDeviceBase *v14; // rdx
  FxDeviceBase *v15; // rcx
  unsigned __int64 _a2; // rcx
  const void *v17; // rdi
  __int64 v18; // rax
  const void *v19; // rdx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  if ( !*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags )
  {
    IsDriverOwned = -1073741808;
    m_DeviceBase = DestQueue->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v11 = 30;
LABEL_6:
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, v11, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1, -1073741808);
LABEL_39:
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return (unsigned int)IsDriverOwned;
  }
  FxNonPagedObject::Lock(Request, &irql, (unsigned __int8)DestQueue);
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
  FxNonPagedObject::Unlock(Request, irql, v12);
  if ( IsDriverOwned >= 0 )
  {
    if ( DestQueue == this )
    {
      IsDriverOwned = -1073741808;
      if ( this->m_ObjectSize )
        v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v13 = 0LL;
      WPP_IFR_SF_qd(
        FxDriverGlobals,
        2u,
        0xDu,
        0x1Fu,
        (const _GUID *)&FxObject::`vftable'.DebugExtension,
        v13,
        -1073741808);
      goto LABEL_39;
    }
    v14 = this->m_DeviceBase;
    v15 = DestQueue->m_DeviceBase;
    if ( *(FxDeviceBase **)&v14[1].m_ObjectFlags != v15 )
    {
      IsDriverOwned = -1073741808;
      if ( v15->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      v11 = 32;
      goto LABEL_6;
    }
    if ( Request->m_Reserved )
    {
      IsDriverOwned = -1073741808;
      if ( v15->m_ObjectSize )
        _a2 = (unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        _a2 = 0LL;
      if ( Request->m_ObjectSize )
        v17 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v17 = 0LL;
      WPP_IFR_SF_qid(
        FxDriverGlobals,
        2u,
        0xDu,
        0x21u,
        (const _GUID *)&FxObject::`vftable'.DebugExtension,
        v17,
        _a2,
        -1073741808);
      goto LABEL_39;
    }
    v18 = *(_QWORD *)&v14[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v18 && !*(_BYTE *)(v18 + 1451) )
    {
      IsDriverOwned = -1073741808;
      if ( v14->m_ObjectSize )
        v19 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v19 = 0LL;
      WPP_IFR_SF_qd(
        FxDriverGlobals,
        2u,
        0xDu,
        0x22u,
        (const _GUID *)&FxObject::`vftable'.DebugExtension,
        v19,
        -1073741808);
      goto LABEL_39;
    }
  }
  return (unsigned int)IsDriverOwned;
}
