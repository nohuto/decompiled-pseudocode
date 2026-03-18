/*
 * XREFs of ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00089B0
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C00066C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007E60 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00089B0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00091F0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryClose @ 0x1C000F230 (imp_WdfRegistryClose.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00140F4 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C001C46C (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0076E70 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C00798E8 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C0079C10 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0092CC0 (-PnpEventPdoInitFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C0093380 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00089B0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 */

void __fastcall FxObject::DestroyChildren(FxObject *this)
{
  _LIST_ENTRY *p_m_ChildListHead; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v3; // rcx
  FxObject *_a1; // rdi
  KIRQL v5; // al
  unsigned int _a3; // edx
  KIRQL v7; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rax

  p_m_ChildListHead = &this->m_ChildListHead;
  while ( p_m_ChildListHead->Flink != p_m_ChildListHead )
  {
    Flink = p_m_ChildListHead->Flink;
    v3 = p_m_ChildListHead->Flink->Flink;
    if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v3->Blink != Flink )
      __fastfail(3u);
    p_m_ChildListHead->Flink = v3;
    _a1 = (FxObject *)&Flink[-5].Blink;
    v3->Blink = p_m_ChildListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Flink[-1]);
    _a3 = _a1->m_ObjectState;
    v7 = v5;
    _a1->m_ParentObject = 0LL;
    if ( _a3 == 2 )
    {
LABEL_6:
      if ( (_a1->m_ObjectFlags & 0x200) != 0 )
      {
        m_Globals = _a1->m_Globals;
        if ( m_Globals->FxVerboseOn )
        {
          if ( _a1->m_ObjectSize )
            _a2 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a2 = 0LL;
          WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, _a2, _a3, 0xAu);
        }
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].96) - 16) = 10;
      }
      _a1->m_ObjectState = 10;
      KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v7);
      FxObject::DestroyChildren(_a1);
      _a1->Release(_a1, 0LL, 1215, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
    }
    else
    {
      if ( _a3 != 4 )
      {
        if ( _a3 == 8 )
          goto LABEL_6;
        if ( _a3 == 9 )
          FxObject::TraceDroppedEvent(_a1, FxObjectDroppedEventParentDeleteEvent);
      }
      KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v7);
    }
  }
}
