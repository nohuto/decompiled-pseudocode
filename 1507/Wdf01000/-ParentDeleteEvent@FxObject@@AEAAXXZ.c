/*
 * XREFs of ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C0015898
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0004690 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C0015898 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C0015F90 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C002052C (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005CBFC (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0072D70 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C0076668 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C00769A0 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0099F40 (-PnpEventPdoInitFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C009A6D0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C0015898 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxObject::ParentDeleteEvent(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v3; // al
  unsigned int _a3; // r11d
  const void *_a2; // r10
  KIRQL v6; // si
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v9; // rax
  FxObject *p_Blink; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  _a3 = this->m_ObjectState;
  _a2 = 0LL;
  this->m_ParentObject = 0LL;
  v6 = v3;
  if ( _a3 == 2 )
    goto LABEL_2;
  if ( _a3 == 4 )
  {
LABEL_17:
    KeReleaseSpinLock(p_m_Lock, v6);
    return;
  }
  if ( _a3 != 8 )
  {
    if ( _a3 == 9 && (this->m_ObjectFlags & 0x200) != 0 )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, _a2, 9u, 6u);
    }
    goto LABEL_17;
  }
LABEL_2:
  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, _a3, 0xAu);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 10;
  }
  this->m_ObjectState = 10;
  KeReleaseSpinLock(p_m_Lock, v6);
  p_m_ChildListHead = &this->m_ChildListHead;
  while ( p_m_ChildListHead->Flink != p_m_ChildListHead )
  {
    Flink = p_m_ChildListHead->Flink;
    v9 = p_m_ChildListHead->Flink->Flink;
    if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v9->Blink != Flink )
      __fastfail(3u);
    p_m_ChildListHead->Flink = v9;
    p_Blink = (FxObject *)&Flink[-5].Blink;
    v9->Blink = p_m_ChildListHead;
    p_Blink->m_ChildEntry.Blink = &p_Blink->m_ChildEntry;
    p_Blink->m_ChildEntry.Flink = &p_Blink->m_ChildEntry;
    FxObject::ParentDeleteEvent(p_Blink);
  }
  this->Release(this, 0LL, 1215, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
}
