/*
 * XREFs of PopSystemRequiredPowerRequest @ 0x140009BA8
 * Callers:
 *     PopSystemRequiredCallback @ 0x1405206C0 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x140520920 (PopExecutionRequiredCallback.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x1403F5C64 (PopCheckResiliencyScenarios.c)
 */

__int64 __fastcall PopSystemRequiredPowerRequest(char a1, int a2)
{
  int v4; // ebx
  int v5; // ecx
  bool v6; // zf
  int v8; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2 & 2 | 1;
  PopAcquirePolicyLock();
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v5 = PopPowerRequestAttributes[4 * v4];
  if ( a1 )
  {
    v6 = v5 == 0;
    if ( v5 > 0 )
    {
      dword_1403033A4 |= a2;
      goto LABEL_4;
    }
  }
  else
  {
    v6 = v5 == 0;
  }
  v8 = dword_1403033A4;
  if ( v6 )
  {
    v8 = ~a2 & dword_1403033A4;
    dword_1403033A4 = v8;
  }
  if ( !v8 )
    dword_1403033C0 = dword_140303388;
LABEL_4:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PopCheckResiliencyScenarios();
  return PopReleasePolicyLock();
}
