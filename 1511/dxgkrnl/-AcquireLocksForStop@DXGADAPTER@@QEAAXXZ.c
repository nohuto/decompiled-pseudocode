/*
 * XREFs of ?AcquireLocksForStop@DXGADAPTER@@QEAAXXZ @ 0x1C0125154
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForStop(DXGADAPTER *this)
{
  bool v2; // zf
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  DXGADAPTER::AcquireReference(this);
  v2 = *((_QWORD *)this + 249) == 0LL;
  *((_DWORD *)this + 40) = 5;
  if ( !v2 )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 104, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 249), 3, 0xFFFFFFFF, 0);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    *((_QWORD *)this + 14) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2, 1);
}
