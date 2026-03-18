/*
 * XREFs of ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C006B108
 * Callers:
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C006B0D4 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C006B250 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0009130 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C00234FC (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C00294F4 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C006A82C (-Destroy@FxDevice@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C0088050 (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C00880E0 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxDevice::DeleteDeviceFromFailedCreateNoDelete(
        FxDevice *this,
        unsigned int FailedStatus,
        unsigned __int8 UseStateMachine)
{
  unsigned int _a3; // edi
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  const void *v8; // rax
  FxPkgPnp *m_PkgPnp; // rcx
  __int64 v10; // rdx
  unsigned __int8 v11; // r8
  FxDisposeList *m_DisposeList; // rcx
  FxPkgPnp *v13; // rcx
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
    FxObject::DestroyChildren(this);
    m_DisposeList = this->m_DisposeList;
    if ( m_DisposeList )
      FxDisposeList::WaitForEmpty(m_DisposeList, v10, v11);
    v13 = this->m_PkgPnp;
    if ( v13 )
      FxPkgPnp::CleanupStateMachines(v13, 1u);
  }
  FxDevice::Destroy(this);
  return _a3;
}
