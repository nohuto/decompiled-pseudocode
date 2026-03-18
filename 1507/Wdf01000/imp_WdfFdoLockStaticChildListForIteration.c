/*
 * XREFs of imp_WdfFdoLockStaticChildListForIteration @ 0x1C00081C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C001E050 (-BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall imp_WdfFdoLockStaticChildListForIteration(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Fdo)
{
  WDFDEVICE__ *_a1; // rbx
  FxDevice *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxPkgPnp *m_PkgPnp; // rdi
  FxChildList *v6; // rcx
  _WDF_CHILD_LIST_ITERATOR iterator; // [rsp+30h] [rbp-48h] BYREF
  int v8; // [rsp+88h] [rbp+10h] BYREF
  FxDevice *pDevice; // [rsp+90h] [rbp+18h] BYREF

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
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxDeviceFdoAPI_cpp_Traceguids, _a1);
    v8 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v8,
      m_Globals->Public.DriverName,
      (const char *)&v8);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    memset(&iterator, 0, sizeof(iterator));
    v6 = *(FxChildList **)&m_PkgPnp[1].m_Type;
    iterator.Size = 40;
    iterator.Flags = 7;
    FxChildList::BeginIteration(v6, &iterator);
  }
}
