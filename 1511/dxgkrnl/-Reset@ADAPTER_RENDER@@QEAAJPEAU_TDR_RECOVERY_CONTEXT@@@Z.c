/*
 * XREFs of ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012EA44
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012ED94 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z @ 0x1C006A77C (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAX_N@Z @ 0x1C00CC2E0 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAX_N@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00CC378 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00CC404 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0128324 (-DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C013B4E4 (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C0144D30 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall ADAPTER_RENDER::Reset(ADAPTER_RENDER *this, ULONG_PTR BugCheckParameter1)
{
  _QWORD *i; // rdx
  _BYTE *j; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // esi
  DXGDEVICE *k; // rdi
  DXGDEVICE *v14; // rdi
  DXGDEVICE *m; // rbx

  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  ADAPTER_RENDER::DisablePinnedHardware((PERESOURCE **)this);
  ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 216, 0LL);
  *((_QWORD *)this + 28) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 29); i != (_QWORD *)((char *)this + 232); i = (_QWORD *)*i )
    *(_DWORD *)(i[2] + 12LL) |= 0x10u;
  *((_QWORD *)this + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 216, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((union _LARGE_INTEGER *)this + 17);
  for ( j = (_BYTE *)*((_QWORD *)this + 25); j != (char *)this + 200 && j; j = *(_BYTE **)j )
    j[25] = 1;
  DXGFASTMUTEX::Release((ADAPTER_RENDER *)((char *)this + 136));
  if ( !*((_QWORD *)this + 51) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 21811LL;
    WdLogEvent5_WdAssertion(v7);
  }
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL) + 640LL))(
    *((_QWORD *)this + 51),
    1LL);
  if ( (int)ADAPTER_RENDER::DdiRestartFromTimeout(this, v8, v9) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 88) = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  if ( !*((_QWORD *)this + 51) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 21828LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL) + 648LL))(
          *((_QWORD *)this + 51),
          1LL);
  if ( v12 < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 88) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL) + 648LL);
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL) + 504LL))(
    *((_QWORD *)this + 51),
    0LL);
  ADAPTER_RENDER::RestoreFromPurgeSegments(this, 1);
  ADAPTER_RENDER::ResumeVidMmWorkerThread((PERESOURCE **)this, 1);
  memset((char *)this + 504, 0, 0x20uLL);
  for ( k = (DXGDEVICE *)*((_QWORD *)this + 13); k != (ADAPTER_RENDER *)((char *)this + 104) && k; k = *(DXGDEVICE **)k )
    DXGDEVICE::Reset(k);
  v14 = (ADAPTER_RENDER *)((char *)this + 120);
  for ( m = (DXGDEVICE *)*((_QWORD *)this + 15); m != v14 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::Reset(m);
  return (unsigned int)v12;
}
