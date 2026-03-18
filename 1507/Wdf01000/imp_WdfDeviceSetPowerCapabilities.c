/*
 * XREFs of imp_WdfDeviceSetPowerCapabilities @ 0x1C002B220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?SetPowerCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_POWER_CAPABILITIES@@@Z @ 0x1C001AE10 (-SetPowerCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_POWER_CAPABILITIES@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qsd @ 0x1C00705B8 (WPP_IFR_SF_qsd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceSetPowerCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_DEVICE_POWER_CAPABILITIES *PowerCapabilities)
{
  WDFDEVICE__ *_a1; // rsi
  FxDevice *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int v7; // edx
  unsigned __int8 *p_Offset; // r8
  __int64 v9; // r9
  unsigned int v10; // edx
  _DEVICE_POWER_STATE *DeviceState; // rax
  unsigned int _a2; // eax
  FxPkgPnp *m_PkgPnp; // rcx
  _DEVICE_POWER_STATE IdealDxStateForSx; // edx
  unsigned __int16 v15; // r9
  const _GUID *Offset; // [rsp+20h] [rbp-20h]
  void *retaddr; // [rsp+58h] [rbp+18h]
  int v18; // [rsp+68h] [rbp+28h] BYREF
  FxDevice *pDevice; // [rsp+78h] [rbp+38h] BYREF

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
  if ( !PowerCapabilities )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( PowerCapabilities->Size == 80 )
  {
    v7 = 0;
    p_Offset = &offsets[0].Offset;
    do
    {
      v9 = *p_Offset;
      if ( (unsigned __int64)(v9 + 4) > 0x50 )
        return;
      if ( *(unsigned int *)((char *)&PowerCapabilities->Size + v9) > 2 )
      {
        WPP_IFR_SF_qsd(
          m_Globals,
          v7,
          (unsigned int)p_Offset,
          0x2Au,
          Offset,
          _a1,
          offsets[v7].Name,
          *(unsigned int *)((char *)&PowerCapabilities->Size + v9));
        goto LABEL_34;
      }
      ++v7;
      p_Offset += 16;
    }
    while ( v7 < 6 );
    v10 = 0;
    DeviceState = PowerCapabilities->DeviceState;
    do
    {
      if ( *DeviceState > (unsigned int)PowerDeviceMaximum )
      {
        WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x2Bu, WPP_FxDeviceApi_cpp_Traceguids, _a1);
        goto LABEL_34;
      }
      ++v10;
      ++DeviceState;
    }
    while ( v10 < 7 );
    _a2 = PowerCapabilities->DeviceWake;
    if ( _a2 > 5 )
    {
      v15 = 44;
    }
    else
    {
      _a2 = PowerCapabilities->SystemWake;
      if ( _a2 > 7 )
      {
        v15 = 45;
      }
      else
      {
        m_PkgPnp = v5->m_PkgPnp;
        if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner || (_a2 = PowerCapabilities->IdealDxStateForSx, _a2 == 5) )
        {
          IdealDxStateForSx = PowerCapabilities->IdealDxStateForSx;
          if ( (unsigned int)(IdealDxStateForSx - 2) <= 3 )
          {
            FxPkgPnp::SetPowerCaps(m_PkgPnp, PowerCapabilities);
            return;
          }
          WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x2Fu, WPP_FxDeviceApi_cpp_Traceguids, _a1, IdealDxStateForSx);
          goto LABEL_34;
        }
        v15 = 46;
      }
    }
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, v15, WPP_FxDeviceApi_cpp_Traceguids, _a1, _a2);
    goto LABEL_34;
  }
  WPP_IFR_SF_qdd(m_Globals, 2u, 0x12u, 0x29u, WPP_FxDeviceApi_cpp_Traceguids, _a1, PowerCapabilities->Size, 80);
LABEL_34:
  v18 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)&v18,
    m_Globals->Public.DriverName,
    (const char *)&v18);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
