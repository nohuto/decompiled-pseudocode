/*
 * XREFs of ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C001D140
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0003AA0 (imp_WdfRequestSend.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0065FEC (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C007D644 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0096F60 (-PnpEventPdoInitFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C0097684 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C000C500 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z @ 0x1C001CFB4 (-ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C003E068 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C003E158 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003F998 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

char __fastcall FxObject::EarlyDispose(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // r14
  char v3; // di
  KIRQL v4; // bp
  FxObject *m_ParentObject; // rcx
  char v6; // si
  const _GUID *traceGuid; // r10
  unsigned __int16 m_ObjectFlags; // cx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  _FX_DRIVER_GLOBALS *v12; // rcx
  const void *v13; // rdx
  _FX_DRIVER_GLOBALS *v14; // rcx
  const void *v15; // rdx
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+8h] BYREF

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState != 1 )
    goto LABEL_23;
  m_ParentObject = this->m_ParentObject;
  if ( !m_ParentObject )
  {
LABEL_3:
    PreviousIrql = v4;
    this->m_ObjectFlags |= 0x100u;
    v6 = 1;
    if ( (this->m_ObjectFlags & 0x200) != 0 )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a2 = 0LL;
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 3u);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 3;
    }
    this->m_ObjectState = 3;
    if ( !FxObject::ShouldDeferDisposeLocked(this, &PreviousIrql) )
    {
      if ( (this->m_ObjectFlags & 0x200) != 0 )
      {
        v12 = this->m_Globals;
        if ( v12->FxVerboseOn )
        {
          v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v13 = 0LL;
          WPP_IFR_SF_qqLL(v12, 5u, 0x14u, 0xAu, traceGuid, this, v13, this->m_ObjectState, 4u);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 4;
      }
      this->m_ObjectState = 4;
      if ( !FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDisposing, v4, 1u) )
        return 0;
      m_ObjectFlags = this->m_ObjectFlags;
      if ( (m_ObjectFlags & 0x104) == 0x104 )
      {
        FxObject::DeletedAndDisposedWorkerLocked(this, v4, 0);
      }
      else
      {
        if ( (m_ObjectFlags & 0x200) != 0 )
        {
          v14 = this->m_Globals;
          if ( v14->FxVerboseOn )
          {
            v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v15 = 0LL;
            WPP_IFR_SF_qqLL(v14, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v15, this->m_ObjectState, 2u);
          }
          if ( SLOBYTE(this->m_ObjectFlags) < 0 )
            *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 2;
        }
        this->m_ObjectState = 2;
      }
      return v6;
    }
    FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
LABEL_23:
    KeReleaseSpinLock(p_m_Lock, v4);
    return v3;
  }
  if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) != -1073741738 )
  {
    this->m_ParentObject = 0LL;
    goto LABEL_3;
  }
  FxObject::SetObjectStateLocked(this, 7u);
  KeReleaseSpinLock(p_m_Lock, v4);
  return 0;
}
