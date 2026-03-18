/*
 * XREFs of ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C00029D0
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C0010C90 (DxgNotifyVSyncCB.c)
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0018EE8 (-RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyVSync(LARGE_INTEGER *this, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  DWORD v5; // esi
  LARGE_INTEGER v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(this, &EventProfilerEnter, a3, 8009LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&this[362].QuadPart, &LockHandle);
  v5 = 0;
  if ( !this[338].LowPart )
  {
    v6 = this[364];
    if ( v6.QuadPart )
      _InterlockedExchange64((volatile __int64 *)&this[365], PerformanceCounter.QuadPart - v6.QuadPart);
    this[364] = PerformanceCounter;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( this[367].LowPart )
  {
    do
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync((DXGPOWERSTATISTICSTRANSITIONENGINE *)(this[366].QuadPart
                                                                                           + 136
                                                                                           + 248LL * v5++));
    while ( v5 < this[367].LowPart );
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v7, &EventProfilerExit, v8, 8009LL);
}
