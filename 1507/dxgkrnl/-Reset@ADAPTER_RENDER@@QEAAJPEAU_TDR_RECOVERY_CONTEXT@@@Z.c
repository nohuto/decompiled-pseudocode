/*
 * XREFs of ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0128548
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01288A0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z @ 0x1C0093D10 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0093DB8 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAX_N@Z @ 0x1C00BD788 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAX_N@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00BD8A8 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0122278 (-DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C0136E04 (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C013E8E0 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall ADAPTER_RENDER::Reset(PERESOURCE **this, ULONG_PTR BugCheckParameter1)
{
  PERESOURCE **i; // rdx
  PERESOURCE **j; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // esi
  struct _KEVENT *v19; // rcx
  DXGDEVICE *k; // rdi
  DXGDEVICE *v21; // rdi
  DXGDEVICE *m; // rbx

  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  ADAPTER_RENDER::ResumeVidMmWorkerThread(this, 1);
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
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = 21294LL;
    WdLogEvent5_WdAssertion(v10);
  }
  ((void (__fastcall *)(PERESOURCE *, __int64))this[47][1][6].OwnerTable)(this[48], 1LL);
  if ( (int)ADAPTER_RENDER::DdiRestartFromTimeout((ADAPTER_RENDER *)this, v11, v12) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 88) = this[2][53];
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  if ( !this[48] )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = 21311LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = (*(__int64 (__fastcall **)(PERESOURCE *, __int64))&this[47][1][6].ActiveCount)(this[48], 1LL);
  if ( v18 < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 88) = *(_QWORD *)&this[47][1][6].ActiveCount;
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  ((void (__fastcall *)(PERESOURCE *, _QWORD))this[47][1][4].Address)(this[48], 0LL);
  v19 = *(struct _KEVENT **)(BugCheckParameter1 + 2872);
  if ( v19 )
    KeSetEvent(v19, 0, 0);
  ADAPTER_RENDER::RestoreFromPurgeSegments((ADAPTER_RENDER *)this, 1);
  memset(this + 57, 0, 0x20uLL);
  for ( k = (DXGDEVICE *)this[13]; k != (DXGDEVICE *)(this + 13) && k; k = *(DXGDEVICE **)k )
    DXGDEVICE::Reset(k);
  v21 = (DXGDEVICE *)(this + 15);
  for ( m = (DXGDEVICE *)this[15]; m != v21 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::Reset(m);
  return (unsigned int)v18;
}
