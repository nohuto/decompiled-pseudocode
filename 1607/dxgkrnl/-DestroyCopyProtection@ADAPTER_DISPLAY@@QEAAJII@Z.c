/*
 * XREFs of ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0147588
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkHandleVideoParameters @ 0x1C01780F4 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009450 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C001ECDC (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C001EDFC (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C008717C (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C0147C98 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCopyProtection(DXGADAPTER **this, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DXGCOPYPROTECTION *v20; // rbx
  _QWORD *v21; // rax
  unsigned int v22; // ebx
  DXGCOPYPROTECTION *v23; // rcx
  DXGCOPYPROTECTION **v24; // rax
  _BYTE v26[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 4337LL;
    WdLogEvent5_WdAssertion(v7);
  }
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v9);
  if ( !ProcessDxgProcess )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v12 + 24) = 4340LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)ProcessDxgProcess + 35);
  if ( *(struct _KTHREAD **)(v13 + 8) != KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 4341LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v5, v4, ProcessDxgProcess);
  v20 = CopyProtection;
  if ( CopyProtection )
  {
    DXGPROCESS::RemoveCopyProtection(ProcessDxgProcess, CopyProtection);
    v23 = *(DXGCOPYPROTECTION **)v20;
    v24 = (DXGCOPYPROTECTION **)*((_QWORD *)v20 + 1);
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v20 + 8LL) != v20 || *v24 != v20 )
      __fastfail(3u);
    *v24 = v23;
    *((_QWORD *)v23 + 1) = v24;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v20);
    ADAPTER_DISPLAY::SetCopyProtection(this, v5);
    DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
    v22 = 0;
  }
  else
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    v22 = -1073741811;
    v21[3] = v4;
    v21[4] = ProcessDxgProcess;
    v21[5] = v5;
    v21[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
  }
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  return v22;
}
