/*
 * XREFs of ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001088C
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0021640 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxDriver::FxDriver(
        FxDriver *this,
        _FX_DRIVER_GLOBALS *ArgDriverObject,
        _WDF_DRIVER_CONFIG *DriverConfig,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  size_t Size; // rdi
  _FX_DRIVER_GLOBALS *v10; // rsi
  __int64 v11; // rbp
  FxVerifierLock *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  _LIST_ENTRY *Caller; // [rsp+58h] [rbp+0h]

  this->m_Globals = FxDriverGlobals;
  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)&FxObject::`vftable';
  *(_DWORD *)&this->m_Type = 24121345;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  this->m_Refcnt = 1;
  *(_DWORD *)&this->m_ObjectFlags = 0x10000;
  this->m_ParentObject = 0LL;
  this->m_ChildListHead.Blink = &this->m_ChildListHead;
  this->m_ChildListHead.Flink = &this->m_ChildListHead;
  this->m_ChildEntry.Blink = &this->m_ChildEntry;
  this->m_ChildEntry.Flink = &this->m_ChildEntry;
  m_Globals = this->m_Globals;
  this->m_DisposeSingleEntry.Next = 0LL;
  this->m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(this, ArgDriverObject, 0);
  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)&FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v10 = this->m_Globals;
    if ( v10->FxVerifierLock )
    {
      v11 = 0LL;
      v12 = (FxVerifierLock *)FxPoolAllocator(
                                v10,
                                (_LIST_ENTRY *)&v10->FxPoolFrameworks,
                                ExDefaultNonPagedPoolType,
                                0xB0uLL,
                                v10->Tag,
                                Caller);
      if ( v12 )
      {
        FxVerifierLock::FxVerifierLock(v12, v10, this);
        v14 = v13;
      }
      else
      {
        v14 = 0LL;
      }
      if ( v14 )
      {
        if ( *(_BYTE *)(v14 + 122) )
        {
          *(_QWORD *)(v14 + 56) = 0LL;
          *(_DWORD *)(v14 + 48) = 1;
          *(_DWORD *)(v14 + 64) = 0;
          KeInitializeEvent((PRKEVENT)(v14 + 72), SynchronizationEvent, 0);
          *(_BYTE *)(v14 + 40) = 1;
        }
        v11 = v14;
      }
      else
      {
        WPP_IFR_SF_d(v10, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
      }
      *(_QWORD *)&this[-1].m_Config.DriverInitFlags = v11;
    }
  }
  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)&FxDriver::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxDriver::`vftable'{for `IFxHasCallbacks'};
  this->m_DriverObject.m_DriverObject = (_DRIVER_OBJECT *)ArgDriverObject;
  this->m_DriverDeviceAdd.m_CallbackLock = 0LL;
  this->m_DriverDeviceAdd.Method = 0LL;
  this->m_CallbackMutexLock.m_Globals = FxDriverGlobals;
  this->m_CallbackMutexLock.m_OwnerThread = 0LL;
  this->m_CallbackMutexLock.m_RecursionCount = 0;
  this->m_CallbackMutexLock.m_Verifier = 0LL;
  this->m_CallbackMutexLock.__vftable = (FxCallbackMutexLock_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Contention;
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
