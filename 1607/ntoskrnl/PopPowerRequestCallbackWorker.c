/*
 * XREFs of PopPowerRequestCallbackWorker @ 0x1400FBE30
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1400FB9D0 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400FBB0C (PoSetPowerRequestInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PopPowerRequestExecuteCallbacks @ 0x1400FBF2C (PopPowerRequestExecuteCallbacks.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

void PopPowerRequestCallbackWorker()
{
  _QWORD *v0; // rax
  __int64 v1; // rbx
  int v2; // edi
  char *v3; // rcx
  __int64 v4; // rdx
  char v5; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[8]; // [rsp+38h] [rbp-20h] BYREF

  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    if ( (__int64 *)PopPowerRequestCallbacks == &PopPowerRequestCallbacks )
    {
      v1 = 0LL;
      v2 = 0;
      PopCallbackWorkItemScheduled = 0;
    }
    else
    {
      v0 = *(_QWORD **)(qword_140304C38 + 8);
      if ( *(__int64 **)qword_140304C38 != &PopPowerRequestCallbacks || *v0 != qword_140304C38 )
        __fastfail(3u);
      v1 = qword_140304C38 - 56;
      qword_140304C38 = *(_QWORD *)(qword_140304C38 + 8);
      v2 = 0;
      *v0 = &PopPowerRequestCallbacks;
      v3 = (char *)(v1 + 72);
      v4 = 6LL;
      do
      {
        v5 = *v3;
        v7[(_QWORD)v3 - v1 - 72] = *v3;
        if ( v5 )
        {
          *v3 = 0;
          ++v2;
        }
        ++v3;
        --v4;
      }
      while ( v4 );
      *(_BYTE *)(v1 + 78) = 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v1 )
      break;
    if ( v2 )
      PopPowerRequestExecuteCallbacks(v7, *(unsigned int *)(v1 + 28), *(unsigned int *)(v1 + 16));
    ObfDereferenceObjectWithTag((PVOID)v1, 0x746C6644u);
  }
}
