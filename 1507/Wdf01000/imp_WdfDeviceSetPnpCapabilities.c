/*
 * XREFs of imp_WdfDeviceSetPnpCapabilities @ 0x1C002B500
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPnpCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_PNP_CAPABILITIES@@@Z @ 0x1C001AC64 (-SetPnpCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_PNP_CAPABILITIES@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qsd @ 0x1C00705B8 (WPP_IFR_SF_qsd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceSetPnpCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_DEVICE_PNP_CAPABILITIES *PnpCapabilities)
{
  WDFDEVICE__ *_a1; // rdi
  FxDevice *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int v7; // edx
  unsigned __int8 *i; // r8
  __int64 v9; // r9
  const _GUID *Offset; // [rsp+20h] [rbp-38h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v12; // [rsp+68h] [rbp+10h] BYREF
  FxDevice *pDevice; // [rsp+78h] [rbp+20h] BYREF

  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDevice *)((char *)v5 - Device);
  }
  if ( v5->m_Type == 4098 )
  {
    pDevice = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDevice, _a1, 0x1002u, Device);
    v5 = pDevice;
  }
  m_Globals = v5->m_Globals;
  if ( !PnpCapabilities )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( PnpCapabilities->Size == 48 )
  {
    v7 = 0;
    for ( i = &offsets_0[0].Offset; ; i += 16 )
    {
      v9 = *i;
      if ( (unsigned __int64)(v9 + 4) > 0x30 )
        break;
      if ( *(unsigned int *)((char *)&PnpCapabilities->Size + v9) > 2 )
      {
        WPP_IFR_SF_qsd(
          m_Globals,
          v7,
          (unsigned int)i,
          0x28u,
          Offset,
          _a1,
          offsets_0[v7].Name,
          *(unsigned int *)((char *)&PnpCapabilities->Size + v9));
        goto LABEL_19;
      }
      if ( (unsigned int)++v7 >= 9 )
      {
        FxPkgPnp::SetPnpCaps(v5->m_PkgPnp, PnpCapabilities);
        return;
      }
    }
  }
  else
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x12u, 0x27u, WPP_FxDeviceApi_cpp_Traceguids, _a1, PnpCapabilities->Size, 48);
LABEL_19:
    v12 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v12,
      m_Globals->Public.DriverName,
      (const char *)&v12);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
