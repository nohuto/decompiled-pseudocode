/*
 * XREFs of ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C001EF78
 * Callers:
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C0019A38 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C001EB8C (-CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync(KSPIN_LOCK *this)
{
  signed __int64 v2; // r9
  __int64 v3; // r8
  signed __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(this + 3, &LockHandle);
  if ( *((_BYTE *)this + 88) != 1 )
  {
    v2 = this[4];
    if ( v2 > (__int64)this[5] )
    {
      v3 = *(unsigned int *)(this[2] + 4LL * *((unsigned int *)this + 14) + 4);
      v4 = *(_QWORD *)(*this + 2896) - v2;
      this[4] = *(_QWORD *)(*this + 2896);
      this[9] += v4 * v3;
    }
    LODWORD(v5) = 0;
    if ( this[4] )
    {
      v6 = *(_QWORD *)(*this + 2904);
      if ( v6 )
        v5 = (__int64)(1000 * this[9]) / *(unsigned int *)(this[2] + 4LL * *((unsigned int *)this + 14) + 4) / v6;
    }
    DXGPOWERSTATISTICSTRANSITIONENGINE::CalculatePState((DXGPOWERSTATISTICSTRANSITIONENGINE *)this, v5);
    this[9] = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
