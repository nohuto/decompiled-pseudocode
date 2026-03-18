/*
 * XREFs of imp_WdfDeviceCreateDeviceInterface @ 0x1C0037B00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000307C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00306B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C00835BC (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateDeviceInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString)
{
  __int64 v7; // rdx
  FxDevice *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  FxDeviceInterface *v11; // rsi
  _UNICODE_STRING *p_m_ReferenceString; // r14
  FxPkgPnp *m_PkgPnp; // rbp
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  NTSTATUS v15; // ebx
  _SINGLE_LIST_ENTRY *p_m_DeviceInterfaceHead; // rax
  _SINGLE_LIST_ENTRY *i; // rcx
  unsigned int v18; // edx
  int _a2; // eax
  void *Caller; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+78h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v7) = 0;
  v8 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v7 = LOWORD(v8->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v8 = (FxDevice *)((char *)v8 - v7);
  }
  if ( v8->m_Type == 4098 )
  {
    pDevice = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pDevice, (void *)Device, 0x1002u, v7);
    v8 = pDevice;
  }
  m_Globals = v8->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(m_Globals, Caller);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( !ReferenceString || (result = FxValidateUnicodeString(m_Globals, ReferenceString), (int)result >= 0) )
    {
      if ( pDevice->m_Legacy )
      {
        WPP_IFR_SF_qd(
          m_Globals,
          2u,
          2u,
          0xAu,
          WPP_FxDeviceInterfaceAPI_cpp_Traceguids,
          (const void *)Device,
          -1073741808);
        return 3221225488LL;
      }
      else
      {
        v11 = (FxDeviceInterface *)FxPoolAllocator(
                                     m_Globals,
                                     &m_Globals->FxPoolFrameworks,
                                     1u,
                                     0x40uLL,
                                     m_Globals->Tag,
                                     Caller);
        if ( v11 )
        {
          *(_QWORD *)&v11->m_InterfaceClassGUID.Data1 = 0LL;
          *(_QWORD *)v11->m_InterfaceClassGUID.Data4 = 0LL;
          *(_QWORD *)&v11->m_SymbolicLinkName.Length = 0LL;
          v11->m_SymbolicLinkName.Buffer = 0LL;
          *(_QWORD *)&v11->m_ReferenceString.Length = 0LL;
          v11->m_ReferenceString.Buffer = 0LL;
          v11->m_Entry.Next = 0LL;
          v11->m_State = 0;
          p_m_ReferenceString = &v11->m_ReferenceString;
          v11->m_InterfaceClassGUID = *InterfaceClassGUID;
          if ( ReferenceString
            && (_a2 = FxDuplicateUnicodeString(m_Globals, ReferenceString, &v11->m_ReferenceString), v15 = _a2, _a2 < 0) )
          {
            WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xCu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, (const void *)Device, _a2);
          }
          else
          {
            m_PkgPnp = pDevice->m_PkgPnp;
            KeEnterCriticalRegion();
            if ( KeWaitForSingleObject(&m_PkgPnp->m_DeviceInterfaceLock, Executive, 0, 0, 0LL) == 258 )
              KeLeaveCriticalRegion();
            else
              m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = KeGetCurrentThread();
            if ( pDevice->m_PdoKnown && (m_DeviceObject = pDevice->m_PhysicalDevice.FxDeviceBase::m_DeviceObject) != 0LL )
            {
              if ( !p_m_ReferenceString->Length )
                p_m_ReferenceString = 0LL;
              v15 = IoRegisterDeviceInterface(
                      m_DeviceObject,
                      &v11->m_InterfaceClassGUID,
                      p_m_ReferenceString,
                      &v11->m_SymbolicLinkName);
            }
            else
            {
              v15 = 0;
            }
            if ( v15 >= 0 )
            {
              p_m_DeviceInterfaceHead = &m_PkgPnp->m_DeviceInterfaceHead;
              for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
                p_m_DeviceInterfaceHead = i;
              p_m_DeviceInterfaceHead->Next = &v11->m_Entry;
            }
            m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = 0LL;
            KeSetEvent(&m_PkgPnp->m_DeviceInterfaceLock.m_Event.m_Event, 0, 0);
            KeLeaveCriticalRegion();
          }
          if ( v15 < 0 )
            FxDeviceInterface::`scalar deleting destructor'(v11, v18);
          return (unsigned int)v15;
        }
        else
        {
          WPP_IFR_SF_qd(
            m_Globals,
            2u,
            2u,
            0xBu,
            WPP_FxDeviceInterfaceAPI_cpp_Traceguids,
            (const void *)Device,
            -1073741670);
          return 3221225626LL;
        }
      }
    }
  }
  return result;
}
