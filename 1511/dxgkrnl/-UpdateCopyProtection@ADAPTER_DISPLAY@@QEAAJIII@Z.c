/*
 * XREFs of ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C012FC6C
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0153088 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A734 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C012C514 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v12; // rax
  struct _KTHREAD **v13; // rcx
  __int64 v14; // rax
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGCOPYPROTECTION *v20; // rdi
  _QWORD *v21; // rax
  unsigned int v22; // ebx
  int v23; // ebx
  int v24; // eax
  _BYTE v26[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  v7 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 19221LL;
    WdLogEvent5_WdAssertion(v9);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v12 + 24) = 19224LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = (struct _KTHREAD **)*((_QWORD *)Current + 36);
  if ( *v13 != KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 19225LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v7, v5, Current);
  v20 = CopyProtection;
  if ( CopyProtection )
  {
    v23 = *((_DWORD *)CopyProtection + 14);
    *((_DWORD *)CopyProtection + 14) = a3;
    v24 = ADAPTER_DISPLAY::SetCopyProtection(this, v16);
    if ( v24 < 0 )
      *((_DWORD *)v20 + 14) = v23;
    v22 = v24;
  }
  else
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    v21[4] = Current;
    v22 = -1073741811;
    v21[6] = -1073741811LL;
    v21[3] = v5;
    v21[5] = v7;
    WdLogEvent5_WdWarning(v21);
  }
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  return v22;
}
