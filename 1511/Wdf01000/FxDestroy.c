/*
 * XREFs of FxDestroy @ 0x1C0033030
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0020270 (imp_WdfDriverCreate.c)
 *     ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0032FA0 (-Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     FxLibraryCommonUnregisterClient @ 0x1C0033408 (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?Release@_FX_DRIVER_GLOBALS@@QEAAKPEAXJPEAD@Z @ 0x1C0020B3C (-Release@_FX_DRIVER_GLOBALS@@QEAAKPEAXJPEAD@Z.c)
 *     FxPurgeBugCheckDriverInfo @ 0x1C00330C0 (FxPurgeBugCheckDriverInfo.c)
 *     FxUnregisterBugCheckCallback @ 0x1C0033150 (FxUnregisterBugCheckCallback.c)
 *     UnlockVerifierSection @ 0x1C006DCAC (UnlockVerifierSection.c)
 *     ?FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C006EBD0 (-FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006F274 (-FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0070814 (-FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxDestroy(_FX_DRIVER_GLOBALS *FxDriverGlobals, void *a2, int a3, char *a4)
{
  _FX_DRIVER_GLOBALS::Release(FxDriverGlobals, a2, a3, a4);
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&FxDriverGlobals->DestroyEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
  if ( FxDriverGlobals->FxVerifierLock )
  {
    FxVerifierLock::FreeThreadTable(FxDriverGlobals);
    FxDriverGlobals->ThreadTableLock.m_DbgFlagIsInitialized = 0;
  }
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(FxDriverGlobals, 5u, 0xAu, 0x13u, WPP_wdfpool_cpp_Traceguids, &FxDriverGlobals->FxPoolFrameworks);
  if ( FxDriverGlobals->FxPoolTrackingOn )
  {
    FxPoolDump(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks);
    FxMdlDump(FxDriverGlobals);
  }
  FxDriverGlobals->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized = 0;
  FxDriverGlobals->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized = 0;
  FxUnregisterBugCheckCallback(FxDriverGlobals);
  FxPurgeBugCheckDriverInfo(FxDriverGlobals);
  if ( FxDriverGlobals->FxVerifierOn )
    UnlockVerifierSection(FxDriverGlobals);
}
