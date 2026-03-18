/*
 * XREFs of ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0129740
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4 (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     DxgkHandleVideoParameters @ 0x1C0153088 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0019688 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C001B594 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A734 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C012C514 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCopyProtection(DXGADAPTER **this, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v10; // rax
  struct _KTHREAD **v11; // rcx
  __int64 v12; // rax
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DXGCOPYPROTECTION *v18; // rbx
  _QWORD *v19; // rax
  unsigned int v20; // ebx
  DXGCOPYPROTECTION *v21; // rcx
  DXGCOPYPROTECTION **v22; // rax
  _BYTE v24[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 19287LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v10 + 24) = 19290LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = (struct _KTHREAD **)*((_QWORD *)Current + 36);
  if ( *v11 != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 19291LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v5, v4, Current);
  v18 = CopyProtection;
  if ( CopyProtection )
  {
    DXGPROCESS::RemoveCopyProtection((struct _KTHREAD ***)Current, CopyProtection);
    v21 = *(DXGCOPYPROTECTION **)v18;
    v22 = (DXGCOPYPROTECTION **)*((_QWORD *)v18 + 1);
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v18 + 8LL) != v18 || *v22 != v18 )
      __fastfail(3u);
    *v22 = v21;
    *((_QWORD *)v21 + 1) = v22;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v18);
    ADAPTER_DISPLAY::SetCopyProtection(this, v5);
    DXGADAPTER::ReleaseReference(this[2]);
    v20 = 0;
  }
  else
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    v20 = -1073741811;
    v19[3] = v4;
    v19[4] = Current;
    v19[5] = v5;
    v19[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
  }
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  return v20;
}
