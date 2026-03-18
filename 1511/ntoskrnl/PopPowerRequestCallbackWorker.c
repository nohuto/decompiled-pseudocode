/*
 * XREFs of PopPowerRequestCallbackWorker @ 0x1400989E8
 * Callers:
 *     PoClearPowerRequestInternal @ 0x140097640 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140097768 (PoSetPowerRequestInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PopPowerRequestExecuteCallbacks @ 0x140098D50 (PopPowerRequestExecuteCallbacks.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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
      v0 = *(_QWORD **)(qword_1402DF698 + 8);
      if ( *(__int64 **)qword_1402DF698 != &PopPowerRequestCallbacks || *v0 != qword_1402DF698 )
        __fastfail(3u);
      v1 = qword_1402DF698 - 56;
      qword_1402DF698 = *(_QWORD *)(qword_1402DF698 + 8);
      v2 = 0;
      *v0 = &PopPowerRequestCallbacks;
      v3 = (char *)(v1 + 72);
      v4 = 5LL;
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
      *(_BYTE *)(v1 + 77) = 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v1 )
      break;
    if ( v2 )
      PopPowerRequestExecuteCallbacks(v7, *(unsigned int *)(v1 + 28), *(unsigned int *)(v1 + 16));
    ObfDereferenceObjectWithTag((PVOID)v1, 0x746C6644u);
  }
}
