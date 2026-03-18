/*
 * XREFs of ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C006A7C8
 * Callers:
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z @ 0x1C006A884 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012ED94 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C012F574 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendVidMmWorkerThread(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  __int64 v8; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) && !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 22109LL;
    WdLogEvent5_WdAssertion(v8);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 424) + 8LL) + 984LL))(
           *(_QWORD *)(a1 + 432),
           a2);
}
