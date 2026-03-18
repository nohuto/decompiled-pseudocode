/*
 * XREFs of imp_WdfDeviceSetSpecialFileSupport @ 0x1C001E990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?_SpecialTypeToUsage@FxPkgPnp@@KA?AW4_DEVICE_USAGE_NOTIFICATION_TYPE@@W4_WDF_SPECIAL_FILE_TYPE@@@Z @ 0x1C001E968 (-_SpecialTypeToUsage@FxPkgPnp@@KA-AW4_DEVICE_USAGE_NOTIFICATION_TYPE@@W4_WDF_SPECIAL_FILE_TYPE@@.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_D @ 0x1C00659E0 (WPP_IFR_SF_D.c)
 */

void __fastcall imp_WdfDeviceSetSpecialFileSupport(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int32 FileType,
        unsigned __int8 Supported)
{
  __int64 Offset; // rbp
  unsigned __int64 v7; // r14
  char v8; // r12
  FxDevice *v9; // rbx
  FxDevice *v10; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  int v12; // eax
  __int64 v13; // rdx
  FxDevice *pDevice[2]; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+88h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  v7 = Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v8 = Device & 7;
  v9 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  v10 = (FxDevice *)(~v7 & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (v7 & 1) != 0 )
  {
    Device = LOWORD(v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v10 = (FxDevice *)((char *)v10 - Device);
  }
  if ( v10->m_Type == 4098 )
  {
    pDevice[0] = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, (void **)pDevice, (void *)v7, 0x1002u, Device);
    v10 = pDevice[0];
  }
  m_Globals = v10->m_Globals;
  if ( FileType - 1 > 3 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x17u, WPP_FxDeviceApiKm_cpp_Traceguids, (const void *)v7, FileType);
    v15 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v15,
      m_Globals->Public.DriverName,
      (const char *)&v15);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    if ( (v8 & 1) != 0 )
    {
      Offset = LOWORD(v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
      v9 = (FxDevice *)((char *)v9 - Offset);
    }
    if ( v9->m_Type == 4098 )
    {
      pDevice[0] = v9;
    }
    else
    {
      FxObjectHandleGetPtrQI(v9, (void **)pDevice, (void *)v7, 0x1002u, Offset);
      v9 = pDevice[0];
    }
    if ( FileType - 1 > 3 )
    {
      WPP_IFR_SF_D(
        v9->m_PkgPnp->m_Globals,
        (unsigned __int8)v9->m_PkgPnp,
        0xCu,
        0x21u,
        WPP_FxPkgPnp_cpp_Traceguids,
        FileType);
    }
    else
    {
      v12 = FxPkgPnp::_SpecialTypeToUsage((_WDF_SPECIAL_FILE_TYPE)FileType);
      *(_BYTE *)((unsigned int)(v12 - 1) + v13 + 273) = Supported;
    }
  }
}
