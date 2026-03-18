/*
 * XREFs of imp_WdfWmiInstanceGetProvider @ 0x1C006F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFWMIPROVIDER__ *__fastcall imp_WdfWmiInstanceGetProvider(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance)
{
  FxWmiProvider *m_Provider; // rax
  FxWmiInstanceExternal *pInstance; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)WmiInstance,
    0x1034u,
    (void **)&pInstance);
  m_Provider = pInstance->m_Provider;
  if ( m_Provider->m_ObjectSize )
    return (WDFWMIPROVIDER__ *)((unsigned __int64)m_Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
