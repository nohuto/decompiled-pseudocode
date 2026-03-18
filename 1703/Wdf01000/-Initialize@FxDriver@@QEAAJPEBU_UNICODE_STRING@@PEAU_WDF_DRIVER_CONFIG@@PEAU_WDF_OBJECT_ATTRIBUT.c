/*
 * XREFs of ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00212F0
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0019790 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ??0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00385EC (--0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C006A220 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_qZ @ 0x1C007E4D8 (WPP_IFR_SF_qZ.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D4A70 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

NTSTATUS __fastcall FxDriver::Initialize(
        FxDriver *this,
        const _UNICODE_STRING *ArgRegistryPath,
        _WDF_DRIVER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  KIRQL v8; // al
  FxCallbackMutexLock_vtbl *v9; // rax
  int v10; // esi
  _DRIVER_OBJECT *m_DriverObject; // r15
  _POOL_TYPE v12; // r8d
  unsigned __int64 v13; // r9
  void *Caller; // rax
  _QWORD *v15; // rax
  _FX_DRIVER_GLOBALS *v16; // rdx
  _QWORD *v17; // rbx
  __int64 v18; // rax
  _POOL_TYPE v19; // r8d
  unsigned __int64 v20; // r9
  _FX_DRIVER_GLOBALS *v21; // rbp
  void *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // r14
  __int64 v25; // rax
  _QWORD *v26; // r14
  _FX_DRIVER_GLOBALS *v27; // r13
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS result; // eax
  __int64 (__fastcall *v30)(_DEVICE_OBJECT *, _IRP *); // r8
  unsigned __int16 v31; // r9
  _WDF_DRIVER_CONFIG *v32; // rbp
  unsigned __int16 Length; // ax
  _FX_DRIVER_GLOBALS *v34; // rcx
  unsigned __int64 v35; // rbx
  wchar_t *v36; // rax
  unsigned int DriverInitFlags; // eax
  _DRIVER_EXTENSION *DriverExtension; // rcx
  _DRIVER_OBJECT *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  _WDF_EXECUTION_LEVEL ExecutionLevel; // eax
  _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope; // eax
  _FX_DRIVER_GLOBALS *v44; // rdx
  const _GUID *Tag; // [rsp+20h] [rbp-58h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  PVOID DriverObjectExtension; // [rsp+80h] [rbp+8h] BYREF
  _WDF_DRIVER_CONFIG *v48; // [rsp+90h] [rbp+18h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+98h] [rbp+20h]

  v48 = Config;
  m_Globals = this->m_Globals;
  globals = m_Globals;
  v8 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  this->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v8);
  v9 = this->m_CallbackMutexLock.__vftable;
  this->m_ObjectFlags |= 0x800u;
  v9->Initialize(&this->m_CallbackMutexLock, this);
  this->m_ObjectFlags |= 0x11u;
  this->m_CallbackLockPtr = &this->m_CallbackMutexLock;
  this->m_CallbackLockObjectPtr = this;
  if ( DriverAttributes )
  {
    ExecutionLevel = DriverAttributes->ExecutionLevel;
    if ( ExecutionLevel != WdfExecutionLevelInheritFromParent )
      this->m_ExecutionLevel = ExecutionLevel;
    SynchronizationScope = DriverAttributes->SynchronizationScope;
    if ( SynchronizationScope != WdfSynchronizationScopeInheritFromParent )
      this->m_SynchronizationScope = SynchronizationScope;
  }
  v10 = 0;
  if ( (unsigned int)(this->m_SynchronizationScope - 2) <= 1 )
    this->m_DriverDeviceAdd.m_CallbackLock = &this->m_CallbackMutexLock;
  else
    this->m_DriverDeviceAdd.m_CallbackLock = 0LL;
  m_DriverObject = this->m_DriverObject.m_DriverObject;
  if ( !m_DriverObject )
    return -1073741823;
  v12 = ExDefaultNonPagedPoolType;
  this->m_DisposeList = 0LL;
  v13 = 160LL;
  if ( m_Globals->FxVerifierHandle )
    v13 = 208LL;
  if ( m_Globals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v15 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v12, v13, m_Globals->Tag, Caller);
  v17 = v15;
  if ( !v15 )
    return -1073741670;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v15, 0, 0x30uLL);
    *((_DWORD *)v17 + 8) = 1146058822;
    v17 += 6;
  }
  if ( !v17 )
    return -1073741670;
  v17[2] = m_Globals;
  *v17 = &FxObject::`vftable';
  *((_DWORD *)v17 + 2) = 4147;
  v17[7] = 0LL;
  *((_BYTE *)v17 + 48) = 1;
  *((_DWORD *)v17 + 3) = 1;
  *((_DWORD *)v17 + 6) = 0x10000;
  v17[8] = 0LL;
  v17[5] = v17 + 4;
  v17[4] = v17 + 4;
  v17[10] = v17 + 9;
  v17[9] = v17 + 9;
  v18 = v17[2];
  v17[11] = 0LL;
  v17[12] = 0LL;
  if ( *(_BYTE *)(v18 + 316) )
    FxObject::Vf_VerifyConstruct((FxObject *)v17, v16, 0);
  *v17 = FxNonPagedObject::`vftable';
  v17[14] = 0LL;
  *((_BYTE *)v17 + 104) = 1;
  if ( *((char *)v17 + 24) < 0 )
  {
    v44 = (_FX_DRIVER_GLOBALS *)v17[2];
    if ( v44->FxVerifierLock )
    {
      DriverObjectExtension = 0LL;
      FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&DriverObjectExtension, v44, (FxObject *)v17);
      *(v17 - 5) = DriverObjectExtension;
    }
  }
  v19 = ExDefaultNonPagedPoolType;
  *v17 = FxDisposeList::`vftable';
  v20 = 224LL;
  v17[15] = 0LL;
  v17[16] = v17 + 15;
  v17[18] = 0LL;
  v17[17] = 0LL;
  v21 = (_FX_DRIVER_GLOBALS *)v17[2];
  *((_WORD *)v17 + 12) |= 0x800u;
  if ( v21->FxVerifierHandle )
    v20 = 272LL;
  if ( v21->FxPoolTrackingOn )
    v22 = retaddr;
  else
    v22 = 0LL;
  v23 = FxPoolAllocator(v21, &v21->FxPoolFrameworks, v19, v20, v21->Tag, v22);
  v24 = v23;
  if ( !v23 )
    goto LABEL_57;
  if ( v21->FxVerifierHandle )
  {
    memset(v23, 0, 0x30uLL);
    *((_DWORD *)v24 + 8) = 1146058822;
    v24 += 6;
  }
  if ( !v24 || (FxSystemWorkItem::FxSystemWorkItem((FxSystemWorkItem *)v24, v21), (v26 = (_QWORD *)v25) == 0LL) )
  {
LABEL_57:
    WPP_IFR_SF_d(v21, 2u, 0xDu, 0xAu, WPP_FxDisposeList_cpp_Traceguids, -1073741670);
    FxObject::DeleteFromFailedCreate((FxObject *)v17);
    return -1073741670;
  }
  v27 = *(_FX_DRIVER_GLOBALS **)(v25 + 16);
  *(_WORD *)(v25 + 24) |= 0x811u;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)m_DriverObject);
  v26[16] = WorkItem;
  if ( !WorkItem )
  {
    WPP_IFR_SF_(v27, 2u, 0x12u, 0xDu, WPP_FxSystemWorkitem_cpp_Traceguids);
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(*v26 + 16LL))(v26, 0LL, 0LL, 0LL);
    goto LABEL_57;
  }
  v17[18] = v26;
  v17[19] = m_DriverObject;
  this->m_DisposeList = (FxDisposeList *)v17;
  result = IoAllocateDriverObjectExtension(
             this->m_DriverObject.m_DriverObject,
             FxDriver::GetFxDriver,
             8u,
             &DriverObjectExtension);
  if ( result < 0 )
    return result;
  v32 = v48;
  *(_QWORD *)DriverObjectExtension = this;
  if ( (v32->DriverInitFlags & 2) == 0 )
  {
    this->m_DriverDeviceAdd.Method = v32->EvtDriverDeviceAdd;
    this->m_DriverUnload.Method = v32->EvtDriverUnload;
  }
  if ( !ArgRegistryPath )
  {
LABEL_32:
    DriverInitFlags = v32->DriverInitFlags;
    if ( (DriverInitFlags & 2) != 0 )
    {
LABEL_38:
      if ( (_BYTE)KdDebuggerEnabled == 1 && !(_BYTE)KdDebuggerNotPresent )
        this->m_DebuggerConnected = 1;
      if ( (v32->DriverInitFlags & 1) != 0 && !v32->EvtDriverUnload )
        WPP_IFR_SF_qZ(
          globals,
          (unsigned __int8)this->m_DriverObject.m_DriverObject,
          (unsigned int)v30,
          v31,
          Tag,
          this->m_DriverObject.m_DriverObject,
          &this->m_RegistryPath);
      return v10;
    }
    DriverExtension = this->m_DriverObject.m_DriverObject->DriverExtension;
    if ( (DriverInitFlags & 1) != 0 )
    {
      DriverExtension->AddDevice = 0LL;
      v39 = this->m_DriverObject.m_DriverObject;
      if ( !v32->EvtDriverUnload )
      {
        v39->DriverUnload = 0LL;
LABEL_36:
        v40 = 112LL;
        v30 = FxDevice::DispatchWithLock;
        v41 = 28LL;
        do
        {
          v40 += 8LL;
          *(_QWORD *)((char *)this->m_DriverObject.m_DriverObject + v40 - 8) = FxDevice::DispatchWithLock;
          --v41;
        }
        while ( v41 );
        goto LABEL_38;
      }
    }
    else
    {
      DriverExtension->AddDevice = FxDriver::AddDevice;
      v39 = this->m_DriverObject.m_DriverObject;
    }
    v39->DriverUnload = FxDriver::Unload;
    goto LABEL_36;
  }
  Length = ArgRegistryPath->Length;
  v34 = this->m_Globals;
  this->m_RegistryPath.Length = ArgRegistryPath->Length;
  v35 = (unsigned __int16)(Length + 2);
  this->m_RegistryPath.MaximumLength = Length + 2;
  v36 = (wchar_t *)FxPoolAllocator(v34, &v34->FxPoolFrameworks, 1u, v35, v34->Tag, retaddr);
  this->m_RegistryPath.Buffer = v36;
  if ( v36 )
  {
    memmove(v36, ArgRegistryPath->Buffer, ArgRegistryPath->Length);
    this->m_RegistryPath.Buffer[(v35 >> 1) - 1] = 0;
    goto LABEL_32;
  }
  *(_DWORD *)&this->m_RegistryPath.Length = 0;
  return -1073741670;
}
