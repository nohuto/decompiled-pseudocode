/*
 * XREFs of imp_WdfInterruptReportInactive @ 0x1C0098960
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x1C00A27E0 (-ReportInactive@FxInterrupt@@QEAAXE@Z.c)
 */

void __fastcall imp_WdfInterruptReportInactive(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  __int64 Offset; // r8
  FxInterrupt *v3; // rcx
  FxInterrupt *pFxInterrupt; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  pFxInterrupt = 0LL;
  if ( !Interrupt )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1027uLL);
  v3 = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Interrupt & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxInterrupt *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4135 )
  {
    pFxInterrupt = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pFxInterrupt, (void *)Interrupt, 0x1027u, Offset);
    v3 = pFxInterrupt;
  }
  FxInterrupt::ReportInactive(v3, 0);
}
