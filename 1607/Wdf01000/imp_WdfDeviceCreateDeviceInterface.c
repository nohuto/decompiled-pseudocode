/*
 * XREFs of imp_WdfDeviceCreateDeviceInterface @ 0x1C0033E10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0002388 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00170D0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C007F0F8 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateDeviceInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 result; // rax
  FxDeviceInterface *v9; // rbx
  int v10; // edi
  FxPkgPnp *m_PkgPnp; // rbp
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _UNICODE_STRING *p_m_ReferenceString; // r8
  _SINGLE_LIST_ENTRY *p_m_DeviceInterfaceHead; // rcx
  _SINGLE_LIST_ENTRY *i; // rax
  unsigned int v16; // edx
  unsigned int _a2; // ebx
  unsigned __int16 v18; // r9
  void *Caller; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(m_Globals, Caller);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( !ReferenceString || (result = FxValidateUnicodeString(m_Globals, ReferenceString), (int)result >= 0) )
    {
      if ( pDevice->m_Legacy )
      {
        _a2 = -1073741808;
        v18 = 10;
      }
      else
      {
        v9 = (FxDeviceInterface *)FxPoolAllocator(
                                    m_Globals,
                                    &m_Globals->FxPoolFrameworks,
                                    1u,
                                    0x40uLL,
                                    m_Globals->Tag,
                                    Caller);
        if ( v9 )
        {
          *(_QWORD *)&v9->m_InterfaceClassGUID.Data1 = 0LL;
          *(_QWORD *)v9->m_InterfaceClassGUID.Data4 = 0LL;
          *(_QWORD *)&v9->m_SymbolicLinkName.Length = 0LL;
          v9->m_SymbolicLinkName.Buffer = 0LL;
          *(_QWORD *)&v9->m_ReferenceString.Length = 0LL;
          v9->m_ReferenceString.Buffer = 0LL;
          v9->m_Entry.Next = 0LL;
          v9->m_State = 0;
        }
        else
        {
          v9 = 0LL;
        }
        if ( v9 )
        {
          v9->m_InterfaceClassGUID = *InterfaceClassGUID;
          if ( ReferenceString )
            v10 = FxDuplicateUnicodeString(m_Globals, ReferenceString, &v9->m_ReferenceString);
          else
            v10 = 0;
          if ( v10 < 0 )
          {
            WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xCu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, v10);
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
              p_m_ReferenceString = 0LL;
              if ( v9->m_ReferenceString.Length )
                p_m_ReferenceString = &v9->m_ReferenceString;
              v10 = IoRegisterDeviceInterface(
                      m_DeviceObject,
                      &v9->m_InterfaceClassGUID,
                      p_m_ReferenceString,
                      &v9->m_SymbolicLinkName);
            }
            else
            {
              v10 = 0;
            }
            if ( v10 >= 0 )
            {
              p_m_DeviceInterfaceHead = &m_PkgPnp->m_DeviceInterfaceHead;
              for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
                p_m_DeviceInterfaceHead = i;
              p_m_DeviceInterfaceHead->Next = &v9->m_Entry;
            }
            m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = 0LL;
            KeSetEvent(&m_PkgPnp->m_DeviceInterfaceLock.m_Event.m_Event, 0, 0);
            KeLeaveCriticalRegion();
          }
          if ( v10 < 0 )
            FxDeviceInterface::`scalar deleting destructor'(v9, v16);
          return (unsigned int)v10;
        }
        _a2 = -1073741670;
        v18 = 11;
      }
      WPP_IFR_SF_qd(m_Globals, 2u, 2u, v18, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, _a2);
      return _a2;
    }
  }
  return result;
}
