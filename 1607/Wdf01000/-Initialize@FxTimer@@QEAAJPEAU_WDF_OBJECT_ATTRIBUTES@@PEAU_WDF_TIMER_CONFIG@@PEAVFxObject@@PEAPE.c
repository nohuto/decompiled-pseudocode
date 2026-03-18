/*
 * XREFs of ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0019EB0
 * Callers:
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0017328 (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0016830 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C001AD90 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001AE18 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0023590 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxTimer::Initialize(
        FxTimer *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_TIMER_CONFIG *Config,
        FxObject *ParentObject,
        WDFTIMER__ **Timer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  bool IsVersionGreaterThanOrEqualTo; // al
  int v11; // r8d
  unsigned int v12; // r15d
  int EffectiveLock; // edi
  unsigned int v14; // ecx
  FxSystemWorkItem *m_SystemWorkItem; // rax
  FxDeviceBase *v16; // rax
  unsigned __int8 v17; // r15
  unsigned int v18; // ecx
  _LIST_ENTRY *Flink; // rax
  void **v20; // r8
  int v22; // eax
  unsigned int m_TolerableDelay; // ecx
  unsigned __int8 m_UseHighResolutionTimer; // dl
  unsigned int m_Period; // eax
  __int64 v26; // r8
  struct _EX_TIMER *v27; // rax
  IFxHasCallbacks *pCallbacks; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  pCallbacks = 0LL;
  this->m_Period = Config->Period;
  if ( Config->Size > 0x18 )
    this->m_TolerableDelay = Config->TolerableDelay;
  if ( Config->Size > 0x20 )
    this->m_UseHighResolutionTimer = Config->UseHighResolutionTimer;
  this->m_Callback = Config->EvtTimerFunc;
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    m_Globals,
                                    (unsigned int)Attributes,
                                    0xDu);
  v12 = v11 - 12;
  if ( IsVersionGreaterThanOrEqualTo )
  {
    m_TolerableDelay = this->m_TolerableDelay;
    m_UseHighResolutionTimer = this->m_UseHighResolutionTimer;
    m_Period = this->m_Period;
    this->m_Timer.m_Timer.m_TimerCallback = (void (__fastcall *)(_KDPC *, void *, void *, void *))FxTimer::_FxTimerExtCallbackThunk;
    this->m_Timer.m_Timer.m_TimerContext = this;
    this->m_Timer.m_Timer.m_Period = m_Period;
    if ( m_TolerableDelay )
    {
      v26 = 8LL;
    }
    else
    {
      v26 = 0LL;
      if ( m_UseHighResolutionTimer )
        v26 = 4LL;
    }
    v27 = (struct _EX_TIMER *)ExAllocateTimer(FxTimer::_FxTimerExtCallbackThunk, this, v26);
    this->m_Timer.m_Timer.m_KernelExTimer = v27;
    this->m_Timer.m_Timer.m_IsExtTimer = v12;
    EffectiveLock = v27 == 0LL ? 0xC000009A : 0;
  }
  else
  {
    EffectiveLock = MxTimer::Initialize(
                      &this->m_Timer,
                      this,
                      (void (__fastcall *)(_KDPC *, void *, void *, void *))FxTimer::_FxTimerDpcThunk,
                      this->m_Period);
  }
  if ( EffectiveLock < 0 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xBu, WPP_FxTimer_cpp_Traceguids, EffectiveLock);
    return (unsigned int)EffectiveLock;
  }
  v14 = v12 + _InterlockedExchangeAdd(&this->m_Refcnt, v12);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    m_SystemWorkItem = this[-1].m_SystemWorkItem;
  else
    m_SystemWorkItem = 0LL;
  if ( m_SystemWorkItem )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_SystemWorkItem,
      this,
      191,
      "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
      TagAddRef,
      v14);
  v16 = FxDeviceBase::_SearchForDevice(ParentObject, &pCallbacks);
  this->m_DeviceBase = v16;
  if ( !v16 )
    return 3221225488LL;
  v17 = Attributes->ExecutionLevel == WdfExecutionLevelPassive;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    v17,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock < 0 )
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxTimer_cpp_Traceguids, Attributes->ParentObject, -1071644148);
    return (unsigned int)EffectiveLock;
  }
  if ( v17 )
  {
    v22 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SystemWorkItem);
    EffectiveLock = v22;
    if ( v22 < 0 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xDu, WPP_FxTimer_cpp_Traceguids, v22);
      return (unsigned int)EffectiveLock;
    }
  }
  v18 = _InterlockedIncrement(&ParentObject->m_Refcnt);
  if ( SLOBYTE(ParentObject->m_ObjectFlags) < 0 )
    Flink = ParentObject[-1].m_ChildEntry.Flink;
  else
    Flink = 0LL;
  if ( Flink )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)Flink,
      this,
      277,
      "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
      TagAddRef,
      v18);
  v20 = (void **)Timer;
  this->m_Object = ParentObject;
  return FxObject::Commit(this, Attributes, v20, ParentObject, 1u);
}
