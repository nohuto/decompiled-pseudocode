/*
 * XREFs of imp_WdfPdoInitAllocate @ 0x1C002FA00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C000F00C (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z @ 0x1C000F3AC (-SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

WDFDEVICE_INIT *__fastcall imp_WdfPdoInitAllocate(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 ParentDevice)
{
  FxDevice *v2; // rcx
  __int64 v3; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFDEVICE_INIT *v5; // rax
  WDFDEVICE_INIT *v6; // rax
  WDFDEVICE_INIT *v7; // rcx
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v11; // r9
  _LIST_ENTRY *Caller; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+58h] [rbp+10h] BYREF
  FxDevice *pDevice; // [rsp+60h] [rbp+18h] BYREF

  if ( !ParentDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v2 = (FxDevice *)(~ParentDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v3) = 0;
  if ( (ParentDevice & 1) != 0 )
  {
    v3 = LOWORD(v2->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v2 = (FxDevice *)((char *)v2 - v3);
  }
  if ( v2->m_Type == 4098 )
  {
    pDevice = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pDevice, (void *)ParentDevice, 0x1002u, v3);
    v2 = pDevice;
  }
  m_Globals = v2->m_Globals;
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    v13 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v13,
      m_Globals->Public.DriverName,
      (const char *)&v13);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    if ( v2->m_PkgPnp->m_Type == 4353 )
    {
      v5 = (WDFDEVICE_INIT *)FxPoolAllocator(
                               m_Globals,
                               (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                               ExDefaultNonPagedPoolType,
                               0x3A8uLL,
                               m_Globals->Tag,
                               Caller);
      if ( v5 )
      {
        WDFDEVICE_INIT::WDFDEVICE_INIT(v5, pDevice->m_Driver);
        v7 = v6;
      }
      else
      {
        v7 = 0LL;
      }
      if ( v7 )
      {
        WDFDEVICE_INIT::SetPdo(v7, pDevice);
        *(_BYTE *)(v8 + 901) = 1;
        return (WDFDEVICE_INIT *)v8;
      }
      v11 = 52;
    }
    else
    {
      v11 = 51;
    }
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, v11, WPP_FxDeviceInitApi_cpp_Traceguids);
  }
  return 0LL;
}
