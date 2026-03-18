/*
 * XREFs of ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A798
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C009AF4C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C00A3CD0 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00AF0F0 (DxgkDisplayOnOff.c)
 *     DxgkSetDisplayMode @ 0x1C00AF380 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A734 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCopyProtectionWithLock(DXGADAPTER **this, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v11 + 24) = 19402LL;
    WdLogEvent5_WdAssertion(v11);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v12 + 24) = 19405LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentThread = KeGetCurrentThread();
  if ( **((struct _KTHREAD ***)Current + 36) != CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v10 + 24) = 19406LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v8 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return v8;
}
