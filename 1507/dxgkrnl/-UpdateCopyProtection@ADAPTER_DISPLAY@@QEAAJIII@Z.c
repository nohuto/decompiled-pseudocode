/*
 * XREFs of ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C01295D4
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C014FD7C (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0095C34 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C0126334 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct DXGCOPYPROTECTION *v27; // rdi
  _QWORD *v28; // rax
  unsigned int v29; // ebx
  int v30; // ebx
  int v31; // eax
  _BYTE v33[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  v7 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 18810LL;
    WdLogEvent5_WdAssertion(v12);
  }
  Current = DXGPROCESS::GetCurrent(v9);
  if ( !Current )
  {
    v18 = WdLogNewEntry5_WdAssertion(v14, v13, v16, v17);
    *(_QWORD *)(v18 + 24) = 18813LL;
    WdLogEvent5_WdAssertion(v18);
  }
  CurrentThread = KeGetCurrentThread();
  v20 = *((_QWORD *)Current + 36);
  if ( *(struct _KTHREAD **)(v20 + 8) != CurrentThread )
  {
    v21 = WdLogNewEntry5_WdAssertion(v20, CurrentThread, v16, v17);
    *(_QWORD *)(v21 + 24) = 18814LL;
    WdLogEvent5_WdAssertion(v21);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v7, v5, Current);
  v27 = CopyProtection;
  if ( CopyProtection )
  {
    v30 = *((_DWORD *)CopyProtection + 14);
    *((_DWORD *)CopyProtection + 14) = a3;
    v31 = ADAPTER_DISPLAY::SetCopyProtection(this, v23);
    if ( v31 < 0 )
      *((_DWORD *)v27 + 14) = v30;
    v29 = v31;
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
    v28[4] = Current;
    v29 = -1073741811;
    v28[6] = -1073741811LL;
    v28[3] = v5;
    v28[5] = v7;
    WdLogEvent5_WdWarning(v28);
  }
  if ( v33[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
  return v29;
}
