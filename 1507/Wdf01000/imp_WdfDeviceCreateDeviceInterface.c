/*
 * XREFs of imp_WdfDeviceCreateDeviceInterface @ 0x1C0028620
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00105B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C007F908 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateDeviceInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString)
{
  WDFDEVICE__ *v6; // rbp
  FxDevice *v7; // rcx
  char v8; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxDeviceInterface *v10; // rbx
  int v11; // esi
  FxPkgPnp *m_PkgPnp; // rbp
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _UNICODE_STRING *p_m_ReferenceString; // r8
  _SINGLE_LIST_ENTRY *p_m_DeviceInterfaceHead; // rcx
  _SINGLE_LIST_ENTRY *i; // rax
  unsigned int v17; // edx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int16 v22; // r9
  FxDevice *pDevice; // [rsp+50h] [rbp-28h] BYREF
  _LIST_ENTRY *Caller; // [rsp+78h] [rbp+0h]
  int v25; // [rsp+88h] [rbp+10h] BYREF

  v6 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v7 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  v8 = Device & 7;
  LOWORD(Device) = 0;
  if ( (v8 & 1) != 0 )
  {
    Device = LOWORD(v7->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v7 = (FxDevice *)((char *)v7 - Device);
  }
  if ( v7->m_Type == 4098 )
  {
    pDevice = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pDevice, v6, 0x1002u, Device);
    v7 = pDevice;
  }
  m_Globals = v7->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(v7->m_Globals, Caller);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v25 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v25,
        m_Globals->Public.DriverName,
        (const char *)&v25);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  if ( !ReferenceString )
    goto LABEL_9;
  Length = ReferenceString->Length;
  if ( (ReferenceString->Length & 1) != 0 )
  {
    _a2 = Length;
    v22 = 13;
LABEL_44:
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v22, WPP_FxValidateFunctions_hpp_Traceguids_0, ReferenceString, _a2, -1073741811);
    return 3221225485LL;
  }
  LOWORD(_a2) = ReferenceString->MaximumLength;
  if ( (_a2 & 1) != 0 )
  {
    _a2 = (unsigned __int16)_a2;
    v22 = 14;
    goto LABEL_44;
  }
  if ( (_WORD)_a2 && !ReferenceString->Buffer )
  {
    _a2 = (unsigned __int16)_a2;
    v22 = 15;
    goto LABEL_44;
  }
  if ( Length > (unsigned __int16)_a2 )
  {
    WPP_IFR_SF_qddd(
      m_Globals,
      Length,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      ReferenceString,
      Length,
      (unsigned __int16)_a2,
      -1073741811);
    return 3221225485LL;
  }
LABEL_9:
  if ( v7->m_Legacy )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xAu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, v6, -1073741808);
    return 3221225488LL;
  }
  v10 = (FxDeviceInterface *)FxPoolAllocator(
                               m_Globals,
                               (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                               1u,
                               0x40uLL,
                               m_Globals->Tag,
                               Caller);
  if ( v10 )
  {
    *(_QWORD *)&v10->m_InterfaceClassGUID.Data1 = 0LL;
    *(_QWORD *)v10->m_InterfaceClassGUID.Data4 = 0LL;
    *(_QWORD *)&v10->m_SymbolicLinkName.Length = 0LL;
    v10->m_SymbolicLinkName.Buffer = 0LL;
    *(_QWORD *)&v10->m_ReferenceString.Length = 0LL;
    v10->m_ReferenceString.Buffer = 0LL;
    v10->m_Entry.Next = 0LL;
    v10->m_State = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v10->m_InterfaceClassGUID = *InterfaceClassGUID;
    if ( ReferenceString )
      v11 = FxDuplicateUnicodeString(m_Globals, ReferenceString, &v10->m_ReferenceString);
    else
      v11 = 0;
    if ( v11 < 0 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xCu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, v6, v11);
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
        if ( v10->m_ReferenceString.Length )
          p_m_ReferenceString = &v10->m_ReferenceString;
        v11 = IoRegisterDeviceInterface(
                m_DeviceObject,
                &v10->m_InterfaceClassGUID,
                p_m_ReferenceString,
                &v10->m_SymbolicLinkName);
      }
      else
      {
        v11 = 0;
      }
      if ( v11 >= 0 )
      {
        p_m_DeviceInterfaceHead = &m_PkgPnp->m_DeviceInterfaceHead;
        for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
          p_m_DeviceInterfaceHead = i;
        p_m_DeviceInterfaceHead->Next = &v10->m_Entry;
      }
      m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = 0LL;
      KeSetEvent(&m_PkgPnp->m_DeviceInterfaceLock.m_Event.m_Event, 0, 0);
      KeLeaveCriticalRegion();
    }
    if ( v11 < 0 )
      FxDeviceInterface::`scalar deleting destructor'(v10, v17);
    return (unsigned int)v11;
  }
  else
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xBu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, v6, -1073741670);
    return 3221225626LL;
  }
}
