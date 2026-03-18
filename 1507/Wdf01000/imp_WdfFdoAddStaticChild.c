/*
 * XREFs of imp_WdfFdoAddStaticChild @ 0x1C002F420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C001DE94 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfFdoAddStaticChild(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Fdo,
        unsigned __int64 Child,
        unsigned int *a4)
{
  WDFDEVICE__ *v5; // rdi
  FxDevice *v7; // rcx
  FxDevice *v8; // r10
  __int64 Offset; // rdx
  FxPkgPnp *v10; // rax
  FxPkgPnp *m_PkgPnp; // rcx
  int v12; // ebx
  FxStaticChildDescription description; // [rsp+40h] [rbp-28h] BYREF
  FxDevice *pFdo; // [rsp+78h] [rbp+10h] BYREF
  FxDevice *pPdo; // [rsp+88h] [rbp+20h] BYREF

  v5 = (WDFDEVICE__ *)Fdo;
  if ( !Fdo )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v7 = (FxDevice *)(~Fdo & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Fdo) = 0;
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    Fdo = LOWORD(v7->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v7 = (FxDevice *)((char *)v7 - Fdo);
  }
  if ( v7->m_Type == 4098 )
  {
    pFdo = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pFdo, v5, 0x1002u, Fdo);
    v7 = pFdo;
  }
  if ( v7->m_Legacy || v7->m_PkgPnp->m_Type != 4353 )
  {
    v12 = -1073741811;
    WPP_IFR_SF_qd(v7->m_Globals, 2u, 0x12u, 0xAu, WPP_FxDeviceFdoAPI_cpp_Traceguids, v5, -1073741811);
  }
  else
  {
    if ( !Child )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
        WDF_INVALID_HANDLE,
        0LL,
        0x1002uLL);
    v8 = (FxDevice *)(~Child & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(Offset) = 0;
    if ( (Child & 1) != 0 )
    {
      Offset = LOWORD(v8->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
      v8 = (FxDevice *)((char *)v8 - Offset);
    }
    if ( v8->m_Type == 4098 )
    {
      pPdo = v8;
    }
    else
    {
      FxObjectHandleGetPtrQI(v8, (void **)&pPdo, (void *)Child, 0x1002u, Offset);
      v7 = pFdo;
      v8 = pPdo;
    }
    if ( !v8->m_Legacy && (v10 = v8->m_PkgPnp) != 0LL && v10->m_Type == 4354 )
    {
      m_PkgPnp = v7->m_PkgPnp;
      description.Header.IdentificationDescriptionSize = 16;
      description.Pdo = v8;
      v12 = FxChildList::Add(*(FxChildList **)&m_PkgPnp[1].m_Type, &description.Header, 0LL, a4);
      if ( v12 >= 0 )
        pFdo->SetDeviceTelemetryInfoFlags(pFdo, DeviceInfoHasStaticChildren);
    }
    else
    {
      v12 = -1073741811;
      WPP_IFR_SF_qd(v7->m_Globals, 2u, 0x12u, 0xBu, WPP_FxDeviceFdoAPI_cpp_Traceguids, (const void *)Child, -1073741811);
    }
  }
  return (unsigned int)v12;
}
