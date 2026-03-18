/*
 * XREFs of ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0023B0C
 * Callers:
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0023D90 (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000CBC0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C001F958 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001F9E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxTimer::Initialize(
        FxTimer *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_TIMER_CONFIG *Config,
        FxObject *ParentObject,
        WDFTIMER__ **Timer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  bool v10; // zf
  int v11; // r8d
  unsigned int v12; // r15d
  unsigned int m_Period; // eax
  unsigned int m_TolerableDelay; // ecx
  unsigned __int8 m_UseHighResolutionTimer; // dl
  __int64 v16; // r8
  struct _EX_TIMER *v17; // rax
  int EffectiveLock; // esi
  unsigned int v19; // ecx
  FxSystemWorkItem *m_SystemWorkItem; // rax
  FxDeviceBase *v21; // rax
  unsigned __int8 v22; // r15
  unsigned int v23; // ecx
  _LIST_ENTRY *Flink; // rax
  void **v25; // r8
  int v27; // eax
  IFxHasCallbacks *pCallbacks; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  pCallbacks = 0LL;
  this->m_Period = Config->Period;
  if ( Config->Size > 0x18 )
    this->m_TolerableDelay = Config->TolerableDelay;
  if ( Config->Size > 0x20 )
    this->m_UseHighResolutionTimer = Config->UseHighResolutionTimer;
  this->m_Callback = Config->EvtTimerFunc;
  v10 = !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)Attributes, 0xDu);
  v12 = v11 - 12;
  m_Period = this->m_Period;
  if ( v10 )
  {
    this->m_Timer.m_Timer.m_TimerContext = this;
    this->m_Timer.m_Timer.m_TimerCallback = FxTimer::_FxTimerDpcThunk;
    this->m_Timer.m_Timer.m_Period = m_Period;
    KeInitializeTimerEx(&this->m_Timer.m_Timer.KernelTimer, NotificationTimer);
    KeInitializeDpc(
      &this->m_Timer.m_Timer.TimerDpc,
      this->m_Timer.m_Timer.m_TimerCallback,
      this->m_Timer.m_Timer.m_TimerContext);
    this->m_Timer.m_Timer.m_IsExtTimer = 0;
    EffectiveLock = 0;
  }
  else
  {
    m_TolerableDelay = this->m_TolerableDelay;
    m_UseHighResolutionTimer = this->m_UseHighResolutionTimer;
    this->m_Timer.m_Timer.m_TimerCallback = (void (__fastcall *)(_KDPC *, void *, void *, void *))FxTimer::_FxTimerExtCallbackThunk;
    this->m_Timer.m_Timer.m_TimerContext = this;
    this->m_Timer.m_Timer.m_Period = m_Period;
    if ( m_TolerableDelay )
    {
      v16 = v12 + 7;
    }
    else
    {
      v16 = 0LL;
      if ( m_UseHighResolutionTimer )
        v16 = 4LL;
    }
    v17 = (struct _EX_TIMER *)ExAllocateTimer(FxTimer::_FxTimerExtCallbackThunk, this, v16);
    this->m_Timer.m_Timer.m_KernelExTimer = v17;
    this->m_Timer.m_Timer.m_IsExtTimer = v12;
    EffectiveLock = v17 == 0LL ? 0xC000009A : 0;
  }
  if ( EffectiveLock < 0 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xBu, WPP_FxTimer_cpp_Traceguids, EffectiveLock);
    return (unsigned int)EffectiveLock;
  }
  v19 = v12 + _InterlockedExchangeAdd(&this->m_Refcnt, v12);
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
      v19);
  v21 = FxDeviceBase::_SearchForDevice((unsigned __int64)ParentObject, &pCallbacks);
  this->m_DeviceBase = v21;
  if ( !v21 )
    return 3221225488LL;
  v22 = Attributes->ExecutionLevel == WdfExecutionLevelPassive;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    v22,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock < 0 )
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxTimer_cpp_Traceguids, Attributes->ParentObject, -1071644148);
    return (unsigned int)EffectiveLock;
  }
  if ( v22 )
  {
    v27 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SystemWorkItem);
    EffectiveLock = v27;
    if ( v27 < 0 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xDu, WPP_FxTimer_cpp_Traceguids, v27);
      return (unsigned int)EffectiveLock;
    }
  }
  v23 = _InterlockedIncrement(&ParentObject->m_Refcnt);
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
      v23);
  v25 = (void **)Timer;
  this->m_Object = ParentObject;
  return FxObject::Commit(this, Attributes, v25, ParentObject, 1u);
}
