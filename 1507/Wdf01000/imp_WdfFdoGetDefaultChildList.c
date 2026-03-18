/*
 * XREFs of imp_WdfFdoGetDefaultChildList @ 0x1C002E240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

WDFCHILDLIST__ *__fastcall imp_WdfFdoGetDefaultChildList(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Fdo)
{
  WDFDEVICE__ *_a1; // rbx
  FxDevice *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxPkgPnp *m_PkgPnp; // rax
  FxPkgPnp_vtbl *v6; // rax
  int v8; // [rsp+48h] [rbp+10h] BYREF
  FxDevice *pDevice; // [rsp+50h] [rbp+18h] BYREF

  _a1 = (WDFDEVICE__ *)Fdo;
  if ( !Fdo )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v3 = (FxDevice *)(~Fdo & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Fdo) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Fdo = LOWORD(v3->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v3 = (FxDevice *)((char *)v3 - Fdo);
  }
  if ( v3->m_Type == 4098 )
  {
    pDevice = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pDevice, _a1, 0x1002u, Fdo);
    v3 = pDevice;
  }
  m_Globals = v3->m_Globals;
  if ( v3->m_Legacy || (m_PkgPnp = v3->m_PkgPnp, m_PkgPnp->m_Type != 4353) )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x11u, WPP_FxDeviceFdoAPI_cpp_Traceguids, _a1);
    v8 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v8,
      m_Globals->Public.DriverName,
      (const char *)&v8);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 0LL;
  }
  v6 = m_PkgPnp[1].__vftable;
  if ( !v6 )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x12u, WPP_FxDeviceFdoAPI_cpp_Traceguids, _a1);
    return 0LL;
  }
  if ( WORD1(v6->~FxObject) )
    return (WDFCHILDLIST__ *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
