/*
 * XREFs of ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C0076668
 * Callers:
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C0076634 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C00767F0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 * Callees:
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0009884 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C0015898 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C0015EE0 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C0075D20 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C009D2DC (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C009D394 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxDevice::DeleteDeviceFromFailedCreateNoDelete(
        FxDevice *this,
        unsigned int FailedStatus,
        unsigned __int8 UseStateMachine)
{
  unsigned int _a3; // esi
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  const void *v8; // rax
  FxPkgPnp *m_PkgPnp; // rcx
  __int64 v10; // rdx
  unsigned __int8 v11; // r8
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v14; // rax
  FxObject *p_Blink; // rcx
  FxDisposeList *m_DisposeList; // rcx
  FxPkgPnp *v17; // rcx
  MxEvent waitEvent; // [rsp+40h] [rbp-28h] BYREF

  _a3 = FailedStatus;
  _a2 = this->m_DeviceObject.m_DeviceObject;
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxDevice_cpp_Traceguids, _a1, (__int64)_a2, FailedStatus);
  if ( this->m_Filter )
  {
    if ( this->m_ObjectSize )
      v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v8 = 0LL;
    WPP_IFR_SF_qid(
      this->m_Globals,
      4u,
      0xCu,
      0xCu,
      WPP_FxDevice_cpp_Traceguids,
      v8,
      (__int64)this->m_DeviceObject.m_DeviceObject,
      _a3);
    _a3 = 0;
  }
  if ( UseStateMachine )
  {
    waitEvent.m_DbgFlagIsInitialized = 0;
    KeInitializeEvent(&waitEvent.m_Event, SynchronizationEvent, 0);
    m_PkgPnp = this->m_PkgPnp;
    waitEvent.m_DbgFlagIsInitialized = 1;
    FxPkgPnp::CleanupDeviceFromFailedCreate(m_PkgPnp, &waitEvent);
  }
  else
  {
    FxObject::EarlyDispose(this);
    p_m_ChildListHead = &this->m_ChildListHead;
    while ( p_m_ChildListHead->Flink != p_m_ChildListHead )
    {
      Flink = p_m_ChildListHead->Flink;
      v14 = p_m_ChildListHead->Flink->Flink;
      if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v14->Blink != Flink )
        __fastfail(3u);
      p_m_ChildListHead->Flink = v14;
      p_Blink = (FxObject *)&Flink[-5].Blink;
      v14->Blink = p_m_ChildListHead;
      p_Blink->m_ChildEntry.Blink = &p_Blink->m_ChildEntry;
      p_Blink->m_ChildEntry.Flink = &p_Blink->m_ChildEntry;
      FxObject::ParentDeleteEvent(p_Blink);
    }
    m_DisposeList = this->m_DisposeList;
    if ( m_DisposeList )
      FxDisposeList::WaitForEmpty(m_DisposeList, v10, v11);
    v17 = this->m_PkgPnp;
    if ( v17 )
      FxPkgPnp::CleanupStateMachines(v17, 1u);
  }
  FxDevice::Destroy(this);
  return _a3;
}
