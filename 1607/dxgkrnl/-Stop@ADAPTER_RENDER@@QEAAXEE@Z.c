/*
 * XREFs of ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01497D4
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01468D0 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C007F898 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C008F974 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C00913E4 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C0091440 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0093EA4 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00E0BB0 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0148DCC (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C015EEB0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 */

void __fastcall ADAPTER_RENDER::Stop(DXGDEVICE **this, char a2, unsigned __int8 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  DXGDEVICE *i; // rbx
  DXGDEVICE *j; // rbx
  DXGADAPTERSYNCOBJECT *k; // rbx
  DXGSHAREDRESOURCE **m; // rbx
  __int64 v14; // rcx
  struct DXGSYNCOBJECT *v15; // r15
  DXGGLOBAL *Global; // rax

  ADAPTER_RENDER::EnableClockCalibration((ADAPTER_RENDER *)this, 0);
  *((_BYTE *)this + 634) = a2;
  if ( !a3 )
  {
    if ( !KeReadStateEvent((PRKEVENT)this[2] + 2) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
      v9[3] = 275LL;
      v9[4] = 6LL;
      v9[5] = this[2];
      v9[6] = 0LL;
      v9[7] = 0LL;
      WdLogEvent5_WdCriticalError(v9);
    }
    ADAPTER_RENDER::FlushDeferredDestructions((PERESOURCE **)this);
  }
  for ( i = this[13]; i != (DXGDEVICE *)(this + 13) && i; i = *(DXGDEVICE **)i )
    DXGDEVICE::Stop(i, a3);
  for ( j = this[15]; j != (DXGDEVICE *)(this + 15) && j; j = *(DXGDEVICE **)j )
    DXGDEVICE::Stop(j, a3);
  if ( !a3 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 17));
    for ( k = this[22]; k != (DXGADAPTERSYNCOBJECT *)(this + 22) && k; k = *(DXGADAPTERSYNCOBJECT **)k )
      DXGADAPTERSYNCOBJECT::Stop(k);
    DXGFASTMUTEX::Release(this + 17);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 24, 0LL);
  this[25] = KeGetCurrentThread();
  for ( m = (DXGSHAREDRESOURCE **)this[26]; m != this + 26; m = (DXGSHAREDRESOURCE **)*m )
  {
    DXGSHAREDRESOURCE::DestroyCoreAllocations(m[2], 0LL, 0);
    *((_DWORD *)m[2] + 3) |= 0x10u;
    v15 = m[4];
    if ( v15 )
    {
      Global = DXGGLOBAL::GetGlobal(v14);
      DXGGLOBAL::DestroySyncObject(Global, v15, 0, 0);
      m[4] = 0LL;
    }
  }
  this[25] = 0LL;
  ExReleasePushLockExclusiveEx(this + 24, 0LL);
  KeLeaveCriticalRegion();
  if ( !a3 )
  {
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::SuspendVidMmWorkerThread((__int64)this, 1u, 0);
    ADAPTER_RENDER::ResumeVidMmWorkerThread((PERESOURCE **)this, 0, 0);
    ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5, 0xFFFFFFFF, 0);
  }
}
