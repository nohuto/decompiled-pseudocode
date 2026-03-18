/*
 * XREFs of imp_WdfDeviceAddQueryInterface @ 0x1C0033300
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001E8F4 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     memmove @ 0x1C003C440 (memmove.c)
 *     WPP_IFR_SF_qddd @ 0x1C00651D0 (WPP_IFR_SF_qddd.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C00713E0 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceAddQueryInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_QUERY_INTERFACE_CONFIG *InterfaceConfig)
{
  WDFDEVICE__ *v4; // r15
  unsigned int v5; // esi
  FxDevice *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 result; // rax
  unsigned __int8 v9; // dl
  _INTERFACE *Interface; // rbx
  unsigned __int8 SendQueryToParentStack; // r8
  FxQueryInterface *v12; // rax
  FxQueryInterface *v13; // r14
  _SINGLE_LIST_ENTRY *p_m_Entry; // r13
  _INTERFACE *v15; // rax
  FxPkgPnp *m_PkgPnp; // rdi
  _SINGLE_LIST_ENTRY *p_m_QueryInterfaceHead; // rax
  _SINGLE_LIST_ENTRY *i; // rcx
  unsigned __int16 v19; // r9
  unsigned int v20; // edx
  void *Caller; // [rsp+78h] [rbp+0h]
  FxDevice *pDevice; // [rsp+88h] [rbp+10h] BYREF

  v4 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = 0;
  v6 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    Device = LOWORD(v6->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v6 = (FxDevice *)((char *)v6 - Device);
  }
  if ( v6->m_Type == 4098 )
  {
    pDevice = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pDevice, v4, 0x1002u, Device);
    v6 = pDevice;
  }
  m_Globals = v6->m_Globals;
  if ( !InterfaceConfig )
    FxVerifierNullBugCheck(m_Globals, Caller);
  if ( !InterfaceConfig->InterfaceType )
    FxVerifierNullBugCheck(m_Globals, Caller);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    Interface = InterfaceConfig->Interface;
    if ( InterfaceConfig->Size != 48 )
    {
      v5 = -1073741820;
      WPP_IFR_SF_qddd(
        m_Globals,
        v9,
        2u,
        0xAu,
        WPP_FxQueryInterfaceAPI_cpp_Traceguids,
        v4,
        InterfaceConfig->Size,
        48,
        -1073741820);
      return v5;
    }
    SendQueryToParentStack = InterfaceConfig->SendQueryToParentStack;
    if ( SendQueryToParentStack && !FxDevice::IsPdo(pDevice) )
    {
      v5 = -1073741811;
      v19 = 11;
      goto LABEL_43;
    }
    if ( Interface || SendQueryToParentStack )
    {
      if ( !InterfaceConfig->ImportInterface )
      {
LABEL_13:
        if ( !Interface || Interface->Size >= 0x20u )
        {
          v12 = (FxQueryInterface *)FxPoolAllocator(
                                      m_Globals,
                                      &m_Globals->FxPoolFrameworks,
                                      1u,
                                      0x38uLL,
                                      m_Globals->Tag,
                                      Caller);
          v13 = v12;
          if ( !v12 )
          {
            v5 = -1073741670;
            WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xFu, WPP_FxQueryInterfaceAPI_cpp_Traceguids, v4, -1073741670);
            return v5;
          }
          p_m_Entry = &v12->m_Entry;
          v12->m_Device = pDevice;
          v12->m_Interface = 0LL;
          v12->m_ProcessRequest.m_Method = 0LL;
          v12->m_Entry.Next = 0LL;
          v12->m_EmbeddedInterface = 0;
          v12->m_SendQueryToParentStack = InterfaceConfig->SendQueryToParentStack;
          v12->m_ImportInterface = InterfaceConfig->ImportInterface;
          v12->m_ProcessRequest.m_Method = InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest;
          v12->m_InterfaceType = *InterfaceConfig->InterfaceType;
          if ( Interface )
          {
            v15 = (_INTERFACE *)FxPoolAllocator(
                                  m_Globals,
                                  &m_Globals->FxPoolFrameworks,
                                  1u,
                                  Interface->Size,
                                  m_Globals->Tag,
                                  Caller);
            v13->m_Interface = v15;
            if ( !v15 )
            {
              v5 = -1073741670;
              WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x10u, WPP_FxQueryInterfaceAPI_cpp_Traceguids, v4, -1073741670);
              FxQueryInterface::`scalar deleting destructor'(v13, v20);
              return v5;
            }
            memmove(v15, Interface, Interface->Size);
            if ( !Interface->InterfaceReference )
              v13->m_Interface->InterfaceReference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
            if ( !Interface->InterfaceDereference )
              v13->m_Interface->InterfaceDereference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
          }
          m_PkgPnp = pDevice->m_PkgPnp;
          KeEnterCriticalRegion();
          if ( KeWaitForSingleObject(&m_PkgPnp->m_QueryInterfaceLock, Executive, 0, 0, 0LL) == 258 )
            KeLeaveCriticalRegion();
          else
            m_PkgPnp->m_QueryInterfaceLock.m_OwningThread = KeGetCurrentThread();
          p_m_QueryInterfaceHead = &m_PkgPnp->m_QueryInterfaceHead;
          for ( i = m_PkgPnp->m_QueryInterfaceHead.Next; i; i = i->Next )
            p_m_QueryInterfaceHead = i;
          p_m_QueryInterfaceHead->Next = p_m_Entry;
          m_PkgPnp->m_QueryInterfaceLock.m_OwningThread = 0LL;
          KeSetEvent(&m_PkgPnp->m_QueryInterfaceLock.m_Event.m_Event, 0, 0);
          KeLeaveCriticalRegion();
          return v5;
        }
        v5 = -1073741811;
        WPP_IFR_SF_qddd(
          m_Globals,
          v9,
          2u,
          0xEu,
          WPP_FxQueryInterfaceAPI_cpp_Traceguids,
          v4,
          Interface->Size,
          32,
          -1073741811);
        return v5;
      }
    }
    else if ( !InterfaceConfig->ImportInterface )
    {
      v5 = -1073741811;
      v19 = 12;
      goto LABEL_43;
    }
    if ( !InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest )
    {
      v5 = -1073741811;
      v19 = 13;
LABEL_43:
      WPP_IFR_SF_qd(m_Globals, 2u, 2u, v19, WPP_FxQueryInterfaceAPI_cpp_Traceguids, v4, -1073741811);
      return v5;
    }
    goto LABEL_13;
  }
  return result;
}
