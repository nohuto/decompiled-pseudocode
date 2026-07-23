/*
 * XREFs of PopTimeoutWakeTracking @ 0x140125C00
 * Callers:
 *     PopWakeSourceTimeoutWorker @ 0x1405333F0 (PopWakeSourceTimeoutWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PopWakeInfoDereference @ 0x140125D7C (PopWakeInfoDereference.c)
 *     PopFinalizeWakeInfo @ 0x140533570 (PopFinalizeWakeInfo.c)
 */

void __fastcall PopTimeoutWakeTracking(__int64 *a1)
{
  __int16 *v2; // rdi
  __int64 v3; // rax
  __int64 i; // rax
  __int16 v5; // [rsp+30h] [rbp-30h] BYREF
  char v6; // [rsp+32h] [rbp-2Eh]
  int v7; // [rsp+34h] [rbp-2Ch]
  _QWORD v8[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  v5 = 1;
  v8[1] = v8;
  v6 = 6;
  v8[0] = v8;
  v2 = 0LL;
  v7 = 0;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  if ( a1 == (__int64 *)PopCurrentWakeInfo )
  {
    PopCurrentWakeInfo = 0LL;
    PopPendingWakeInfo = (__int64)a1;
    if ( PopWakeSourceWorkInProgress )
    {
      for ( i = qword_140304268; (PVOID *)i != &PopWakeSourceWorkList; i = *(_QWORD *)(i + 8) )
      {
        if ( *(__int64 **)(i + 24) == a1 )
        {
          *(_QWORD *)(i + 32) = &v5;
          v2 = &v5;
          break;
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v2 )
      KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    if ( a1 == (__int64 *)PopPendingWakeInfo )
    {
      v3 = PopWakeInfoList;
      if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
        __fastfail(3u);
      ++PopWakeInfoCount;
      PopPendingWakeInfo = 0LL;
      a1[1] = (__int64)&PopWakeInfoList;
      *a1 = v3;
      *(_QWORD *)(v3 + 8) = a1;
      PopWakeInfoList = (__int64)a1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      PopFinalizeWakeInfo(a1);
      KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    }
  }
  PopWakeInfoDereference(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
