/*
 * XREFs of PoSetPowerRequestInternal @ 0x1400D1CD0
 * Callers:
 *     PoSetPowerRequest @ 0x1400D1CB4 (PoSetPowerRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14015A718 (PpmBeginHighPerfRequest.c)
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

__int64 __fastcall PoSetPowerRequestInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  bool v4; // bp
  __int64 v5; // rdx
  int v6; // r8d
  int v7; // r8d
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  _KPROCESS *Process; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (int)a2;
  v4 = KeGetCurrentIrql() < 2u;
  if ( a2 > 4 || ((1 << a2) & *(_DWORD *)(a1 + 20)) == 0 )
    return (unsigned int)-1073741637;
  if ( a2 != 3 )
    goto LABEL_4;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_KPROCESS **)(a1 + 96) != Process )
    return (unsigned int)-1073741637;
  LOBYTE(Process) = 1;
  PopAcquirePowerRequestPushLock(Process);
LABEL_4:
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v5 = a1 + 4 * v2;
  v6 = *(_DWORD *)(v5 + 32);
  if ( v6 == -1 )
  {
    v10 = -1073741675;
  }
  else
  {
    v7 = v6 + 1;
    *(_DWORD *)(v5 + 32) = v7;
    if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && v7 == 1 )
    {
      v8 = PopPowerRequestAttributes[4 * v2];
      if ( v8 == -1 )
      {
        *(_DWORD *)(v5 + 32) = 0;
        v10 = -1073741675;
        goto LABEL_13;
      }
      v9 = v8 + 1;
      PopPowerRequestAttributes[4 * v2] = v9;
      if ( !(_DWORD)v2 || v9 == 1 || (_DWORD)v2 == 3 )
        PopQueuePowerRequestCallback(a1, v2, 1, !v4);
    }
    PopDiagTracePowerRequestChange(a1);
    v10 = 0;
  }
LABEL_13:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_DWORD)v2 == 3 )
    PopReleasePowerRequestPushLock();
  if ( v4 && *(_BYTE *)(a1 + 77) )
    PopPowerRequestCallbackWorker();
  return v10;
}
