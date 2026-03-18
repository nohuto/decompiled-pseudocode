/*
 * XREFs of ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0077554
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002592C (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     imp_WdfIoTargetClose @ 0x1C0074560 (imp_WdfIoTargetClose.c)
 *     imp_WdfIoTargetCloseForQueryRemove @ 0x1C00745F0 (imp_WdfIoTargetCloseForQueryRemove.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C00753C0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 *     ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x1C0077A40 (-Remove@FxIoTargetRemote@@UEAAXXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C0019D48 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C0027584 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C0035AD0 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C007580C (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C007676C (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qqqqi @ 0x1C0077BB4 (WPP_IFR_SF_qqqqi.c)
 */

void __fastcall FxIoTargetRemote::Close(FxIoTargetRemote *this, int Reason, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  void *m_TargetNotifyHandle; // r15
  unsigned int v8; // edx
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  WDFWORKITEM__ *Handle; // rax
  const void *_a2; // rdx
  int v13; // r14d
  const void *v14; // rax
  const void *v15; // rax
  const void *v16; // rax
  const void *v17; // rax
  const void *v18; // rcx
  unsigned __int8 v19; // r8
  const void *v20; // rax
  int v21; // esi
  const void *v22; // rax
  const void *v23; // rax
  const void *v24; // rbx
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
  m_TargetNotifyHandle = 0LL;
  wait = 0;
  while ( 1 )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( this->m_OpenState != 2 )
      break;
    FxNonPagedObject::Unlock(this, irql, v9);
    if ( m_Globals->FxVerboseOn )
    {
      Handle = FxWmiProvider::GetHandle((FxWorkItem *)this);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x17u, WPP_FxIoTargetRemote_cpp_Traceguids, Handle, _a2);
    }
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_OpenedEvent);
  }
  v13 = 3;
  if ( Reason == 3 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v14 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x18u, WPP_FxIoTargetRemote_cpp_Traceguids, v14);
    }
    v13 = 5;
  }
  else if ( this->m_OpenState == 3 )
  {
    if ( Reason == 1 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v15 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxIoTargetRemote_cpp_Traceguids, v15);
      }
    }
    else
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v16 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxIoTargetRemote_cpp_Traceguids, v16);
      }
      v13 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v8, 9u) + 3;
    }
    this->m_OpenState = 1;
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v17 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxIoTargetRemote_cpp_Traceguids, v17);
    }
    v13 = 4;
  }
  if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v18 = 0LL;
    WPP_IFR_SF_qqqqi(
      m_Globals,
      v8,
      v9,
      v10,
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
  this->GotoRemoveState(this, (_WDF_IO_TARGET_STATE)v13, &pended, &sent, (unsigned __int8)traceGuid, &wait);
  FxNonPagedObject::Unlock(this, irql, v19);
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
        v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v20 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Du, WPP_FxIoTargetRemote_cpp_Traceguids, v20);
    }
    this->WaitForSentIoToComplete(this);
  }
  v21 = Reason - 1;
  if ( v21 )
  {
    if ( v21 == 2 )
      FxIoTargetRemoveOpenParams::Clear(&this->m_OpenParams);
    else
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
  }
  if ( v13 == 5 )
    this->WaitForDisposeEvent(this);
  if ( pointers.TargetPdo )
  {
    if ( this->m_ObjectSize )
      v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v22 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Eu, WPP_FxIoTargetRemote_cpp_Traceguids, v22, pointers.TargetPdo);
    ObfDereferenceObject(pointers.TargetPdo);
  }
  if ( pointers.TargetFileObject )
  {
    if ( this->m_ObjectSize )
      v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v23 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Fu, WPP_FxIoTargetRemote_cpp_Traceguids, v23, pointers.TargetFileObject);
    ObfDereferenceObject(pointers.TargetFileObject);
  }
  if ( pointers.TargetHandle )
  {
    if ( this->m_ObjectSize )
      v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v24 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x20u, WPP_FxIoTargetRemote_cpp_Traceguids, v24, pointers.TargetHandle);
    ZwClose(pointers.TargetHandle);
  }
}
