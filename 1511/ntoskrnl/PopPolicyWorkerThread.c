/*
 * XREFs of PopPolicyWorkerThread @ 0x14009934C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopPolicySystemIdle @ 0x140456A94 (PopPolicySystemIdle.c)
 *     PopPolicyWorkerNotify @ 0x140456CA4 (PopPolicyWorkerNotify.c)
 *     PopPolicyWorkerActionPromote @ 0x1404F56DC (PopPolicyWorkerActionPromote.c)
 *     PopPolicyTimeChange @ 0x1404F57E4 (PopPolicyTimeChange.c)
 *     PopPolicyWorkerAction @ 0x1404F7554 (PopPolicyWorkerAction.c)
 *     PopCoalescingNotify @ 0x140635C3C (PopCoalescingNotify.c)
 */

void __fastcall PopPolicyWorkerThread(int a1)
{
  KIRQL v2; // al
  int v3; // edx
  int v4; // edi
  KIRQL v5; // r9
  __int64 v6; // rbx
  int v7; // eax
  __int64 (*v8)(void); // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  v3 = a1 | PopWorkerStatus;
  v4 = 0;
  while ( 1 )
  {
    v5 = v2;
    PopWorkerStatus = v3;
    if ( (v3 & PopWorkerPending) == 0 )
      break;
    _BitScanForward((unsigned int *)&v6, v3 & PopWorkerPending);
    v7 = ~(1 << v6);
    PopWorkerStatus = v7 & v3;
    PopWorkerPending &= v7;
    KeReleaseSpinLock(&PopWorkerSpinLock, v5);
    v8 = PopWorkerTypes[v6];
    if ( v8 )
      v4 |= v8();
    v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
    v3 = (1 << v6) | PopWorkerStatus;
  }
  PopWorkerPending |= v4;
  KeReleaseSpinLock(&PopWorkerSpinLock, v2);
}
