/*
 * XREFs of ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014943C
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01463D8 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C0091440 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00E0AC4 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00E0B40 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00E0BB0 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C014C280 (-DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C015ED08 (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C0167A8C (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall ADAPTER_RENDER::Reset(PERESOURCE **this, ULONG_PTR BugCheckParameter1)
{
  PERESOURCE **i; // rdx
  PERESOURCE **j; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // esi
  DXGDEVICE *k; // rdi
  DXGDEVICE *v12; // rdi
  DXGDEVICE *m; // rbx

  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  ADAPTER_RENDER::DisablePinnedHardware(this);
  ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 24, 0LL);
  this[25] = (PERESOURCE *)KeGetCurrentThread();
  for ( i = (PERESOURCE **)this[26]; i != this + 26; i = (PERESOURCE **)*i )
    *((_DWORD *)i[2] + 3) |= 0x10u;
  this[25] = 0LL;
  ExReleasePushLockExclusiveEx(this + 24, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 17));
  for ( j = (PERESOURCE **)this[22]; j != this + 22 && j; j = (PERESOURCE **)*j )
    *((_BYTE *)j + 25) = 1;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 17);
  if ( !this[48] )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 2219LL;
    WdLogEvent5_WdAssertion(v7);
  }
  ((void (__fastcall *)(PERESOURCE *, __int64))this[47][1][6].OwnerTable)(this[48], 1LL);
  if ( (int)ADAPTER_RENDER::DdiRestartFromTimeout((ADAPTER_RENDER *)this) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = this[2][55];
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  if ( !this[48] )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 2236LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = (*(__int64 (__fastcall **)(PERESOURCE *, __int64))&this[47][1][6].ActiveCount)(this[48], 1LL);
  if ( v10 < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = *(_QWORD *)&this[47][1][6].ActiveCount;
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  ((void (__fastcall *)(PERESOURCE *, _QWORD))this[47][1][4].Address)(this[48], 0LL);
  ADAPTER_RENDER::RestoreFromPurgeSegments((ADAPTER_RENDER *)this);
  ADAPTER_RENDER::ResumeVidMmWorkerThread(this, 1, 0);
  memset(this + 57, 0, 0x20uLL);
  for ( k = (DXGDEVICE *)this[13]; k != (DXGDEVICE *)(this + 13) && k; k = *(DXGDEVICE **)k )
    DXGDEVICE::Reset(k);
  v12 = (DXGDEVICE *)(this + 15);
  for ( m = (DXGDEVICE *)this[15]; m != v12 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::Reset(m);
  return (unsigned int)v10;
}
