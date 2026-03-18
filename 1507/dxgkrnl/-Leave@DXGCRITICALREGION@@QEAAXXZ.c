/*
 * XREFs of ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000A330
 * Callers:
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C000A31C (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0123630 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0127150 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C0127350 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01288A0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCRITICALREGION::Leave(DXGCRITICALREGION *this)
{
  __int64 v2; // rax

  if ( !*((_BYTE *)this + 1) )
  {
    v2 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v2 + 24) = 536LL;
    WdLogEvent5_WdAssertion(v2);
  }
  *((_BYTE *)this + 1) = 0;
  KeLeaveCriticalRegion();
}
