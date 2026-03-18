/*
 * XREFs of ?FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0081E0C
 * Callers:
 *     FxDestroy @ 0x1C007FFF0 (FxDestroy.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxVerifierLock::FreeThreadTable(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned __int64 *p_m_Lock; // rbx
  KIRQL v3; // al
  _LIST_ENTRY *ThreadTable; // rcx
  KIRQL v5; // di

  p_m_Lock = &FxDriverGlobals->ThreadTableLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&FxDriverGlobals->ThreadTableLock.m_Lock);
  ThreadTable = FxDriverGlobals->ThreadTable;
  v5 = v3;
  if ( ThreadTable )
  {
    FxPoolFree(ThreadTable);
    FxDriverGlobals->ThreadTable = 0LL;
  }
  KeReleaseSpinLock(p_m_Lock, v5);
}
