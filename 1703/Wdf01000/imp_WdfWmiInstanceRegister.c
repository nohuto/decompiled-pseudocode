/*
 * XREFs of imp_WdfWmiInstanceRegister @ 0x1C0072DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C0033A78 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 */

__int64 __fastcall imp_WdfWmiInstanceRegister(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIINSTANCE__ *WmiInstance)
{
  FxWmiInstanceExternal *pInstance; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)WmiInstance,
    0x1034u,
    (void **)&pInstance);
  return FxWmiProvider::AddInstance(pInstance->m_Provider, (unsigned __int64)pInstance, 0);
}
