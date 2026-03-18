/*
 * XREFs of PoClearPowerRequestInternal @ 0x1400D1B8C
 * Callers:
 *     PoClearPowerRequest @ 0x1400D202C (PoClearPowerRequest.c)
 *     PoClearPowerRequestInternalDeferred @ 0x14015A1E4 (PoClearPowerRequestInternalDeferred.c)
 *     PopDelayedPowerRequestClearDpc @ 0x14015A744 (PopDelayedPowerRequestClearDpc.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x1404E9BB8 (PopPowerRequestActionInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPowerRequestCallbackWorker @ 0x1400D08B8 (PopPowerRequestCallbackWorker.c)
 *     PopQueuePowerRequestCallback @ 0x1400D09B4 (PopQueuePowerRequestCallback.c)
 *     PopDiagTracePowerRequestChange @ 0x1400D1E04 (PopDiagTracePowerRequestChange.c)
 *     PopReleasePowerRequestPushLock @ 0x1404E6108 (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PoClearPowerRequestInternal(__int64 a1, signed int a2)
{
  __int64 v2; // rdi
  bool v4; // r15
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // eax
  _KPROCESS *Process; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  v4 = KeGetCurrentIrql() < 2u;
  if ( (unsigned int)a2 > 4 )
    return (unsigned int)-1073741637;
  if ( ((1 << a2) & *(_DWORD *)(a1 + 20)) == 0 )
    return (unsigned int)-1073741637;
  v5 = 0;
  if ( !*(_DWORD *)(a1 + 4LL * a2 + 32) )
    return (unsigned int)-1073741637;
  if ( a2 != 3 )
    goto LABEL_5;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_KPROCESS **)(a1 + 96) != Process )
    return (unsigned int)-1073741637;
  LOBYTE(Process) = 1;
  PopAcquirePowerRequestPushLock(Process);
LABEL_5:
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v6 = *(_DWORD *)(a1 + 4 * v2 + 32) - 1;
  *(_DWORD *)(a1 + 4 * v2 + 32) = v6;
  if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && !v6 )
  {
    v7 = PopPowerRequestAttributes[4 * v2] - 1;
    PopPowerRequestAttributes[4 * v2] = v7;
    if ( !(_DWORD)v2 || (_DWORD)v2 == 3 || !v7 )
      PopQueuePowerRequestCallback(a1, v2, 0, !v4);
  }
  PopDiagTracePowerRequestChange(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_DWORD)v2 == 3 )
    PopReleasePowerRequestPushLock();
  if ( v4 && *(_BYTE *)(a1 + 77) )
    PopPowerRequestCallbackWorker();
  return v5;
}
