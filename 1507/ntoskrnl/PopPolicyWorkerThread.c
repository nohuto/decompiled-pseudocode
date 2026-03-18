/*
 * XREFs of PopPolicyWorkerThread @ 0x1400D0054
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PopPolicySystemIdle @ 0x1404E3E64 (PopPolicySystemIdle.c)
 *     PopPolicyWorkerNotify @ 0x1404E50D4 (PopPolicyWorkerNotify.c)
 *     PopPolicyWorkerAction @ 0x140566108 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1405699EC (PopPolicyWorkerActionPromote.c)
 *     PopPolicyTimeChange @ 0x140569D14 (PopPolicyTimeChange.c)
 *     PopCoalescingNotify @ 0x1406B540C (PopCoalescingNotify.c)
 */

__int64 __fastcall PopPolicyWorkerThread(int a1)
{
  unsigned __int8 CurrentIrql; // di
  int v3; // edx
  int v4; // esi
  int v5; // ebp
  int v6; // eax
  __int64 (*v7)(void); // rcx
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PopWorkerSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopWorkerSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopWorkerSpinLock);
  }
  v3 = a1 | PopWorkerStatus;
  v4 = 0;
  while ( 1 )
  {
    PopWorkerStatus = v3;
    if ( (v3 & PopWorkerPending) == 0 )
      break;
    _BitScanForward((unsigned int *)&v5, v3 & PopWorkerPending);
    v6 = ~(1 << v5);
    PopWorkerPending &= v6;
    PopWorkerStatus = v6 & v3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PopWorkerSpinLock, retaddr);
    else
      _InterlockedAnd64(&PopWorkerSpinLock, 0LL);
    __writecr8(CurrentIrql);
    v7 = PopWorkerTypes[v5];
    if ( v7 )
      v4 |= v7();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&PopWorkerSpinLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopWorkerSpinLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopWorkerSpinLock);
    }
    v3 = (1 << v5) | PopWorkerStatus;
  }
  PopWorkerPending |= v4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PopWorkerSpinLock, retaddr);
  else
    _InterlockedAnd64(&PopWorkerSpinLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
