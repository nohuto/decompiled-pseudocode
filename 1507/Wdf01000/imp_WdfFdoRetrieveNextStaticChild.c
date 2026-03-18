/*
 * XREFs of imp_WdfFdoRetrieveNextStaticChild @ 0x1C0007E30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z @ 0x1C0007F14 (-GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_D @ 0x1C00659E0 (WPP_IFR_SF_D.c)
 */

WDFDEVICE__ *__fastcall imp_WdfFdoRetrieveNextStaticChild(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Fdo,
        WDFDEVICE__ *PreviousChild,
        unsigned int Flags)
{
  WDFDEVICE__ *_a1; // rdi
  FxDevice *v7; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxPkgPnp *m_PkgPnp; // rcx
  FxDevice *pDevice; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF

  _a1 = (WDFDEVICE__ *)Fdo;
  if ( !Fdo )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v7 = (FxDevice *)(~Fdo & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Fdo) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Fdo = LOWORD(v7->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v7 = (FxDevice *)((char *)v7 - Fdo);
  }
  if ( v7->m_Type == 4098 )
  {
    pDevice = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pDevice, _a1, 0x1002u, Fdo);
    v7 = pDevice;
  }
  m_Globals = v7->m_Globals;
  if ( !Flags || (Flags & 0xFFFFFFF8) != 0 )
  {
    WPP_IFR_SF_D(m_Globals, Fdo, 0x12u, 0xDu, WPP_FxDeviceFdoAPI_cpp_Traceguids, Flags);
  }
  else
  {
    if ( !v7->m_Legacy )
    {
      m_PkgPnp = v7->m_PkgPnp;
      if ( m_PkgPnp->m_Type == 4353 )
        return FxChildList::GetNextStaticDevice(*(FxChildList **)&m_PkgPnp[1].m_Type, PreviousChild, Flags);
    }
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xEu, WPP_FxDeviceFdoAPI_cpp_Traceguids, _a1);
  }
  v12 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)&v12,
    m_Globals->Public.DriverName,
    (const char *)&v12);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 0LL;
}
