/*
 * XREFs of ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C012F574
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0065A5C (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0068A90 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z @ 0x1C006A77C (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C006A7C8 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z @ 0x1C006BC58 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C00939A0 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00CC378 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C013B664 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_RENDER::Stop(union _LARGE_INTEGER *this, unsigned __int8 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax
  union _LARGE_INTEGER *v8; // r14
  DXGDEVICE *i; // rsi
  union _LARGE_INTEGER *v10; // rax
  DXGDEVICE *v11; // rbx
  union _LARGE_INTEGER *v12; // r14
  DXGDEVICE *j; // rsi
  union _LARGE_INTEGER *v14; // rax
  DXGDEVICE *v15; // rbx
  DXGDEVICE *k; // rbx
  DXGDEVICE *m; // rbx
  DXGADAPTERSYNCOBJECT *n; // rbx
  union _LARGE_INTEGER ii; // rbx
  __int64 v20; // rcx
  struct DXGSYNCOBJECT *v21; // r15
  DXGGLOBAL *Global; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-98h] BYREF
  struct _KAPC_STATE v24; // [rsp+50h] [rbp-68h] BYREF

  ADAPTER_RENDER::EnableClockCalibration((ADAPTER_RENDER *)this, 0);
  if ( !a2 )
  {
    if ( !KeReadStateEvent((PRKEVENT)(this[2].QuadPart + 32)) )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4, v6);
      v7[3] = 275LL;
      v7[4] = 6LL;
      v7[5] = this[2].QuadPart;
      v7[6] = 0LL;
      v7[7] = 0LL;
      WdLogEvent5_WdCriticalError(v7);
    }
    v8 = this + 13;
    for ( i = (DXGDEVICE *)this[13].QuadPart; ; i = *(DXGDEVICE **)i )
    {
      v10 = (union _LARGE_INTEGER *)i;
      if ( i == (DXGDEVICE *)v8 )
        v10 = 0LL;
      if ( !v10 )
        break;
      v11 = i;
      if ( i == (DXGDEVICE *)v8 )
        v11 = 0LL;
      KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v11 + 5) + 56LL), &ApcState);
      DXGDEVICE::FlushDeferredDestruction(v11, 0LL, 0);
      KeUnstackDetachProcess(&ApcState);
    }
    v12 = this + 15;
    for ( j = (DXGDEVICE *)this[15].QuadPart; ; j = *(DXGDEVICE **)j )
    {
      v14 = (union _LARGE_INTEGER *)j;
      if ( j == (DXGDEVICE *)v12 )
        v14 = 0LL;
      if ( !v14 )
        break;
      v15 = j;
      if ( j == (DXGDEVICE *)v12 )
        v15 = 0LL;
      KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v15 + 5) + 56LL), &v24);
      DXGDEVICE::FlushDeferredDestruction(v15, 0LL, 0);
      KeUnstackDetachProcess(&v24);
    }
  }
  for ( k = (DXGDEVICE *)this[13].QuadPart; k != (DXGDEVICE *)&this[13] && k; k = *(DXGDEVICE **)k )
    DXGDEVICE::Stop(k, a2);
  for ( m = (DXGDEVICE *)this[15].QuadPart; m != (DXGDEVICE *)&this[15] && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::Stop(m, a2);
  if ( !a2 )
  {
    DXGFASTMUTEX::Acquire(this + 17);
    for ( n = (DXGADAPTERSYNCOBJECT *)this[25].QuadPart;
          n != (DXGADAPTERSYNCOBJECT *)&this[25] && n;
          n = *(DXGADAPTERSYNCOBJECT **)n )
    {
      DXGADAPTERSYNCOBJECT::Stop(n);
    }
    DXGFASTMUTEX::Release((DXGFASTMUTEX *)&this[17]);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&this[27], 0LL);
  this[28].QuadPart = (LONGLONG)KeGetCurrentThread();
  for ( ii = this[29]; (union _LARGE_INTEGER *)ii.QuadPart != &this[29]; ii = *(union _LARGE_INTEGER *)ii.QuadPart )
  {
    DXGSHAREDRESOURCE::DestroyCoreAllocations(*(DXGSHAREDRESOURCE **)(ii.QuadPart + 16), 0LL, 0);
    *(_DWORD *)(*(_QWORD *)(ii.QuadPart + 16) + 12LL) |= 0x10u;
    v21 = *(struct DXGSYNCOBJECT **)(ii.QuadPart + 32);
    if ( v21 )
    {
      Global = DXGGLOBAL::GetGlobal(v20);
      DXGGLOBAL::DestroySyncObject(Global, v21, 0);
      *(_QWORD *)(ii.QuadPart + 32) = 0LL;
    }
  }
  this[28].QuadPart = 0LL;
  ExReleasePushLockExclusiveEx(&this[27], 0LL);
  KeLeaveCriticalRegion();
  if ( !a2 )
  {
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::SuspendVidMmWorkerThread((__int64)this, 1u, 0);
    ADAPTER_RENDER::ResumeVidMmWorkerThread((PERESOURCE **)this, 0);
    ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5, 0xFFFFFFFF, 0);
  }
}
