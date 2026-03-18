/*
 * XREFs of imp_WdfDeviceAddQueryInterface @ 0x1C0027C60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C006AAF0 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
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
  _INTERFACE *Interface; // rbx
  unsigned __int8 SendQueryToParentStack; // al
  FxQueryInterface *v10; // rax
  FxQueryInterface *v11; // r14
  _SINGLE_LIST_ENTRY *p_m_Entry; // r13
  _INTERFACE *v13; // rax
  FxPkgPnp *m_PkgPnp; // rdi
  _SINGLE_LIST_ENTRY *p_m_QueryInterfaceHead; // rax
  _SINGLE_LIST_ENTRY *i; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v19; // r9
  unsigned int v20; // edx
  _LIST_ENTRY *Caller; // [rsp+88h] [rbp+0h]
  int v22; // [rsp+98h] [rbp+10h] BYREF
  FxDevice *pDevice; // [rsp+A8h] [rbp+20h] BYREF

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
    FxVerifierNullBugCheck(v6->m_Globals, Caller);
  if ( !InterfaceConfig->InterfaceType )
    FxVerifierNullBugCheck(v6->m_Globals, Caller);
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    Interface = InterfaceConfig->Interface;
    if ( InterfaceConfig->Size != 48 )
    {
      v5 = -1073741820;
      WPP_IFR_SF_qddd(
        m_Globals,
        Device,
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
    if ( SendQueryToParentStack )
    {
      Device = (unsigned __int64)v6->m_PkgPnp;
      if ( !Device || *(_WORD *)(Device + 8) != 4354 )
      {
        v5 = -1073741811;
        v19 = 11;
        goto LABEL_48;
      }
    }
    if ( Interface || SendQueryToParentStack )
    {
      if ( !InterfaceConfig->ImportInterface )
      {
LABEL_13:
        if ( !Interface || Interface->Size >= 0x20u )
        {
          v10 = (FxQueryInterface *)FxPoolAllocator(
                                      m_Globals,
                                      (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                                      1u,
                                      0x38uLL,
                                      m_Globals->Tag,
                                      Caller);
          v11 = v10;
          if ( !v10 )
          {
            v5 = -1073741670;
            WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xFu, WPP_FxQueryInterfaceAPI_cpp_Traceguids, v4, -1073741670);
            return v5;
          }
          p_m_Entry = &v10->m_Entry;
          v10->m_Device = pDevice;
          v10->m_Interface = 0LL;
          v10->m_ProcessRequest.m_Method = 0LL;
          v10->m_Entry.Next = 0LL;
          v10->m_EmbeddedInterface = 0;
          v10->m_SendQueryToParentStack = InterfaceConfig->SendQueryToParentStack;
          v10->m_ImportInterface = InterfaceConfig->ImportInterface;
          v10->m_ProcessRequest.m_Method = InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest;
          v10->m_InterfaceType = *InterfaceConfig->InterfaceType;
          if ( Interface )
          {
            v13 = (_INTERFACE *)FxPoolAllocator(
                                  m_Globals,
                                  (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                                  1u,
                                  Interface->Size,
                                  m_Globals->Tag,
                                  Caller);
            v11->m_Interface = v13;
            if ( !v13 )
            {
              v5 = -1073741670;
              WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x10u, WPP_FxQueryInterfaceAPI_cpp_Traceguids, v4, -1073741670);
              FxQueryInterface::`scalar deleting destructor'(v11, v20);
              return v5;
            }
            memmove(v13, Interface, Interface->Size);
            if ( !Interface->InterfaceReference )
              v11->m_Interface->InterfaceReference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
            if ( !Interface->InterfaceDereference )
              v11->m_Interface->InterfaceDereference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
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
          Device,
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
      goto LABEL_48;
    }
    if ( !InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest )
    {
      v5 = -1073741811;
      v19 = 13;
LABEL_48:
      WPP_IFR_SF_qd(m_Globals, 2u, 2u, v19, WPP_FxQueryInterfaceAPI_cpp_Traceguids, v4, -1073741811);
      return v5;
    }
    goto LABEL_13;
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  v22 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)&v22,
    m_Globals->Public.DriverName,
    (const char *)&v22);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 3221225488LL;
}
