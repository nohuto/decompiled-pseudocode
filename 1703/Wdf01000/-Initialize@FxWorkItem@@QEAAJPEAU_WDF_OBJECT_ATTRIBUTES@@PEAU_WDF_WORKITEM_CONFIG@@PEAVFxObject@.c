/*
 * XREFs of ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001C18C
 * Callers:
 *     imp_WdfWorkItemCreate @ 0x1C001BCD0 (imp_WdfWorkItemCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?IsPassiveCallbacks@FxObject@@QEAAEE@Z @ 0x1C000C8E0 (-IsPassiveCallbacks@FxObject@@QEAAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001C424 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxWorkItem::Initialize(
        FxWorkItem *this,
        _FX_DRIVER_GLOBALS *Attributes,
        _WDF_WORKITEM_CONFIG *Config,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int RefCount; // r9d
  void (__fastcall *m_Callback)(WDFWORKITEM__ *); // rcx
  FxDeviceBase *v12; // rax
  unsigned __int8 AutomaticSerialization; // al
  _FX_DRIVER_GLOBALS *v14; // r15
  IFxHasCallbacks *v15; // rsi
  unsigned __int8 v16; // dl
  struct _IO_WORKITEM *v17; // rax
  unsigned int v18; // ecx
  FxTagTracker *m_Lock; // rax
  void **v20; // r8
  unsigned int v22; // ebx
  IFxHasCallbacks *pCallbacks; // [rsp+40h] [rbp-38h] BYREF
  int v24; // [rsp+80h] [rbp+8h] BYREF
  char v25; // [rsp+90h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  this->m_Callback = Config->EvtWorkItemFunc;
  RefCount = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    m_Callback = this[-1].m_Callback;
  else
    m_Callback = 0LL;
  if ( m_Callback )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_Callback,
      this,
      178,
      "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
      TagAddRef,
      RefCount);
  v12 = FxDeviceBase::_SearchForDevice(ParentObject, &pCallbacks);
  this->m_DeviceBase = v12;
  if ( !v12 )
    return 3221225488LL;
  AutomaticSerialization = Config->AutomaticSerialization;
  v14 = ParentObject->m_Globals;
  this->m_CallbackLock = 0LL;
  this->m_CallbackLockObject = 0LL;
  v15 = pCallbacks;
  if ( AutomaticSerialization )
  {
    if ( !pCallbacks )
      return (unsigned int)-1073741808;
    pCallbacks->GetConstraints(pCallbacks, (_WDF_EXECUTION_LEVEL *)&v25, (_WDF_SYNCHRONIZATION_SCOPE *)&v24);
    if ( v24 != 4 && v24 != 1 )
    {
      if ( !FxObject::IsPassiveCallbacks(ParentObject, v16) )
      {
        FxVerifierDbgBreakPoint(v14);
        v22 = -1071644148;
        WPP_IFR_SF_qd(
          m_Globals,
          2u,
          0x12u,
          0xCu,
          WPP_FxWorkItem_cpp_Traceguids,
          Attributes->DestroyEvent.m_Event.Header.WaitListHead.Flink,
          -1071644148);
        return v22;
      }
      this->m_CallbackLock = v15->GetCallbackLockPtr(v15, &this->m_CallbackLockObject);
    }
  }
  v17 = IoAllocateWorkItem(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  this->m_WorkItem.m_WorkItem = v17;
  if ( !v17 )
  {
    v22 = -1073741670;
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xDu, WPP_FxWorkItem_cpp_Traceguids, -1073741670);
    return v22;
  }
  v18 = _InterlockedIncrement(&ParentObject->m_Refcnt);
  if ( SLOBYTE(ParentObject->m_ObjectFlags) < 0 )
    m_Lock = (FxTagTracker *)ParentObject[-1].m_SpinLock.m_Lock;
  else
    m_Lock = 0LL;
  if ( m_Lock )
    FxTagTracker::UpdateTagHistory(
      m_Lock,
      this,
      269,
      "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
      TagAddRef,
      v18);
  v20 = (void **)WorkItem;
  this->m_Object = ParentObject;
  return FxObject::Commit(this, Attributes, v20, ParentObject, 1u);
}
