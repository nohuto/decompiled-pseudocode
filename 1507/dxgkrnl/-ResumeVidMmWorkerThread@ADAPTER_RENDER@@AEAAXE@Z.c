/*
 * XREFs of ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z @ 0x1C0093D10
 * Callers:
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0093E6C (-ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0128548 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_RENDER::ResumeVidMmWorkerThread(PERESOURCE **this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) && !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 21612LL;
    WdLogEvent5_WdAssertion(v8);
  }
  ((void (__fastcall *)(PERESOURCE *))this[50][1][9].OwnerEntry.OwnerThread)(this[51]);
}
