/*
 * XREFs of ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C00240C4
 * Callers:
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0023DE0 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 * Callees:
 *     ?IsPassiveCallbacks@FxObject@@QEAAEE@Z @ 0x1C0009424 (-IsPassiveCallbacks@FxObject@@QEAAEE@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0024438 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxWorkItem::Initialize(
        FxWorkItem *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_WORKITEM_CONFIG *Config,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int RefCount; // r9d
  _LIST_ENTRY *Flink; // rcx
  FxDeviceBase *v12; // rax
  unsigned __int8 AutomaticSerialization; // al
  _FX_DRIVER_GLOBALS *v14; // r15
  IFxHasCallbacks *v15; // rsi
  unsigned __int8 v16; // dl
  struct _IO_WORKITEM *v17; // rax
  unsigned int v18; // ecx
  _LIST_ENTRY *v19; // rax
  void **v20; // r8
  unsigned int v22; // ebx
  IFxHasCallbacks *pCallbacks; // [rsp+40h] [rbp-38h] BYREF
  int v24; // [rsp+80h] [rbp+8h] BYREF
  char v25; // [rsp+90h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  this->m_Callback = Config->EvtWorkItemFunc;
  RefCount = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    Flink = this[-1].m_WorkItemCompleted.m_Event.m_Event.Header.WaitListHead.Flink;
  else
    Flink = 0LL;
  if ( Flink )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)Flink,
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
        WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxWorkItem_cpp_Traceguids, Attributes->ParentObject, -1071644148);
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
    v19 = ParentObject[-1].m_ChildEntry.Flink;
  else
    v19 = 0LL;
  if ( v19 )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)v19,
      this,
      269,
      "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
      TagAddRef,
      v18);
  v20 = (void **)WorkItem;
  this->m_Object = ParentObject;
  return FxObject::Commit(this, Attributes, v20, ParentObject, 1u);
}
