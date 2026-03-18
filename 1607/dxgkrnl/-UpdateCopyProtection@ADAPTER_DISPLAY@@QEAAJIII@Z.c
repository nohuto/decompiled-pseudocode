/*
 * XREFs of ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C01487D8
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01780F4 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C008717C (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C0147C98 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGCOPYPROTECTION *v22; // rbx
  _QWORD *v23; // rax
  unsigned int v24; // ebx
  int v25; // edi
  int v26; // eax
  _BYTE v28[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  v7 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 4271LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentProcess = PsGetCurrentProcess(v8);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v11);
  if ( !ProcessDxgProcess )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v14 + 24) = 4274LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)ProcessDxgProcess + 35);
  if ( *(struct _KTHREAD **)(v15 + 8) != KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 4275LL;
    WdLogEvent5_WdAssertion(v16);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v7, v5, ProcessDxgProcess);
  v22 = CopyProtection;
  if ( CopyProtection )
  {
    v25 = *((_DWORD *)CopyProtection + 14);
    *((_DWORD *)CopyProtection + 14) = a3;
    v26 = ADAPTER_DISPLAY::SetCopyProtection(this, v18);
    if ( v26 < 0 )
      *((_DWORD *)v22 + 14) = v25;
    v24 = v26;
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    v24 = -1073741811;
    v23[3] = v5;
    v23[4] = ProcessDxgProcess;
    v23[5] = v7;
    v23[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
  }
  if ( v28[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
  return v24;
}
