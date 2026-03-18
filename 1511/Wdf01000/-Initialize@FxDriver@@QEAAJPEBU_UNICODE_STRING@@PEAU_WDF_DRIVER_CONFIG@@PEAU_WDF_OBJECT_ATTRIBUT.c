/*
 * XREFs of ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001FA50
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0020270 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ConfigureConstraints@FxDriver@@QEAAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001FDFC (-ConfigureConstraints@FxDriver@@QEAAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0020120 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     WPP_IFR_SF_qZ @ 0x1C006BE28 (WPP_IFR_SF_qZ.c)
 */

NTSTATUS __fastcall FxDriver::Initialize(
        FxDriver *this,
        const _UNICODE_STRING *ArgRegistryPath,
        _WDF_DRIVER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  KIRQL v9; // al
  _DRIVER_OBJECT *m_DriverObject; // rdx
  NTSTATUS result; // eax
  __int64 (__fastcall *v12)(_DEVICE_OBJECT *, _IRP *); // r8
  unsigned __int16 v13; // r9
  int v14; // edi
  unsigned __int16 Length; // ax
  _FX_DRIVER_GLOBALS *v16; // rcx
  SIZE_T v17; // rbx
  unsigned __int16 *v18; // rax
  unsigned int DriverInitFlags; // eax
  _DRIVER_EXTENSION *DriverExtension; // rcx
  _DRIVER_OBJECT *v21; // rax
  unsigned __int8 v22; // dl
  __int64 v23; // rax
  const _GUID *Tag; // [rsp+20h] [rbp-38h]
  void *Caller; // [rsp+58h] [rbp+0h]
  PVOID DriverObjectExtension; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v9 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  this->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v9);
  this->m_ObjectFlags |= 0x800u;
  FxDriver::ConfigureConstraints(this, DriverAttributes);
  m_DriverObject = this->m_DriverObject.m_DriverObject;
  if ( !m_DriverObject )
    return -1073741823;
  result = FxDisposeList::_Create(m_Globals, m_DriverObject, &this->m_DisposeList);
  if ( result >= 0 )
  {
    result = IoAllocateDriverObjectExtension(
               this->m_DriverObject.m_DriverObject,
               FxDriver::GetFxDriver,
               8u,
               &DriverObjectExtension);
    if ( result >= 0 )
    {
      v14 = 0;
      *(_QWORD *)DriverObjectExtension = this;
      if ( (Config->DriverInitFlags & 2) == 0 )
      {
        this->m_DriverDeviceAdd.Method = Config->EvtDriverDeviceAdd;
        this->m_DriverUnload.Method = Config->EvtDriverUnload;
      }
      if ( ArgRegistryPath )
      {
        Length = ArgRegistryPath->Length;
        v16 = this->m_Globals;
        this->m_RegistryPath.Length = ArgRegistryPath->Length;
        v17 = (unsigned __int16)(Length + 2);
        this->m_RegistryPath.MaximumLength = Length + 2;
        v18 = (unsigned __int16 *)FxPoolAllocator(v16, &v16->FxPoolFrameworks, 1u, v17, v16->Tag, Caller);
        this->m_RegistryPath.Buffer = v18;
        if ( !v18 )
        {
          *(_DWORD *)&this->m_RegistryPath.Length = 0;
          return -1073741670;
        }
        memmove(v18, ArgRegistryPath->Buffer, ArgRegistryPath->Length);
        this->m_RegistryPath.Buffer[(v17 >> 1) - 1] = 0;
      }
      DriverInitFlags = Config->DriverInitFlags;
      if ( (DriverInitFlags & 2) != 0 )
      {
LABEL_15:
        if ( (_BYTE)KdDebuggerEnabled == 1 && !(_BYTE)KdDebuggerNotPresent )
          this->m_DebuggerConnected = 1;
        if ( (Config->DriverInitFlags & 1) != 0 && !Config->EvtDriverUnload )
          WPP_IFR_SF_qZ(
            m_Globals,
            (unsigned __int8)this->m_DriverObject.m_DriverObject,
            (unsigned int)v12,
            v13,
            Tag,
            this->m_DriverObject.m_DriverObject,
            &this->m_RegistryPath);
        return v14;
      }
      DriverExtension = this->m_DriverObject.m_DriverObject->DriverExtension;
      if ( (DriverInitFlags & 1) != 0 )
      {
        DriverExtension->AddDevice = 0LL;
        v21 = this->m_DriverObject.m_DriverObject;
        if ( !Config->EvtDriverUnload )
        {
          v21->DriverUnload = 0LL;
LABEL_13:
          v22 = 0;
          v12 = FxDevice::DispatchWithLock;
          v23 = 112LL;
          do
          {
            v23 += 8LL;
            ++v22;
            *(_QWORD *)((char *)this->m_DriverObject.m_DriverObject + v23 - 8) = FxDevice::DispatchWithLock;
          }
          while ( v22 <= 0x1Bu );
          goto LABEL_15;
        }
      }
      else
      {
        DriverExtension->AddDevice = FxDriver::AddDevice;
        v21 = this->m_DriverObject.m_DriverObject;
      }
      v21->DriverUnload = FxDriver::Unload;
      goto LABEL_13;
    }
  }
  return result;
}
