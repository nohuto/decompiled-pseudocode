/*
 * XREFs of imp_WdfInterruptWdmGetInterrupt @ 0x1C0084080
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

struct _KINTERRUPT *__fastcall imp_WdfInterruptWdmGetInterrupt(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt)
{
  struct _KINTERRUPT *result; // rax
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  result = pFxInterrupt->m_Interrupt;
  if ( !result )
    return pFxInterrupt->m_InterruptCaptured;
  return result;
}
