/*
 * XREFs of ?ControlVSyncForLogging@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0148AF8
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E90EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?ControlVSyncForLogging@DXGGLOBAL@@QEAAXE@Z @ 0x1C0168E04 (-ControlVSyncForLogging@DXGGLOBAL@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
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
    *(_QWORD *)(v6 + 24) = 2570LL;
    WdLogEvent5_WdAssertion(v6);
  }
  LOBYTE(v5) = a2;
  if ( ((int (__fastcall *)(PERESOURCE *, __int64, __int64))this[47][1][4].OwnerEntry.OwnerThread)(this[48], 2LL, v5) < 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 2578LL;
    WdLogEvent5_WdAssertion(v8);
  }
}
