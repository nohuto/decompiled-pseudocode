/*
 * XREFs of PoClearPowerRequestInternal @ 0x140097640
 * Callers:
 *     PoClearPowerRequest @ 0x140096E74 (PoClearPowerRequest.c)
 *     PoClearPowerRequestInternalDeferred @ 0x140126A14 (PoClearPowerRequestInternalDeferred.c)
 *     PopDelayedPowerRequestClearDpc @ 0x140127228 (PopDelayedPowerRequestClearDpc.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x1404544B8 (PopPowerRequestActionInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     PopDiagTracePowerRequestChange @ 0x14009789C (PopDiagTracePowerRequestChange.c)
 *     PopPowerRequestCallbackWorker @ 0x1400989E8 (PopPowerRequestCallbackWorker.c)
 *     PopQueuePowerRequestCallback @ 0x140098F88 (PopQueuePowerRequestCallback.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     PopReleasePowerRequestPushLock @ 0x140455D44 (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x140455DB0 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PoClearPowerRequestInternal(__int64 a1, signed int a2)
{
  __int64 v2; // rdi
  bool v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // r9
  int v7; // ecx
  int v8; // eax
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
  v7 = *(_DWORD *)(a1 + 4 * v2 + 32) - 1;
  *(_DWORD *)(a1 + 4 * v2 + 32) = v7;
  if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && !v7 )
  {
    v8 = PopPowerRequestAttributes[4 * v2] - 1;
    PopPowerRequestAttributes[4 * v2] = v8;
    if ( !(_DWORD)v2 || (_DWORD)v2 == 3 || !v8 )
    {
      LOBYTE(v6) = !v4;
      PopQueuePowerRequestCallback(a1, (unsigned int)v2, 0LL, v6);
    }
  }
  PopDiagTracePowerRequestChange(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_DWORD)v2 == 3 )
    PopReleasePowerRequestPushLock();
  if ( v4 && *(_BYTE *)(a1 + 77) )
    PopPowerRequestCallbackWorker(0LL);
  return v5;
}
