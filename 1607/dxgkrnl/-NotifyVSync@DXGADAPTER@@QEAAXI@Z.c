/*
 * XREFs of ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C00088E0
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C0011270 (DxgNotifyVSyncCB.c)
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C001D064 (-RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyVSync(LARGE_INTEGER *this, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  DWORD v5; // esi
  LARGE_INTEGER v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(this, &EventProfilerEnter, a3, 8009LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&this[430].QuadPart, &LockHandle);
  v5 = 0;
  if ( !this[406].LowPart )
  {
    v6 = this[432];
    if ( v6.QuadPart )
      _InterlockedExchange64((volatile __int64 *)&this[433], PerformanceCounter.QuadPart - v6.QuadPart);
    this[432] = PerformanceCounter;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( this[435].LowPart )
  {
    do
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync((DXGPOWERSTATISTICSTRANSITIONENGINE *)(this[434].QuadPart
                                                                                           + 136
                                                                                           + 248LL * v5++));
    while ( v5 < this[435].LowPart );
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v7, &EventProfilerExit, v8, 8009LL);
}
