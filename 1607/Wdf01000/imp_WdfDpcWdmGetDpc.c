/*
 * XREFs of imp_WdfDpcWdmGetDpc @ 0x1C006BE80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

_KDPC *__fastcall imp_WdfDpcWdmGetDpc(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  FxDpc *pFxDpc; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Dpc,
    0x1015u,
    (void **)&pFxDpc);
  return &pFxDpc->m_Dpc;
}
