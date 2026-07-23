/*
 * XREFs of PopPolicyWorkerThread @ 0x1400093E8
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopPolicyWorkerNotify @ 0x1403F23C4 (PopPolicyWorkerNotify.c)
 *     PopPolicySystemIdle @ 0x1403F4738 (PopPolicySystemIdle.c)
 *     PopPolicyWorkerAction @ 0x140530B48 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140534D98 (PopPolicyWorkerActionPromote.c)
 *     PopPolicyTimeChange @ 0x140534F0C (PopPolicyTimeChange.c)
 *     PopCoalescingNotify @ 0x14066E158 (PopCoalescingNotify.c)
 *     PopPreCriticalBatteryNotify @ 0x1406726F4 (PopPreCriticalBatteryNotify.c)
 */

void __fastcall PopPolicyWorkerThread(int a1)
{
  KIRQL v2; // al
  int v3; // edx
  int v4; // edi
  __int64 v5; // rbx
  int v6; // eax
  __int64 (*v7)(void); // rcx
  KIRQL v8; // r9

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  v3 = a1 | PopWorkerStatus;
  v4 = 0;
  while ( 1 )
  {
    v8 = v2;
    PopWorkerStatus = v3;
    if ( (v3 & PopWorkerPending) == 0 )
      break;
    _BitScanForward((unsigned int *)&v5, v3 & PopWorkerPending);
    v6 = ~(1 << v5);
    PopWorkerStatus = v6 & v3;
    PopWorkerPending &= v6;
    KeReleaseSpinLock(&PopWorkerSpinLock, v8);
    v7 = PopWorkerTypes[v5];
    if ( v7 )
      v4 |= v7();
    v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
    v3 = (1 << v5) | PopWorkerStatus;
  }
  PopWorkerPending |= v4;
  KeReleaseSpinLock(&PopWorkerSpinLock, v2);
}
