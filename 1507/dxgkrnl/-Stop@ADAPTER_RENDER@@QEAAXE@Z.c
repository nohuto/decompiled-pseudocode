/*
 * XREFs of ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0128F10
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z @ 0x1C0082850 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C00834F8 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0090564 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0092240 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0093DB8 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0136F50 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_RENDER::Stop(ADAPTER_RENDER *this, unsigned __int8 a2)
{
  char *v4; // r15
  char *i; // r14
  char *v6; // rax
  PVOID *v7; // rbx
  char *v8; // r15
  char *j; // r14
  char *v10; // rax
  PVOID *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  DXGDEVICE *k; // rbx
  DXGDEVICE *m; // rbx
  DXGADAPTERSYNCOBJECT *n; // rbx
  char *v19; // rsi
  __int64 v20; // r9
  __int64 ***v21; // rdi
  __int64 **ii; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGSYNCOBJECT *v26; // rbp
  PERESOURCE *Global; // rax
  __int64 v28; // r9
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-98h] BYREF
  struct _KAPC_STATE v30; // [rsp+50h] [rbp-68h] BYREF

  ADAPTER_RENDER::EnableClockCalibration(this, 0);
  if ( !a2 )
  {
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5, 0xFFFFFFFF, 0);
    v4 = (char *)this + 104;
    for ( i = (char *)*((_QWORD *)this + 13); ; i = *(char **)i )
    {
      v6 = i;
      if ( i == v4 )
        v6 = 0LL;
      if ( !v6 )
        break;
      v7 = (PVOID *)i;
      if ( i == v4 )
        v7 = 0LL;
      KeStackAttachProcess(*((PRKPROCESS *)v7[5] + 7), &ApcState);
      DXGDEVICE::FlushDeferredDestruction(v7, 0LL, 0);
      KeUnstackDetachProcess(&ApcState);
    }
    v8 = (char *)this + 120;
    for ( j = (char *)*((_QWORD *)this + 15); ; j = *(char **)j )
    {
      v10 = j;
      if ( j == v8 )
        v10 = 0LL;
      if ( !v10 )
        break;
      v11 = (PVOID *)j;
      if ( j == v8 )
        v11 = 0LL;
      KeStackAttachProcess(*((PRKPROCESS *)v11[5] + 7), &v30);
      DXGDEVICE::FlushDeferredDestruction(v11, 0LL, 0);
      KeUnstackDetachProcess(&v30);
    }
    ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5, 0xFFFFFFFF, 0);
    if ( !KeReadStateEvent((PRKEVENT)(*((_QWORD *)this + 2) + 32LL)) )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14);
      v15[3] = 275LL;
      v15[4] = 6LL;
      v15[5] = *((_QWORD *)this + 2);
      v15[6] = 0LL;
      v15[7] = 0LL;
      WdLogEvent5_WdCriticalError(v15);
    }
  }
  for ( k = (DXGDEVICE *)*((_QWORD *)this + 13); k != (ADAPTER_RENDER *)((char *)this + 104) && k; k = *(DXGDEVICE **)k )
    DXGDEVICE::Stop(k, a2);
  for ( m = (DXGDEVICE *)*((_QWORD *)this + 15); m != (ADAPTER_RENDER *)((char *)this + 120) && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::Stop(m, a2);
  if ( !a2 )
  {
    DXGFASTMUTEX::Acquire((ADAPTER_RENDER *)((char *)this + 136));
    for ( n = (DXGADAPTERSYNCOBJECT *)*((_QWORD *)this + 22);
          n != (ADAPTER_RENDER *)((char *)this + 176) && n;
          n = *(DXGADAPTERSYNCOBJECT **)n )
    {
      DXGADAPTERSYNCOBJECT::Stop(n);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 17);
  }
  v19 = (char *)this + 192;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 192, 0LL);
  v21 = (__int64 ***)((char *)this + 208);
  *((_QWORD *)v19 + 1) = KeGetCurrentThread();
  for ( ii = *v21; ii != (__int64 **)v21; ii = (__int64 **)*ii )
  {
    DXGSHAREDRESOURCE::DestroyCoreAllocations((DXGSHAREDRESOURCE *)ii[2], 0LL, 0LL, v20);
    *((_DWORD *)ii[2] + 3) |= 0x10u;
    v26 = (struct DXGSYNCOBJECT *)ii[4];
    if ( v26 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v24, v23, v25, v20);
      DXGGLOBAL::DestroySyncObject(Global, v26, 0LL, v28);
      ii[4] = 0LL;
    }
  }
  *((_QWORD *)v19 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v19, 0LL);
  KeLeaveCriticalRegion();
}
