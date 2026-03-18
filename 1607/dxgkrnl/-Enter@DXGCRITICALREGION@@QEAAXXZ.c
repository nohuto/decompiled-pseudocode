/*
 * XREFs of ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000CCA8
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00E3BDC (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0145B0C (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C0145CF0 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01463D8 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0148C38 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCRITICALREGION::Enter(DXGCRITICALREGION *this)
{
  __int64 v2; // rax

  if ( *((_BYTE *)this + 1) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 534LL;
    WdLogEvent5_WdAssertion(v2);
  }
  KeEnterCriticalRegion();
  *((_BYTE *)this + 1) = 1;
}
