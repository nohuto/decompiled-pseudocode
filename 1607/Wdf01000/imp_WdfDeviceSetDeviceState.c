/*
 * XREFs of imp_WdfDeviceSetDeviceState @ 0x1C0073EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001E914 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qsd @ 0x1C00730D4 (WPP_IFR_SF_qsd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?SetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z @ 0x1C0097D90 (-SetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z.c)
 */

void __fastcall imp_WdfDeviceSetDeviceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_STATE *DeviceState)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v6; // edx
  unsigned __int8 *i; // r8
  __int64 v8; // r9
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !DeviceState )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( DeviceState->Size == 28 )
  {
    v6 = 0;
    for ( i = &offsets_1[0].Offset; ; i += 16 )
    {
      v8 = *i;
      if ( (unsigned __int64)(v8 + 4) > 0x1C )
        break;
      if ( *(unsigned int *)((char *)&DeviceState->Size + v8) > 2 )
      {
        WPP_IFR_SF_qsd(
          m_Globals,
          v6,
          (unsigned int)i,
          0x18u,
          traceGuid,
          Device,
          offsets_1[v6].Name,
          *(unsigned int *)((char *)&DeviceState->Size + v8));
        goto LABEL_12;
      }
      if ( (unsigned int)++v6 >= 6 )
      {
        FxPkgPnp::SetPnpState(pDevice->m_PkgPnp, DeviceState);
        SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(pDevice);
        if ( SafePhysicalDevice )
          IoInvalidateDeviceState(SafePhysicalDevice);
        return;
      }
    }
  }
  else
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x12u, 0x17u, WPP_FxDeviceApi_cpp_Traceguids, Device, DeviceState->Size, 28);
LABEL_12:
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
