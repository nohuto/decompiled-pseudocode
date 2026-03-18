/*
 * XREFs of ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0095C98
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C0065524 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C00B60B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     DxgkSetDisplayMode @ 0x1C00B96F0 (DxgkSetDisplayMode.c)
 *     DxgkDisplayOnOff @ 0x1C00BA1C0 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0095C34 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCopyProtectionWithLock(DXGADAPTER **this, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v14; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v17 + 24) = 18991LL;
    WdLogEvent5_WdAssertion(v17);
  }
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
    *(_QWORD *)(v18 + 24) = 18994LL;
    WdLogEvent5_WdAssertion(v18);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)Current + 36) + 8LL) != CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(CurrentThread, v8, v11, v12);
    *(_QWORD *)(v16 + 24) = 18995LL;
    WdLogEvent5_WdAssertion(v16);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v14 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  return v14;
}
