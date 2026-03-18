/*
 * XREFs of ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C00683E8
 * Callers:
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C0068574 (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C001F958 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001F9E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxDpc::Initialize(
        FxDpc *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_DPC_CONFIG *Config,
        FxObject *ParentObject,
        WDFDPC__ **Dpc)
{
  void (__fastcall *EvtDpcFunc)(WDFDPC__ *); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int RefCount; // r8d
  FxCallbackLock *m_CallbackLock; // rcx
  FxDeviceBase *v13; // rax
  int EffectiveLock; // esi
  unsigned int v16; // ecx
  _LIST_ENTRY *Flink; // rax
  void **v18; // r8
  IFxHasCallbacks *pCallbacks; // [rsp+60h] [rbp+8h] BYREF

  EvtDpcFunc = Config->EvtDpcFunc;
  m_Globals = this->m_Globals;
  pCallbacks = 0LL;
  this->m_Callback = EvtDpcFunc;
  KeInitializeDpc(&this->m_Dpc, (PKDEFERRED_ROUTINE)FxDpc::FxDpcThunk, this);
  RefCount = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
    m_CallbackLock = 0LL;
  else
    m_CallbackLock = this[-1].m_CallbackLock;
  if ( m_CallbackLock )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_CallbackLock,
      this,
      170,
      "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxdpc.cpp",
      TagAddRef,
      RefCount);
  v13 = FxDeviceBase::_SearchForDevice((unsigned __int64)ParentObject, &pCallbacks);
  this->m_DeviceBase = v13;
  if ( !v13 )
    return 3221225488LL;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    0,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock >= 0 )
  {
    v16 = _InterlockedIncrement(&ParentObject->m_Refcnt);
    if ( SLOBYTE(ParentObject->m_ObjectFlags) >= 0 )
      Flink = 0LL;
    else
      Flink = ParentObject[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)Flink,
        this,
        242,
        "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxdpc.cpp",
        TagAddRef,
        v16);
    v18 = (void **)Dpc;
    this->m_Object = ParentObject;
    return FxObject::Commit(this, Attributes, v18, ParentObject, 1u);
  }
  else
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xBu, WPP_FxDpc_cpp_Traceguids, Attributes->ParentObject, -1071644148);
    return (unsigned int)EffectiveLock;
  }
}
