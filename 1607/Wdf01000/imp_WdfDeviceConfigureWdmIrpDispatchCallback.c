/*
 * XREFs of imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x1C0073640
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_cd @ 0x1C0072E68 (WPP_IFR_SF_cd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C008F8EC (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 */

__int64 __fastcall imp_WdfDeviceConfigureWdmIrpDispatchCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFDRIVER__ *Driver,
        unsigned __int8 MajorFunction,
        int (__fastcall *EvtDeviceWdmIrpDispatch)(WDFDEVICE__ *, unsigned __int8, unsigned __int8, unsigned int, void *, _IRP *, void *),
        void *DriverContext)
{
  _LIST_ENTRY *Flink; // rbx
  unsigned __int8 v9; // dl
  FxDevice *_a1; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int v12; // ebx
  unsigned __int16 v13; // r9
  FxDriver *pDriver; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  pDevice = 0LL;
  Flink = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  _a1 = pDevice;
  m_Globals = pDevice->m_Globals;
  if ( MajorFunction < 3u || MajorFunction > 4u && (unsigned __int8)(MajorFunction - 14) > 1u )
  {
    v12 = -1073741811;
    WPP_IFR_SF_cd(m_Globals, v9, 0xCu, 0x3Bu, WPP_FxDeviceApi_cpp_Traceguids, MajorFunction);
    return v12;
  }
  if ( Driver )
  {
    FxObjectHandleGetPtr(pDevice->m_Globals, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
    _a1 = pDevice;
    Flink = pDevice->m_CxDeviceInfoListHead.Flink;
    if ( Flink == &pDevice->m_CxDeviceInfoListHead )
    {
LABEL_8:
      Flink = 0LL;
    }
    else
    {
      while ( (FxDriver *)Flink[1].Flink != pDriver )
      {
        Flink = Flink->Flink;
        if ( Flink == &pDevice->m_CxDeviceInfoListHead )
          goto LABEL_8;
      }
    }
  }
  if ( !EvtDeviceWdmIrpDispatch )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !_a1->m_Legacy )
  {
    if ( _a1->m_CurrentPnpState != WdfDevStatePnpInit )
    {
      v12 = -1073741436;
      v13 = 61;
      goto LABEL_14;
    }
    return (unsigned int)FxPkgIo::ConfigureDynamicDispatching(
                           _a1->m_PkgIo,
                           MajorFunction,
                           (FxCxDeviceInfo *)Flink,
                           EvtDeviceWdmIrpDispatch,
                           DriverContext);
  }
  if ( (_a1->m_DeviceObject.m_DeviceObject->Flags & 0x80u) != 0 )
    return (unsigned int)FxPkgIo::ConfigureDynamicDispatching(
                           _a1->m_PkgIo,
                           MajorFunction,
                           (FxCxDeviceInfo *)Flink,
                           EvtDeviceWdmIrpDispatch,
                           DriverContext);
  v12 = -1073741436;
  v13 = 60;
LABEL_14:
  WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, v13, WPP_FxDeviceApi_cpp_Traceguids, _a1, -1073741436);
  return v12;
}
