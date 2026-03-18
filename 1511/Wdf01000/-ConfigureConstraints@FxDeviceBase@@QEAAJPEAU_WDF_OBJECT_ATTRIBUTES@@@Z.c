/*
 * XREFs of ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001D150
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001AF10 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C00681E0 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ??0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00316DC (--0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxDeviceBase::ConfigureConstraints(FxDeviceBase *this, _WDF_OBJECT_ATTRIBUTES *ObjectAttributes)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FX_POOL *p_FxPoolFrameworks; // rdx
  _QWORD *v6; // rax
  unsigned int v7; // edi
  FxCallbackMutexLock *v9; // rax
  const void *v10; // rbx
  ULONG Tag; // [rsp+20h] [rbp-38h]
  void *Caller; // [rsp+58h] [rbp+0h]
  _WDF_EXECUTION_LEVEL driverLevel; // [rsp+60h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE driverScope; // [rsp+68h] [rbp+10h] BYREF

  if ( ObjectAttributes )
  {
    this->m_ExecutionLevel = ObjectAttributes->ExecutionLevel;
    this->m_SynchronizationScope = ObjectAttributes->SynchronizationScope;
  }
  this->m_Driver->GetConstraints(&this->m_Driver->IFxHasCallbacks, &driverLevel, &driverScope);
  if ( this->m_ExecutionLevel == WdfExecutionLevelInheritFromParent )
    this->m_ExecutionLevel = driverLevel;
  if ( this->m_SynchronizationScope == WdfSynchronizationScopeInheritFromParent )
    this->m_SynchronizationScope = driverScope;
  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
  Tag = m_Globals->Tag;
  if ( this->m_ExecutionLevel == WdfExecutionLevelPassive )
  {
    v9 = (FxCallbackMutexLock *)FxPoolAllocator(
                                  m_Globals,
                                  p_FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0x70uLL,
                                  Tag,
                                  Caller);
    if ( v9 )
    {
      FxCallbackMutexLock::FxCallbackMutexLock(v9, *p_m_Globals);
      goto LABEL_10;
    }
  }
  else
  {
    v6 = FxPoolAllocator(m_Globals, p_FxPoolFrameworks, ExDefaultNonPagedPoolType, 0x40uLL, Tag, Caller);
    if ( v6 )
    {
      v6[1] = *p_m_Globals;
      *v6 = &FxCallbackSpinLock::`vftable';
      v6[2] = 0LL;
      *((_DWORD *)v6 + 6) = 0;
      v6[4] = 0LL;
      v6[7] = 0LL;
      *((_BYTE *)v6 + 48) = 1;
      goto LABEL_10;
    }
  }
  v6 = 0LL;
LABEL_10:
  this->m_CallbackLockPtr = (FxCallbackLock *)v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD *, FxDeviceBase *))(*v6 + 8LL))(v6, this);
    this->m_CallbackLockObjectPtr = this;
    return 0;
  }
  else
  {
    v7 = -1073741670;
    if ( this->m_ObjectSize )
      v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v10 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x14u, 0xAu, WPP_FxDeviceBase_cpp_Traceguids, v10, -1073741670);
  }
  return v7;
}
