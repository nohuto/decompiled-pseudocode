/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C00959C4
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C00063D4 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_qqqq @ 0x1C001BE48 (Template_qqqq.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C00219D8 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 CurrentProcess; // rbp
  __int64 ProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax

  v8 = a2;
  v9 = *((_QWORD *)this + 14) + 1008LL * a2;
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v17 = *(_QWORD *)(ProcessWin32Process + 248);
  }
  else
  {
    v21 = WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
    *(_QWORD *)(v21 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v21);
    v17 = 0LL;
  }
  *a5 = 1;
  if ( !*(_QWORD *)(v9 + 824) || !(*(unsigned int (**)(void))(*(_QWORD *)(v17 + 80) + 216LL))() )
    return 3221225485LL;
  if ( *((_QWORD *)this + 31) )
  {
    *(_DWORD *)(v9 + 832) = a3;
    BLTQUEUE::SetDWMTargetVsync((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 31) + 8LL) + 2384 * v8), a3);
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_qqqq(v18, &EventDWMVsyncCountWait, v19, a3, *(_DWORD *)(v9 + 836), *(_BYTE *)(v9 + 840), a4);
    }
    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(this, a2, a3, a5);
  }
  return 0LL;
}
