/*
 * XREFs of ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00212D0
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C00173E0 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C001C288 (-Construct@FxObject@@AEAAXE@Z.c)
 *     memmove @ 0x1C003C440 (memmove.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0066A4C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 */

void __fastcall FxDriver::FxDriver(
        FxDriver *this,
        _DRIVER_OBJECT *ArgDriverObject,
        _WDF_DRIVER_CONFIG *DriverConfig,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  size_t Size; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxVerifierLock *VerifierLock; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)&this->m_Type = 24121345;
  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)&FxObject::`vftable';
  this->m_Globals = FxDriverGlobals;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  FxObject::Construct(this, 0LL);
  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)&FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, m_Globals, this);
      *(_QWORD *)&this[-1].m_Config.DriverInitFlags = VerifierLock;
    }
  }
  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)&FxDriver::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxDriver::`vftable'{for `IFxHasCallbacks'};
  this->m_DriverObject.m_DriverObject = ArgDriverObject;
  this->m_DriverDeviceAdd.m_CallbackLock = 0LL;
  this->m_DriverDeviceAdd.Method = 0LL;
  this->m_CallbackMutexLock.m_Globals = FxDriverGlobals;
  this->m_CallbackMutexLock.m_OwnerThread = 0LL;
  this->m_CallbackMutexLock.m_RecursionCount = 0;
  this->m_CallbackMutexLock.m_Verifier = 0LL;
  this->m_CallbackMutexLock.__vftable = (FxCallbackMutexLock_vtbl *)&FxCallbackMutexLock::`vftable';
  this->m_CallbackMutexLock.m_Lock.m_DbgFlagIsInitialized = 0;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Count = 1;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Owner = 0LL;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Contention = 0;
  KeInitializeEvent(&this->m_CallbackMutexLock.m_Lock.m_Lock.Event, SynchronizationEvent, 0);
  this->m_CallbackMutexLock.m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Count = 1;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Owner = 0LL;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Contention = 0;
  KeInitializeEvent(&this->m_CallbackMutexLock.m_Lock.m_Lock.Event, SynchronizationEvent, 0);
  this->m_CallbackMutexLock.m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_DriverUnload.Method = 0LL;
  RtlInitUnicodeString(&this->m_RegistryPath, 0LL);
  this->m_ExecutionLevel = WdfExecutionLevelDispatch;
  Size = 32LL;
  this->m_SynchronizationScope = WdfSynchronizationScopeNone;
  this->m_CallbackLockPtr = 0LL;
  this->m_CallbackLockObjectPtr = 0LL;
  this->m_DisposeList = 0LL;
  memset(&this->m_Config, 0, sizeof(this->m_Config));
  this->m_Config.Size = 32;
  this->m_Config.EvtDriverDeviceAdd = 0LL;
  if ( DriverConfig->Size <= 0x20 )
    Size = DriverConfig->Size;
  memmove(&this->m_Config, DriverConfig, Size);
  this->m_DebuggerConnected = 0;
}
