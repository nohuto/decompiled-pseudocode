/*
 * XREFs of PopWakeDeviceList @ 0x1403EE7E8
 * Callers:
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x14002123C (KeInitializeSemaphore.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     PopNotifyDevice @ 0x1403EEB1C (PopNotifyDevice.c)
 */

int __fastcall PopWakeDeviceList(_QWORD *a1, __int64 a2)
{
  __int64 **v2; // r14
  __int64 **v3; // rax
  LONG v5; // ecx
  int v6; // ebx
  LONG v7; // edi
  struct _KSEMAPHORE *p_Object; // rax
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 **v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  struct _KSEMAPHORE Object; // [rsp+48h] [rbp-50h] BYREF
  struct _KSEMAPHORE Semaphore; // [rsp+68h] [rbp-30h] BYREF

  v2 = (__int64 **)(a2 + 40);
  v3 = *(__int64 ***)(a2 + 40);
  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 4);
  while ( v3 != v2 )
  {
    v3 = (__int64 **)*v3;
    ++v5;
  }
  KeInitializeSemaphore(&Semaphore, v5, v7);
  KeInitializeSemaphore(&Object, 0, v7);
  a1[4] = &Semaphore;
  p_Object = &Object;
  a1[5] = &Object;
  if ( v7 > 0 )
  {
    do
    {
      KeWaitForSingleObject(&Semaphore, Executive, 0, 0, 0LL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_14032E1F0 + 1, &LockHandle);
      v9 = *v2;
      PopDevStateLockThread = (__int64)KeGetCurrentThread();
      v10 = *v9;
      if ( (__int64 **)v9[1] != v2 || *(__int64 **)(v10 + 8) != v9 )
        __fastfail(3u);
      *v2 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v2;
      v11 = (__int64 **)a1[54];
      *v9 = (__int64)(a1 + 53);
      v9[1] = (__int64)v11;
      if ( *v11 != a1 + 53 )
        __fastfail(3u);
      PopDevStateLockThread = 0LL;
      *v11 = v9;
      a1[54] = v9;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      --v7;
      ++v6;
      LODWORD(p_Object) = PopNotifyDevice(a1, v9);
      if ( (PopSimulate & 0x80000) != 0 )
      {
        while ( v6 > 0 )
        {
          LODWORD(p_Object) = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          --v6;
        }
      }
    }
    while ( v7 > 0 );
    while ( v6 > 0 )
    {
      LODWORD(p_Object) = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      --v6;
    }
  }
  a1[4] = 0LL;
  a1[5] = 0LL;
  return (int)p_Object;
}
