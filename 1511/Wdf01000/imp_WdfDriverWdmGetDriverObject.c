/*
 * XREFs of imp_WdfDriverWdmGetDriverObject @ 0x1C0033AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

_DRIVER_OBJECT *__fastcall imp_WdfDriverWdmGetDriverObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  FxDriver *pDriver; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Driver,
    0x1001u,
    (void **)&pDriver);
  return pDriver->m_DriverObject.m_DriverObject;
}
