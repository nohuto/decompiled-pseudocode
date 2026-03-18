/*
 * XREFs of VidSchQueryLastCompletedPresentIdDWM @ 0x1C0012910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryLastCompletedPresentIdDWM(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  v4 = (unsigned int)a2;
  if ( a1 && a3 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)a2 >= *(_DWORD *)(v7 + 40) )
    {
      v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v9 + 24) = v4;
      *(_QWORD *)(v9 + 32) = -1073741811LL;
      WdLogEvent5_WdAssertion(v9);
      return 3221225485LL;
    }
    else
    {
      _mm_lfence();
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1824), &LockHandle);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1832), &v11);
      *(_DWORD *)a3 = *(_DWORD *)(a1 + 4 * v4 + 476);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 4 * v4 + 540);
      *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 8 * v4 + 608);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v11);
      *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(v7 + 8 * v4 + 2592) + 14664LL);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(*(_QWORD *)(v7 + 8 * v4 + 2592) + 14672LL);
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(*(_QWORD *)(v7 + 8 * v4 + 2592) + 120LL);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v10);
    return 3221225485LL;
  }
}
