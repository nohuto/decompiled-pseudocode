/*
 * XREFs of imp_WdfPdoInitAllocate @ 0x1C0030500
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C0020138 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z @ 0x1C002048C (-SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z.c)
 */

WDFDEVICE_INIT *__fastcall imp_WdfPdoInitAllocate(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *ParentDevice)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFDEVICE_INIT *v3; // rax
  WDFDEVICE_INIT *v4; // rax
  WDFDEVICE_INIT *v5; // rcx
  __int64 v6; // rcx
  unsigned __int16 v8; // r9
  void *Caller; // [rsp+38h] [rbp+0h]
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)ParentDevice,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 0) >= 0 )
  {
    if ( pDevice->m_PkgPnp->m_Type == 4353 )
    {
      v3 = (WDFDEVICE_INIT *)FxPoolAllocator(
                               m_Globals,
                               &m_Globals->FxPoolFrameworks,
                               ExDefaultNonPagedPoolType,
                               0x3A8uLL,
                               m_Globals->Tag,
                               Caller);
      if ( v3 )
      {
        WDFDEVICE_INIT::WDFDEVICE_INIT(v3, pDevice->m_Driver);
        v5 = v4;
      }
      else
      {
        v5 = 0LL;
      }
      if ( v5 )
      {
        WDFDEVICE_INIT::SetPdo(v5, pDevice);
        *(_BYTE *)(v6 + 901) = 1;
        return (WDFDEVICE_INIT *)v6;
      }
      v8 = 52;
    }
    else
    {
      v8 = 51;
    }
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, v8, WPP_FxDeviceInitApi_cpp_Traceguids);
  }
  return 0LL;
}
