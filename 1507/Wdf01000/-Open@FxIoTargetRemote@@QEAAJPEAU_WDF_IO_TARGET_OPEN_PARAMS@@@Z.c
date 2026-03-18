/*
 * XREFs of ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00210CC
 * Callers:
 *     imp_WdfIoTargetOpen @ 0x1C00214A0 (imp_WdfIoTargetOpen.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0083530 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00105B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00147DC (-SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x1C00148A0 (-GetTargetIoType@FxIoTarget@@IEAAEXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C0020D24 (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C0020F0C (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpe.c)
 *     ?RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ @ 0x1C0021084 (-RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C0021410 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     ?Set@FxIoTargetRemoveOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK@Z @ 0x1C002144C (-Set@FxIoTargetRemoveOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0085BB4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::Open(FxIoTargetRemote *this, _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  unsigned __int8 v4; // r8
  _WDF_IO_TARGET_OPEN_TYPE Type; // r15d
  const void *v6; // rdi
  unsigned __int8 v7; // r13
  unsigned __int8 m_OpenState; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 v10; // r8
  int TargetDeviceRelations; // esi
  unsigned __int8 v12; // r8
  void *m_TargetNotifyHandle; // rcx
  __int32 v14; // r15d
  _FILE_OBJECT *TargetFileObject; // rax
  bool v16; // r15
  FxIoTargetRemote_vtbl *v17; // rax
  unsigned __int8 v18; // r8
  _FX_DRIVER_GLOBALS **p_m_Globals; // r13
  __int32 v21; // r15d
  FxIoTargetRemoveOpenParams *v22; // r11
  const void *v23; // rax
  unsigned int EaBufferLength; // eax
  _QWORD *v25; // rax
  const void *v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int16 v28; // r9
  unsigned __int64 v29; // rcx
  const void *v30; // rax
  FxVerifierLock *v31; // rcx
  bool v32; // zf
  _FX_DRIVER_GLOBALS *v33; // rcx
  const void *v34; // rax
  _FX_DRIVER_GLOBALS *v35; // rcx
  const void *v36; // rax
  FxVerifierLock *v37; // rcx
  void *_a1; // [rsp+28h] [rbp-81h]
  int _a2; // [rsp+30h] [rbp-79h]
  unsigned int EaLength; // [rsp+40h] [rbp-69h]
  _QWORD *Ea; // [rsp+48h] [rbp-61h]
  FxIoTargetRemoveOpenParams *pParams; // [rsp+50h] [rbp-59h]
  _UNICODE_STRING name; // [rsp+58h] [rbp-51h] BYREF
  _LIST_ENTRY pended; // [rsp+68h] [rbp-41h] BYREF
  FxIoTargetRemoveOpenParams params; // [rsp+80h] [rbp-29h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+108h] [rbp+5Fh]
  bool v47; // [rsp+118h] [rbp+6Fh]
  unsigned __int8 irql; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int8 close; // [rsp+128h] [rbp+7Fh] BYREF

  memset(&params, 0, sizeof(params));
  Type = OpenParams->Type;
  v6 = 0LL;
  irql = 0;
  *(_QWORD *)&name.Length = 0LL;
  name.Buffer = 0LL;
  v7 = 0;
  close = 0;
  v47 = Type == WdfIoTargetOpenReopen;
  Ea = 0LL;
  EaLength = 0;
  if ( Type != WdfIoTargetOpenReopen )
  {
    pParams = &params;
    if ( Type == WdfIoTargetOpenByName )
    {
      p_m_Globals = &this->m_Globals;
      TargetDeviceRelations = FxDuplicateUnicodeString(this->m_Globals, &OpenParams->TargetDeviceName, &name);
      if ( TargetDeviceRelations < 0 )
      {
        if ( this->m_ObjectSize )
          v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v23 = 0LL;
        WPP_IFR_SF_q(*p_m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetRemote_cpp_Traceguids, v23);
        v7 = irql;
$Done_15:
        if ( TargetDeviceRelations < 0 )
        {
          if ( v7 )
            FxIoTargetRemote::Close(this, FxIoTargetRemoteCloseReasonPlainClose);
        }
        else
        {
          FxIoTarget::SubmitPendedRequests(this, &pended);
        }
        goto LABEL_28;
      }
      if ( OpenParams->EaBuffer )
      {
        EaBufferLength = OpenParams->EaBufferLength;
        if ( EaBufferLength )
        {
          v25 = FxPoolAllocator(
                  *p_m_Globals,
                  (_LIST_ENTRY *)&(*p_m_Globals)->FxPoolFrameworks,
                  1u,
                  EaBufferLength,
                  (*p_m_Globals)->Tag,
                  retaddr);
          Ea = v25;
          if ( !v25 )
          {
            if ( this->m_ObjectSize )
              v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v26 = 0LL;
            WPP_IFR_SF_q(*p_m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetRemote_cpp_Traceguids, v26);
            TargetDeviceRelations = -1073741670;
            goto LABEL_28;
          }
          EaLength = OpenParams->EaBufferLength;
          memmove(v25, OpenParams->EaBuffer, EaLength);
        }
      }
      v7 = irql;
    }
LABEL_3:
    FxNonPagedObject::Lock(this, &irql, v4);
    if ( this->m_State == WdfIoTargetDeleted )
    {
      if ( this->m_ObjectSize )
        v27 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v27 = 0LL;
      _a2 = 5;
      v28 = 17;
      _a1 = (void *)v27;
    }
    else
    {
      m_OpenState = this->m_OpenState;
      if ( m_OpenState == 1 )
      {
        m_Globals = this->m_Globals;
        if ( m_Globals->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v30 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x13u, WPP_FxIoTargetRemote_cpp_Traceguids, v30);
        }
        KeClearEvent(&this->m_OpenedEvent.m_Event.m_Event);
        this->m_OpenState = 2;
        TargetDeviceRelations = 0;
LABEL_7:
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v31 = *(FxVerifierLock **)&this[-1].m_OpenParams.EaBufferLength) != 0LL )
        {
          FxVerifierLock::Unlock(v31, irql, v10);
        }
        else
        {
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
        }
        if ( TargetDeviceRelations >= 0 )
        {
          m_TargetNotifyHandle = this->m_TargetNotifyHandle;
          if ( m_TargetNotifyHandle )
          {
            if ( FxLibraryGlobals.IoUnregisterPlugPlayNotificationEx )
              FxLibraryGlobals.IoUnregisterPlugPlayNotificationEx(m_TargetNotifyHandle);
            else
              IoUnregisterPlugPlayNotification(m_TargetNotifyHandle);
          }
          this->m_TargetNotifyHandle = 0LL;
          if ( !v47 )
            FxIoTargetRemoveOpenParams::Clear(&this->m_OpenParams);
          v14 = Type - 1;
          if ( v14 )
          {
            v21 = v14 - 1;
            if ( !v21 )
            {
              v16 = v47;
              v22 = pParams;
              if ( !v47 )
                FxIoTargetRemoveOpenParams::Set(pParams, OpenParams, &name, Ea, EaLength);
              TargetDeviceRelations = FxIoTargetRemote::OpenTargetHandle(this, OpenParams, v22);
              if ( TargetDeviceRelations < 0 )
              {
                v7 = 1;
                close = 1;
              }
              else if ( !v47 )
              {
                FxIoTargetRemoveOpenParams::Set(&this->m_OpenParams, OpenParams, &name, Ea, EaLength);
                Ea = 0LL;
                name.Buffer = 0LL;
              }
              goto LABEL_18;
            }
            v32 = v21 == 2;
            v16 = v47;
            if ( !v32 )
            {
LABEL_18:
              pended.Blink = &pended;
              pended.Flink = &pended;
              if ( TargetDeviceRelations >= 0 )
              {
                TargetDeviceRelations = FxIoTargetRemote::GetTargetDeviceRelations(this, &close);
                if ( TargetDeviceRelations >= 0 && this->m_TargetFileObject )
                {
                  if ( !v16 )
                  {
                    this->m_EvtQueryRemove.m_Method = OpenParams->EvtIoTargetQueryRemove;
                    this->m_EvtRemoveCanceled.m_Method = OpenParams->EvtIoTargetRemoveCanceled;
                    this->m_EvtRemoveComplete.m_Method = OpenParams->EvtIoTargetRemoveComplete;
                  }
                  TargetDeviceRelations = FxIoTargetRemote::RegisterForPnpNotification(this);
                  if ( TargetDeviceRelations < 0 )
                  {
                    v33 = this->m_Globals;
                    if ( v33->FxVerboseOn )
                    {
                      if ( this->m_ObjectSize )
                        v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v34 = 0LL;
                      WPP_IFR_SF_qd(
                        v33,
                        5u,
                        0xEu,
                        0x14u,
                        WPP_FxIoTargetRemote_cpp_Traceguids,
                        v34,
                        TargetDeviceRelations);
                    }
                    this->m_EvtQueryRemove.m_Method = 0LL;
                    TargetDeviceRelations = 0;
                    this->m_EvtRemoveCanceled.m_Method = 0LL;
                    this->m_EvtRemoveComplete.m_Method = 0LL;
                  }
                }
                v7 = close;
              }
              FxNonPagedObject::Lock(this, &irql, v12);
              if ( TargetDeviceRelations < 0 )
              {
                this->m_OpenState = 1;
              }
              else
              {
                this->m_TargetStackSize = this->m_TargetDevice->StackSize;
                this->m_TargetIoType = FxIoTarget::GetTargetIoType(this);
                v17 = this->__vftable;
                this->m_OpenState = 3;
                TargetDeviceRelations = v17->GotoStartState(this, &pended, 0);
                if ( TargetDeviceRelations < 0 )
                {
                  v35 = this->m_Globals;
                  if ( v35->FxVerboseOn )
                  {
                    if ( this->m_ObjectSize )
                      v36 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v36 = 0LL;
                    WPP_IFR_SF_qd(v35, 5u, 0xEu, 0x15u, WPP_FxIoTargetRemote_cpp_Traceguids, v36, TargetDeviceRelations);
                  }
                  v7 = 1;
                }
              }
              KeSetEvent(&this->m_OpenedEvent.m_Event.m_Event, 0, 0);
              if ( SLOBYTE(this->m_ObjectFlags) < 0
                && (v37 = *(FxVerifierLock **)&this[-1].m_OpenParams.EaBufferLength) != 0LL )
              {
                FxVerifierLock::Unlock(v37, irql, v18);
              }
              else
              {
                KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
              }
              goto $Done_15;
            }
          }
          else
          {
            this->m_TargetDevice = OpenParams->TargetDeviceObject;
            TargetFileObject = OpenParams->TargetFileObject;
            this->m_TargetFileObject = TargetFileObject;
            this->m_TargetHandle = 0LL;
            if ( TargetFileObject )
              ObfReferenceObject(TargetFileObject);
            v16 = v47;
          }
          TargetDeviceRelations = 0;
          goto LABEL_18;
        }
LABEL_28:
        if ( name.Buffer )
          FxPoolFree((_QWORD *)name.Buffer);
        if ( Ea )
          FxPoolFree(Ea);
        return (unsigned int)TargetDeviceRelations;
      }
      if ( this->m_ObjectSize )
        v29 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v29 = 0LL;
      v28 = 18;
      _a2 = m_OpenState;
      _a1 = (void *)v29;
    }
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, v28, WPP_FxIoTargetRemote_cpp_Traceguids, _a1, _a2);
    TargetDeviceRelations = -1073741436;
    goto LABEL_7;
  }
  if ( this->m_OpenParams.OpenType == WdfIoTargetOpenByName )
  {
    Type = WdfIoTargetOpenByName;
    pParams = &this->m_OpenParams;
    goto LABEL_3;
  }
  if ( this->m_ObjectSize )
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  TargetDeviceRelations = -1073741808;
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xEu, WPP_FxIoTargetRemote_cpp_Traceguids, v6, -1073741808);
  return (unsigned int)TargetDeviceRelations;
}
