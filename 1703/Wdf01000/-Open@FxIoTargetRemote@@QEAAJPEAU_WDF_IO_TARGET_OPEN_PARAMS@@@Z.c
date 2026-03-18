/*
 * XREFs of ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002ECB4
 * Callers:
 *     imp_WdfIoTargetOpen @ 0x1C002F3D0 (imp_WdfIoTargetOpen.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C00878C0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x1C002AD68 (-GetTargetIoType@FxIoTarget@@IEAAEXZ.c)
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C002E790 (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C002E870 (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpe.c)
 *     ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C002E9E0 (-UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z.c)
 *     ?RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ @ 0x1C002EA0C (-RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C002EA58 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C002F330 (-Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ.c)
 *     ?Set@FxIoTargetRemoveOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK@Z @ 0x1C002F374 (-Set@FxIoTargetRemoveOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00306B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0088530 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::Open(FxIoTargetRemote *this, _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  unsigned __int8 v4; // r8
  _WDF_IO_TARGET_OPEN_TYPE Type; // r13d
  int TargetDeviceRelations; // edi
  unsigned __int8 v7; // r12
  int v8; // r14d
  unsigned __int8 m_OpenState; // al
  _FX_DRIVER_GLOBALS *v10; // rcx
  unsigned __int8 v11; // r8
  FxIoTargetRemote *v12; // rcx
  unsigned __int8 v13; // r8
  int v14; // r14d
  _FILE_OBJECT *TargetFileObject; // rax
  FxIoTargetRemote_vtbl *v16; // rax
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // r8
  _LIST_ENTRY *Flink; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v22; // r14d
  FxIoTargetRemoveOpenParams *v23; // r11
  const void *_a1; // rcx
  const void *v25; // rdx
  unsigned int EaBufferLength; // eax
  _QWORD *v27; // rdi
  unsigned __int16 m_ObjectSize; // cx
  const void *v29; // rbx
  void *EaBuffer; // rdx
  unsigned __int16 v31; // r9
  const void *v32; // rcx
  const void *v33; // rdx
  _FX_DRIVER_GLOBALS *v34; // rcx
  const void *v35; // rdx
  _FX_DRIVER_GLOBALS *v36; // rcx
  const void *v37; // r8
  _LIST_ENTRY *v38; // rax
  int _a2; // [rsp+30h] [rbp-69h]
  _QWORD *Ea; // [rsp+40h] [rbp-59h]
  _LIST_ENTRY pended; // [rsp+48h] [rbp-51h] BYREF
  FxIoTargetRemoveOpenParams *pParams; // [rsp+58h] [rbp-41h]
  _UNICODE_STRING name; // [rsp+60h] [rbp-39h] BYREF
  FxIoTargetRemoveOpenParams params; // [rsp+70h] [rbp-29h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  unsigned __int8 close; // [rsp+108h] [rbp+6Fh] BYREF
  _FX_DRIVER_GLOBALS **irql; // [rsp+110h] [rbp+77h] BYREF
  unsigned int EaLength; // [rsp+118h] [rbp+7Fh]

  memset(&params, 0, sizeof(params));
  Type = OpenParams->Type;
  TargetDeviceRelations = 0;
  close = 0;
  *(_QWORD *)&name.Length = 0LL;
  v7 = 0;
  name.Buffer = 0LL;
  Ea = 0LL;
  EaLength = 0;
  if ( Type != WdfIoTargetOpenReopen )
  {
    v8 = Type;
    pParams = &params;
    if ( Type != WdfIoTargetOpenByName )
      goto LABEL_3;
    m_Globals = this->m_Globals;
    irql = &this->m_Globals;
    TargetDeviceRelations = FxDuplicateUnicodeString(m_Globals, &OpenParams->TargetDeviceName, &name);
    if ( TargetDeviceRelations < 0 )
    {
      v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v25 = 0LL;
      WPP_IFR_SF_q(*irql, 2u, 0xEu, 0xFu, WPP_FxIoTargetRemote_cpp_Traceguids, v25);
      goto $Done_23;
    }
    TargetDeviceRelations = 0;
    if ( !OpenParams->EaBuffer || (EaBufferLength = OpenParams->EaBufferLength) == 0 )
    {
LABEL_3:
      FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, v4);
      if ( this->m_State == WdfIoTargetDeleted )
      {
        v31 = 17;
        _a2 = 5;
      }
      else
      {
        m_OpenState = this->m_OpenState;
        if ( m_OpenState == 1 )
        {
          v10 = this->m_Globals;
          if ( v10->FxVerboseOn )
          {
            v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v33 = 0LL;
            WPP_IFR_SF_q(v10, 5u, 0xEu, 0x13u, WPP_FxIoTargetRemote_cpp_Traceguids, v33);
          }
          KeClearEvent(&this->m_OpenedEvent.m_Event.m_Event);
          this->m_OpenState = 2;
          goto LABEL_7;
        }
        v31 = 18;
        _a2 = m_OpenState;
      }
      v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v32 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, v31, WPP_FxIoTargetRemote_cpp_Traceguids, v32, _a2);
      TargetDeviceRelations = -1073741436;
LABEL_7:
      FxNonPagedObject::Unlock(this, (unsigned __int8)irql, v11);
      if ( TargetDeviceRelations < 0 )
      {
LABEL_23:
        if ( name.Buffer )
          FxPoolFree((_QWORD *)name.Buffer);
        if ( Ea )
          FxPoolFree(Ea);
        return (unsigned int)TargetDeviceRelations;
      }
      FxIoTargetRemote::UnregisterForPnpNotification(v12, this->m_TargetNotifyHandle);
      this->m_TargetNotifyHandle = 0LL;
      if ( Type != WdfIoTargetOpenReopen )
        FxIoTargetRemoveOpenParams::Clear(&this->m_OpenParams);
      v14 = v8 - 1;
      if ( v14 )
      {
        v22 = v14 - 1;
        if ( !v22 )
        {
          v23 = pParams;
          if ( Type != WdfIoTargetOpenReopen )
            FxIoTargetRemoveOpenParams::Set(pParams, OpenParams, &name, Ea, EaLength);
          TargetDeviceRelations = FxIoTargetRemote::OpenTargetHandle(this, OpenParams, v23);
          if ( TargetDeviceRelations < 0 )
          {
            v7 = 1;
            close = 1;
          }
          else if ( Type != WdfIoTargetOpenReopen )
          {
            FxIoTargetRemoveOpenParams::Set(&this->m_OpenParams, OpenParams, &name, Ea, EaLength);
            Ea = 0LL;
            name.Buffer = 0LL;
          }
          goto LABEL_14;
        }
        if ( v22 != 2 )
        {
LABEL_14:
          pended.Blink = &pended;
          pended.Flink = &pended;
          if ( TargetDeviceRelations >= 0 )
          {
            TargetDeviceRelations = FxIoTargetRemote::GetTargetDeviceRelations(this, &close);
            if ( TargetDeviceRelations >= 0 && this->m_TargetFileObject )
            {
              if ( Type != WdfIoTargetOpenReopen )
              {
                this->m_EvtQueryRemove.m_Method = OpenParams->EvtIoTargetQueryRemove;
                this->m_EvtRemoveCanceled.m_Method = OpenParams->EvtIoTargetRemoveCanceled;
                this->m_EvtRemoveComplete.m_Method = OpenParams->EvtIoTargetRemoveComplete;
              }
              TargetDeviceRelations = FxIoTargetRemote::RegisterForPnpNotification(this);
              if ( TargetDeviceRelations < 0 )
              {
                v34 = this->m_Globals;
                if ( v34->FxVerboseOn )
                {
                  v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                  if ( !this->m_ObjectSize )
                    v35 = 0LL;
                  WPP_IFR_SF_qd(v34, 5u, 0xEu, 0x14u, WPP_FxIoTargetRemote_cpp_Traceguids, v35, TargetDeviceRelations);
                }
                this->m_EvtQueryRemove.m_Method = 0LL;
                TargetDeviceRelations = 0;
                this->m_EvtRemoveCanceled.m_Method = 0LL;
                this->m_EvtRemoveComplete.m_Method = 0LL;
              }
            }
            v7 = close;
          }
          FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, v13);
          if ( TargetDeviceRelations < 0 )
          {
            this->m_OpenState = 1;
          }
          else
          {
            this->m_TargetStackSize = this->m_TargetDevice->StackSize;
            this->m_TargetIoType = FxIoTarget::GetTargetIoType(this);
            v16 = this->__vftable;
            this->m_OpenState = 3;
            TargetDeviceRelations = v16->GotoStartState(this, &pended, 0);
            if ( TargetDeviceRelations < 0 )
            {
              v36 = this->m_Globals;
              if ( v36->FxVerboseOn )
              {
                v37 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !this->m_ObjectSize )
                  v37 = 0LL;
                WPP_IFR_SF_qd(v36, 5u, 0xEu, 0x15u, WPP_FxIoTargetRemote_cpp_Traceguids, v37, TargetDeviceRelations);
              }
              v7 = 1;
            }
          }
          KeSetEvent(&this->m_OpenedEvent.m_Event.m_Event, 0, 0);
          FxNonPagedObject::Unlock(this, (unsigned __int8)irql, v17);
$Done_23:
          if ( TargetDeviceRelations < 0 )
          {
            if ( v7 )
              FxIoTargetRemote::Close(this, 2, v18);
          }
          else
          {
            while ( 1 )
            {
              Flink = pended.Flink;
              if ( pended.Flink == &pended )
                break;
              v38 = pended.Flink->Flink;
              if ( pended.Flink->Blink != &pended || v38->Blink != pended.Flink )
                __fastfail(3u);
              pended.Flink = pended.Flink->Flink;
              v38->Blink = &pended;
              FxIoTarget::SubmitPendedRequest(this, (FxRequestBase *)&Flink[-8].Blink);
            }
          }
          goto LABEL_23;
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
      }
      TargetDeviceRelations = 0;
      goto LABEL_14;
    }
    v27 = FxPoolAllocator(
            this->m_Globals,
            &this->m_Globals->FxPoolFrameworks,
            1u,
            EaBufferLength,
            this->m_Globals->Tag,
            retaddr);
    Ea = v27;
    if ( !v27 )
    {
      m_ObjectSize = this->m_ObjectSize;
      v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v29 = 0LL;
      WPP_IFR_SF_q(*irql, 2u, 0xEu, 0x10u, WPP_FxIoTargetRemote_cpp_Traceguids, v29);
      TargetDeviceRelations = -1073741670;
      goto LABEL_23;
    }
    EaBuffer = OpenParams->EaBuffer;
    EaLength = OpenParams->EaBufferLength;
    memmove(v27, EaBuffer, EaLength);
LABEL_56:
    TargetDeviceRelations = 0;
    goto LABEL_3;
  }
  if ( this->m_OpenParams.OpenType == WdfIoTargetOpenByName )
  {
    v8 = 2;
    pParams = &this->m_OpenParams;
    goto LABEL_56;
  }
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  TargetDeviceRelations = -1073741808;
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xEu, WPP_FxIoTargetRemote_cpp_Traceguids, _a1, -1073741808);
  return (unsigned int)TargetDeviceRelations;
}
