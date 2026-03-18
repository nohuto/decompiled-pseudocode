/*
 * XREFs of imp_WdfDeviceAddRemovalRelationsPhysicalDevice @ 0x1C00742D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0096140 (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

int __fastcall imp_WdfDeviceAddRemovalRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  void *retaddr; // [rsp+28h] [rbp+0h]
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  if ( !PhysicalDevice )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  return FxPkgPnp::AddRemovalDevice(pDevice->m_PkgPnp, PhysicalDevice);
}
