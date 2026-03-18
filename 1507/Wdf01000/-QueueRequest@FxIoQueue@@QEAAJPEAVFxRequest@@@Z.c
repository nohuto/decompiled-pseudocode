/*
 * XREFs of ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005650
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C0085080 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0097FA0 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0030B08 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0032B08 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueRequest(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  FxRequest *v3; // rdi
  unsigned __int8 v5; // r8
  unsigned __int16 v6; // r9
  unsigned __int8 *p_m_Reserved; // rsi
  const void *v8; // rbp
  _FX_IO_QUEUE_STATE _a4; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *Blink; // rcx
  signed __int32 v13; // edx
  unsigned int RefCount; // edx
  _LIST_ENTRY *v15; // rcx
  _FX_DRIVER_GLOBALS *v16; // r8
  const char *_a5; // r10
  const void *globals; // rdx
  const void *v19; // rax
  _LIST_ENTRY *v20; // rcx
  __int64 v21; // r8
  unsigned __int16 v22; // r9
  FxDeviceBase *m_DeviceBase; // rbx
  _FX_DRIVER_GLOBALS *v24; // rcx
  const void *v25; // rax
  unsigned __int8 v26; // r8
  _FX_DRIVER_GLOBALS *v27; // rdx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 v29; // di
  unsigned __int8 v30; // r8
  _LIST_ENTRY *v31; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-48h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF
  FxRequest *Request; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+18h] BYREF

  Request = pRequest;
  v3 = pRequest;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Lock((FxVerifierLock *)Blink, &irql, a3);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  p_m_Reserved = &v3->m_Reserved;
  v8 = 0LL;
  if ( v3->m_Reserved )
  {
    v13 = _InterlockedExchangeAdd(&v3->m_Refcnt, 1u);
    v3 = Request;
    RefCount = v13 + 1;
    if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
    {
      v15 = Request[-1].m_ForwardProgressList.Blink;
      if ( v15 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v15,
          (void *)0x50647746,
          2286,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          RefCount);
    }
  }
  _a4 = this->m_QueueState;
  if ( (_a4 & 1) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      if ( v3->m_ObjectSize )
        v8 = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xDu,
        0x28u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v8,
        v25);
    }
    if ( v3->m_Globals->FxVerifierIO )
    {
      FxNonPagedObject::Lock(v3, &PreviousIrql, v5);
      v27 = v3->m_Globals;
      if ( v27->FxVerifierOn )
        FxRequest::Vf_VerifyRequestIsNotCompleted(v3, v27);
      if ( SLOBYTE(v3->m_ObjectFlags) < 0
        && (m_ForwardProgressQueue = (FxVerifierLock *)v3[-1].m_ForwardProgressQueue) != 0LL )
      {
        FxVerifierLock::Unlock(m_ForwardProgressQueue, PreviousIrql, v26);
      }
      else
      {
        KeReleaseSpinLock(&v3->m_NPLock.m_Lock, PreviousIrql);
      }
    }
    v3->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( *p_m_Reserved )
    {
      if ( this->m_Dispatching )
      {
        v29 = irql;
        FxIoQueue::InsertNewRequestLocked(this, &Request, irql);
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v31 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
          FxVerifierLock::Unlock((FxVerifierLock *)v31, v29, v30);
        else
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, v29);
        return 259LL;
      }
      v3 = Request;
    }
    FxIoQueue::DispatchEvents(this, irql, v3, v6);
    return 259LL;
  }
  v16 = this->m_Globals;
  if ( v16->FxVerboseOn )
  {
    _a5 = "power stopping (Drain) in progress,";
    if ( (_a4 & 0x10000) == 0 )
      _a5 = &a5;
    if ( v3->m_ObjectSize )
      globals = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      globals = 0LL;
    if ( this->m_ObjectSize )
      v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v19 = 0LL;
    WPP_IFR_SF_qLsqd(v16, 5u, (unsigned int)v16, 0x27u, RefType, v19, _a4, _a5, globals, -1073741436);
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v20 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v20, irql, (unsigned __int8)v16);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  v3->m_Irp.m_Irp->IoStatus.Information = 0LL;
  m_DeviceBase = v3->m_DeviceBase;
  v24 = v3->m_Globals;
  if ( v24->FxVerboseOn )
  {
    if ( v3->m_ObjectSize )
      v8 = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qqxd(
      v24,
      v3->m_Irp.m_Irp->IoStatus.Information,
      v21,
      0xBu,
      RefType,
      v8,
      v3->m_Irp.m_Irp,
      v3->m_Irp.m_Irp->IoStatus.Information,
      -1073741436);
  }
  if ( m_DeviceBase )
    v3->m_PriorityBoost = HIBYTE(m_DeviceBase[1].m_Globals);
  else
    v3->m_PriorityBoost = 0;
  FxRequest::CompleteInternal(v3, (_FX_DRIVER_GLOBALS *)0xC0000184LL, v21, v22);
  v3->Release(v3, (void *)1886220099, 2313, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  return 3221225860LL;
}
