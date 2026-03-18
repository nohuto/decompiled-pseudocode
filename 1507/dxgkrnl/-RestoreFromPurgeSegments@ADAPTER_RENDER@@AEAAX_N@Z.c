/*
 * XREFs of ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAX_N@Z @ 0x1C00BD788
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078A80 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0128548 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00BD6D4 (-PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::RestoreFromPurgeSegments(ADAPTER_RENDER *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  struct _KTHREAD **Current; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 21582LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)this + 51);
  v10 = *((_QWORD *)this + 50);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v12, Current);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 88LL))(v9);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v12);
  ExReInitializeRundownProtection((PEX_RUNDOWN_REF)this + 114);
  if ( !a2 )
    ADAPTER_RENDER::PageInAllDevices(this);
}
