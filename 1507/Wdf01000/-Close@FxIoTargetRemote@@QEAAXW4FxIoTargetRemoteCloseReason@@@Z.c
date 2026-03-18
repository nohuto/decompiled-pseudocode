/*
 * XREFs of ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0085BB4
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00210CC (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     imp_WdfIoTargetClose @ 0x1C0081DF0 (imp_WdfIoTargetClose.c)
 *     imp_WdfIoTargetCloseForQueryRemove @ 0x1C0081F40 (imp_WdfIoTargetCloseForQueryRemove.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0083530 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 *     ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x1C00860D0 (-Remove@FxIoTargetRemote@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C0021410 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00839C8 (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0084B9C (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qqqqi @ 0x1C0086244 (WPP_IFR_SF_qqqqi.c)
 */

void __fastcall FxIoTargetRemote::Close(FxIoTargetRemote *this, int Reason, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  FxVerifierLock *v10; // rcx
  const void *v11; // rcx
  int v12; // r14d
  const void *v13; // rax
  const void *v14; // rax
  const void *v15; // rax
  const void *v16; // rax
  void *m_TargetNotifyHandle; // r15
  const void *v18; // rcx
  unsigned __int8 v19; // r8
  FxVerifierLock *v20; // rcx
  const void *v21; // rax
  int v22; // esi
  const void *v23; // rax
  const void *v24; // rax
  const void *v25; // rbx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  _LIST_ENTRY pended; // [rsp+50h] [rbp-30h] BYREF
  FxIoTargetClearedPointers pointers; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 wait; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+C8h] [rbp+48h] BYREF
  _SINGLE_LIST_ENTRY sent; // [rsp+D0h] [rbp+50h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x16u, WPP_FxIoTargetRemote_cpp_Traceguids, _a1, Reason);
  }
  pended.Blink = &pended;
  sent.Next = 0LL;
  pended.Flink = &pended;
  memset(&pointers, 0, sizeof(pointers));
  wait = 0;
  while ( 1 )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( this->m_OpenState != 2 )
      break;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v10 = *(FxVerifierLock **)&this[-1].m_OpenParams.EaBufferLength) != 0LL )
      FxVerifierLock::Unlock(v10, irql, v8);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v11 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x17u, WPP_FxIoTargetRemote_cpp_Traceguids, v11, &this->m_OpenedEvent);
    }
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_OpenedEvent);
  }
  v12 = 3;
  if ( Reason == 3 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v13 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x18u, WPP_FxIoTargetRemote_cpp_Traceguids, v13);
    }
    v12 = 5;
  }
  else if ( this->m_OpenState == 3 )
  {
    if ( Reason == 1 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v14 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxIoTargetRemote_cpp_Traceguids, v14);
      }
    }
    else
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v15 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxIoTargetRemote_cpp_Traceguids, v15);
      }
      v12 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v7, 9u) + 3;
    }
    this->m_OpenState = 1;
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v16 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxIoTargetRemote_cpp_Traceguids, v16);
    }
    v12 = 4;
  }
  m_TargetNotifyHandle = 0LL;
  if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v18 = 0LL;
    WPP_IFR_SF_qqqqi(
      m_Globals,
      v7,
      v8,
      v9,
      traceGuid,
      v18,
      this->m_TargetFileObject,
      this->m_TargetDevice,
      this->m_TargetHandle,
      (__int64)this->m_TargetNotifyHandle);
  }
  if ( Reason != 1 )
  {
    m_TargetNotifyHandle = this->m_TargetNotifyHandle;
    this->m_TargetNotifyHandle = 0LL;
  }
  this->m_ClearedPointers = &pointers;
  LOBYTE(traceGuid) = 0;
  this->GotoRemoveState(this, (_WDF_IO_TARGET_STATE)v12, &pended, &sent, (unsigned __int8)traceGuid, &wait);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v20 = *(FxVerifierLock **)&this[-1].m_OpenParams.EaBufferLength) != 0LL )
    FxVerifierLock::Unlock(v20, irql, v19);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  if ( m_TargetNotifyHandle )
  {
    if ( FxLibraryGlobals.IoUnregisterPlugPlayNotificationEx )
      FxLibraryGlobals.IoUnregisterPlugPlayNotificationEx(m_TargetNotifyHandle);
    else
      IoUnregisterPlugPlayNotification(m_TargetNotifyHandle);
  }
  FxIoTarget::CompletePendedRequestList(this, &pended);
  FxIoTarget::_CancelSentRequests(&sent);
  if ( wait )
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v21 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Du, WPP_FxIoTargetRemote_cpp_Traceguids, v21);
    }
    this->WaitForSentIoToComplete(this);
  }
  v22 = Reason - 1;
  if ( v22 )
  {
    if ( v22 == 2 )
      FxIoTargetRemoveOpenParams::Clear(&this->m_OpenParams);
    else
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
  }
  if ( v12 == 5 )
    this->WaitForDisposeEvent(this);
  if ( pointers.TargetPdo )
  {
    if ( this->m_ObjectSize )
      v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v23 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Eu, WPP_FxIoTargetRemote_cpp_Traceguids, v23, pointers.TargetPdo);
    ObfDereferenceObject(pointers.TargetPdo);
  }
  if ( pointers.TargetFileObject )
  {
    if ( this->m_ObjectSize )
      v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v24 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Fu, WPP_FxIoTargetRemote_cpp_Traceguids, v24, pointers.TargetFileObject);
    ObfDereferenceObject(pointers.TargetFileObject);
  }
  if ( pointers.TargetHandle )
  {
    if ( this->m_ObjectSize )
      v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v25 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x20u, WPP_FxIoTargetRemote_cpp_Traceguids, v25, pointers.TargetHandle);
    ZwClose(pointers.TargetHandle);
  }
}
