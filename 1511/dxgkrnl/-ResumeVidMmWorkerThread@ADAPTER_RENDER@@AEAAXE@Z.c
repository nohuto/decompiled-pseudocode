/*
 * XREFs of ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z @ 0x1C006A77C
 * Callers:
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C006A824 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012EA44 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C012F574 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_RENDER::ResumeVidMmWorkerThread(PERESOURCE **this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) && !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 22118LL;
    WdLogEvent5_WdAssertion(v5);
  }
  ((void (__fastcall *)(PERESOURCE *))this[53][1][9].OwnerEntry.0)(this[54]);
}
