/*
 * XREFs of ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C002EA58
 * Callers:
 *     ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x1C002E5B0 (-Remove@FxIoTargetRemote@@UEAAXXZ.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002ECB4 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     imp_WdfIoTargetClose @ 0x1C0086A00 (imp_WdfIoTargetClose.c)
 *     imp_WdfIoTargetCloseForQueryRemove @ 0x1C0086A90 (imp_WdfIoTargetCloseForQueryRemove.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C00878C0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002AA48 (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C002E9E0 (-UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C002F330 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0031968 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qqqqi @ 0x1C00890D4 (WPP_IFR_SF_qqqqi.c)
 */

void __fastcall FxIoTargetRemote::Close(FxIoTargetRemote *this, int Reason, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned __int16 v8; // r9
  int v9; // r14d
  void *m_TargetNotifyHandle; // r15
  unsigned __int8 v11; // r8
  FxIoTargetRemote *v12; // rcx
  int v13; // esi
  const void *_a1; // rcx
  const void *v15; // rcx
  unsigned __int16 v16; // ax
  const void *v17; // rbx
  unsigned __int16 m_ObjectSize; // ax
  const void *v19; // rcx
  const void *v20; // rcx
  const void *v21; // rcx
  const void *v22; // rcx
  const void *v23; // rcx
  const void *v24; // rcx
  const void *v25; // rcx
  const void *v26; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  _LIST_ENTRY pended; // [rsp+50h] [rbp-30h] BYREF
  FxIoTargetClearedPointers pointers; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 wait; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+C8h] [rbp+48h] BYREF
  _SINGLE_LIST_ENTRY sent; // [rsp+D0h] [rbp+50h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v19 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x16u, WPP_FxIoTargetRemote_cpp_Traceguids, v19, Reason);
  }
  sent.Next = 0LL;
  memset(&pointers, 0, sizeof(pointers));
  pended.Blink = &pended;
  pended.Flink = &pended;
  wait = 0;
  while ( 1 )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( this->m_OpenState != 2 )
      break;
    FxNonPagedObject::Unlock(this, irql, v7);
    if ( m_Globals->FxVerboseOn )
    {
      v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v20 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x17u, WPP_FxIoTargetRemote_cpp_Traceguids, v20, &this->m_OpenedEvent);
    }
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&this->m_OpenedEvent, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  v9 = 3;
  if ( Reason == 3 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v21 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x18u, WPP_FxIoTargetRemote_cpp_Traceguids, v21);
    }
    v9 = 5;
  }
  else if ( this->m_OpenState == 3 )
  {
    if ( Reason == 1 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v22 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxIoTargetRemote_cpp_Traceguids, v22);
      }
    }
    else
    {
      if ( m_Globals->FxVerboseOn )
      {
        v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v23 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxIoTargetRemote_cpp_Traceguids, v23);
      }
      v9 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v6, 9u) + 3;
    }
    this->m_OpenState = 1;
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
    {
      v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v24 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxIoTargetRemote_cpp_Traceguids, v24);
    }
    v9 = 4;
  }
  m_TargetNotifyHandle = 0LL;
  if ( m_Globals->FxVerboseOn )
  {
    v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v25 = 0LL;
    WPP_IFR_SF_qqqqi(
      m_Globals,
      v6,
      v7,
      v8,
      traceGuid,
      v25,
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
  this->GotoRemoveState(this, (_WDF_IO_TARGET_STATE)v9, &pended, &sent, (unsigned __int8)traceGuid, &wait);
  FxNonPagedObject::Unlock(this, irql, v11);
  FxIoTargetRemote::UnregisterForPnpNotification(v12, m_TargetNotifyHandle);
  FxIoTarget::CompletePendedRequestList(this, &pended);
  FxIoTarget::_CancelSentRequests(&sent);
  if ( wait )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v26 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Du, WPP_FxIoTargetRemote_cpp_Traceguids, v26);
    }
    this->WaitForSentIoToComplete(this);
  }
  v13 = Reason - 1;
  if ( v13 )
  {
    if ( v13 == 2 )
      FxIoTargetRemoveOpenParams::Clear(&this->m_OpenParams);
    else
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
  }
  if ( v9 == 5 )
    this->WaitForDisposeEvent(this);
  if ( pointers.TargetPdo )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Eu, WPP_FxIoTargetRemote_cpp_Traceguids, _a1, pointers.TargetPdo);
    ObfDereferenceObject(pointers.TargetPdo);
  }
  if ( pointers.TargetFileObject )
  {
    v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v15 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Fu, WPP_FxIoTargetRemote_cpp_Traceguids, v15, pointers.TargetFileObject);
    ObfDereferenceObject(pointers.TargetFileObject);
  }
  if ( pointers.TargetHandle )
  {
    v16 = this->m_ObjectSize;
    v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v16 )
      v17 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x20u, WPP_FxIoTargetRemote_cpp_Traceguids, v17, pointers.TargetHandle);
    ZwClose(pointers.TargetHandle);
  }
}
