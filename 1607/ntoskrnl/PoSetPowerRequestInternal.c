/*
 * XREFs of PoSetPowerRequestInternal @ 0x1400F988C
 * Callers:
 *     PoSetPowerRequest @ 0x140112090 (PoSetPowerRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1401323F8 (PpmBeginHighPerfRequest.c)
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

__int64 __fastcall PoSetPowerRequestInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  bool v4; // bp
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // r8d
  int v8; // r8d
  int *v9; // r8
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  _KPROCESS *Process; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (int)a2;
  v4 = KeGetCurrentIrql() < 2u;
  if ( a2 > 5 || ((1 << a2) & *(_DWORD *)(a1 + 20)) == 0 )
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
  v6 = 0xFFFFFFFFLL;
  v7 = *(_DWORD *)(v5 + 32);
  if ( v7 == -1 )
  {
    v12 = -1073741675;
  }
  else
  {
    v8 = v7 + 1;
    *(_DWORD *)(v5 + 32) = v8;
    if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && v8 == 1 )
    {
      v9 = PopPowerRequestAttributes;
      v10 = PopPowerRequestAttributes[4 * v2];
      if ( v10 == -1 )
      {
        *(_DWORD *)(v5 + 32) = 0;
        v12 = -1073741675;
        goto LABEL_12;
      }
      v11 = v10 + 1;
      PopPowerRequestAttributes[4 * v2] = v11;
      if ( (v2 & 0xFFFFFFFC) == 0 && (_DWORD)v2 != 2 || v11 == 1 )
      {
        LOBYTE(v9) = 1;
        LOBYTE(v6) = !v4;
        PopQueuePowerRequestCallback(a1, (unsigned int)v2, v9, v6);
      }
    }
    PopDiagTracePowerRequestChange(a1);
    v12 = 0;
  }
LABEL_12:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_DWORD)v2 == 3 )
    PopReleasePowerRequestPushLock();
  if ( v4 && *(_BYTE *)(a1 + 78) )
    PopPowerRequestCallbackWorker(0LL);
  return v12;
}
