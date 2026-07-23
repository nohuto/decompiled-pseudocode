/*
 * XREFs of PoClearPowerRequestInternal @ 0x1400F9750
 * Callers:
 *     PoClearPowerRequest @ 0x1401120AC (PoClearPowerRequest.c)
 *     PoClearPowerRequestInternalDeferred @ 0x140131AE0 (PoClearPowerRequestInternalDeferred.c)
 *     PopDelayedPowerRequestClearDpc @ 0x14013246C (PopDelayedPowerRequestClearDpc.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x140502F60 (PopPowerRequestActionInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopDiagTracePowerRequestChange @ 0x1400F99D0 (PopDiagTracePowerRequestChange.c)
 *     PopQueuePowerRequestCallback @ 0x1400F9ADC (PopQueuePowerRequestCallback.c)
 *     PopPowerRequestCallbackWorker @ 0x1400F9BB0 (PopPowerRequestCallbackWorker.c)
 *     PopReleasePowerRequestPushLock @ 0x1405036FC (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
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
  if ( (unsigned int)a2 > 5 )
    return (unsigned int)-1073741637;
  if ( ((1 << a2) & *(_DWORD *)(a1 + 20)) == 0 )
    return (unsigned int)-1073741637;
  v5 = 0;
  if ( !*(_DWORD *)(a1 + 4LL * a2 + 32) )
    return (unsigned int)-1073741637;
  if ( a2 == 3 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( *(_KPROCESS **)(a1 + 96) == Process )
    {
      LOBYTE(Process) = 1;
      PopAcquirePowerRequestPushLock(Process);
      goto LABEL_5;
    }
    return (unsigned int)-1073741637;
  }
LABEL_5:
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v7 = *(_DWORD *)(a1 + 4 * v2 + 32) - 1;
  *(_DWORD *)(a1 + 4 * v2 + 32) = v7;
  if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && !v7 )
  {
    if ( (v8 = PopPowerRequestAttributes[4 * v2] - 1, PopPowerRequestAttributes[4 * v2] = v8, (v2 & 0xFFFFFFFC) == 0)
      && (_DWORD)v2 != 2
      || !v8 )
    {
      LOBYTE(v6) = !v4;
      PopQueuePowerRequestCallback(a1, (unsigned int)v2, 0LL, v6);
    }
  }
  PopDiagTracePowerRequestChange(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_DWORD)v2 == 3 )
    PopReleasePowerRequestPushLock();
  if ( v4 && *(_BYTE *)(a1 + 78) )
    PopPowerRequestCallbackWorker(0LL);
  return v5;
}
