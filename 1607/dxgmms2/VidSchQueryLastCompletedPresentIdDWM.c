/*
 * XREFs of VidSchQueryLastCompletedPresentIdDWM @ 0x1C00106E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryLastCompletedPresentIdDWM(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  v3 = (unsigned int)a2;
  if ( a1 && a3 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)a2 >= *(_DWORD *)(v6 + 40) )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v8 + 24) = v3;
      *(_QWORD *)(v8 + 32) = -1073741811LL;
      WdLogEvent5_WdAssertion(v8);
      return 3221225485LL;
    }
    else
    {
      _mm_lfence();
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1856), &LockHandle);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1864), &v10);
      *(_DWORD *)a3 = *(_DWORD *)(a1 + 4 * v3 + 468);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 4 * v3 + 532);
      *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 8 * v3 + 600);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v10);
      *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v3 + 2968) + 18768LL);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(*(_QWORD *)(v6 + 8 * v3 + 2968) + 18776LL);
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v3 + 2968) + 120LL);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
}
