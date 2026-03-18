/*
 * XREFs of imp_WdfInterruptReportInactive @ 0x1C0083DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x1C008CD8C (-ReportInactive@FxInterrupt@@QEAAXE@Z.c)
 */

void __fastcall imp_WdfInterruptReportInactive(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  FxInterrupt::ReportInactive(pFxInterrupt, 0);
}
