/*
 * XREFs of ?ControlVSyncForLogging@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0125D38
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D4498 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?ControlVSyncForLogging@DXGGLOBAL@@QEAAXE@Z @ 0x1C014531C (-ControlVSyncForLogging@DXGGLOBAL@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::ControlVSyncForLogging(PERESOURCE **this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 22160LL;
    WdLogEvent5_WdAssertion(v6);
  }
  LOBYTE(v5) = a2;
  if ( ((int (__fastcall *)(PERESOURCE *, __int64, __int64))this[50][1][4].OwnerEntry.OwnerThread)(this[51], 2LL, v5) < 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 22168LL;
    WdLogEvent5_WdAssertion(v8);
  }
}
