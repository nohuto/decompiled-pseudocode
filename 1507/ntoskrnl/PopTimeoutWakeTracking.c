/*
 * XREFs of PopTimeoutWakeTracking @ 0x1401490D0
 * Callers:
 *     PopWakeSourceTimeoutWorker @ 0x1405677B4 (PopWakeSourceTimeoutWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     PopWakeInfoDereference @ 0x140149020 (PopWakeInfoDereference.c)
 *     PopAcquireWakeSourceSpinLock @ 0x1401491E4 (PopAcquireWakeSourceSpinLock.c)
 *     PopFinalizeWakeInfo @ 0x140567934 (PopFinalizeWakeInfo.c)
 */

void __fastcall PopTimeoutWakeTracking(_QWORD *a1)
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
  v2 = 0LL;
  v8[0] = v8;
  v7 = 0;
  PopAcquireWakeSourceSpinLock(&LockHandle);
  if ( a1 == (_QWORD *)PopCurrentWakeInfo )
  {
    PopCurrentWakeInfo = 0LL;
    PopPendingWakeInfo = (__int64)a1;
    if ( PopWakeSourceWorkInProgress )
    {
      for ( i = qword_14032EFC8; (PVOID *)i != &PopWakeSourceWorkList; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_QWORD **)(i + 24) == a1 )
        {
          *(_QWORD *)(i + 32) = &v5;
          v2 = &v5;
          break;
        }
      }
    }
    PopWakeSourceLockOwner = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v2 )
      KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    PopAcquireWakeSourceSpinLock(&LockHandle);
    if ( a1 == (_QWORD *)PopPendingWakeInfo )
    {
      v3 = PopWakeInfoList;
      *a1 = PopWakeInfoList;
      a1[1] = &PopWakeInfoList;
      if ( *(__int64 **)(v3 + 8) != &PopWakeInfoList )
        __fastfail(3u);
      ++PopWakeInfoCount;
      PopPendingWakeInfo = 0LL;
      PopWakeSourceLockOwner = 0LL;
      *(_QWORD *)(v3 + 8) = a1;
      PopWakeInfoList = (__int64)a1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      PopFinalizeWakeInfo(a1);
      PopAcquireWakeSourceSpinLock(&LockHandle);
    }
  }
  PopWakeInfoDereference((__int64)a1);
  PopWakeSourceLockOwner = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
