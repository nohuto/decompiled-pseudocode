/*
 * XREFs of ?AcquireLocksForStop@DXGADAPTER@@QEAAXH@Z @ 0x1C00BD548
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078B3C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForStop(DXGADAPTER *this, int a2)
{
  int v4; // edx
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
    DXGADAPTER::AcquireReference(this);
  if ( *((_QWORD *)this + 248) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 104, 0LL) )
        break;
      KeLeaveCriticalRegion();
      v4 = 5;
      if ( !a2 )
        v4 = 9;
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 248), v4, 0xFFFFFFFF, 0);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    *((_QWORD *)this + 14) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2, 1);
}
