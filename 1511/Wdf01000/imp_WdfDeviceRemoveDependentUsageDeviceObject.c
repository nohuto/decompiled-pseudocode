/*
 * XREFs of imp_WdfDeviceRemoveDependentUsageDeviceObject @ 0x1C0064710
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0073674 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceRemoveDependentUsageDeviceObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DependentDevice)
{
  FxPkgPnp *m_PkgPnp; // rdx
  FxTransactionedList *m_UsageDependentDeviceList; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  if ( !DependentDevice )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  m_PkgPnp = pDevice->m_PkgPnp;
  m_UsageDependentDeviceList = m_PkgPnp->m_UsageDependentDeviceList;
  if ( m_UsageDependentDeviceList )
    FxTransactionedList::SearchForAndRemove(m_UsageDependentDeviceList, m_PkgPnp->m_Globals, DependentDevice);
}
