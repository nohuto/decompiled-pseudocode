/*
 * XREFs of ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C000D8E0
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0008E04 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0010FA4 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C001D918 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C001DC80 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

DXGAUTOSPINLOCK *__fastcall DXGAUTOSPINLOCK::DXGAUTOSPINLOCK(DXGAUTOSPINLOCK *this, KSPIN_LOCK *a2, char a3)
{
  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 40) = 0;
  if ( a3 )
  {
    KeAcquireInStackQueuedSpinLock(a2, (PKLOCK_QUEUE_HANDLE)((char *)this + 16));
    a2[1] = (KSPIN_LOCK)KeGetCurrentThread();
    *((_BYTE *)this + 40) = 1;
  }
  return this;
}
