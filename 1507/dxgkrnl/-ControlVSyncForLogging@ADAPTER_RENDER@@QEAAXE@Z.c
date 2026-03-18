/*
 * XREFs of ?ControlVSyncForLogging@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C01201F0
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?ControlVSyncForLogging@DXGGLOBAL@@QEAAXE@Z @ 0x1C013EEA4 (-ControlVSyncForLogging@DXGGLOBAL@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::ControlVSyncForLogging(PERESOURCE **this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 21654LL;
    WdLogEvent5_WdAssertion(v8);
  }
  LOBYTE(v6) = a2;
  if ( ((int (__fastcall *)(PERESOURCE *, __int64, __int64))this[47][1][4].OwnerEntry.OwnerThread)(this[48], 2LL, v6) < 0 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 21662LL;
    WdLogEvent5_WdAssertion(v13);
  }
}
