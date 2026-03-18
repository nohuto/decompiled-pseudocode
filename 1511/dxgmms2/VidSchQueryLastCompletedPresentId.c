/*
 * XREFs of VidSchQueryLastCompletedPresentId @ 0x1C00228B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryLastCompletedPresentId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = (unsigned int)a2;
  if ( a1 && a3 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)a2 < *(_DWORD *)(v7 + 40) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1832), &LockHandle);
      *(_DWORD *)a3 = *(_DWORD *)(a1 + 4 * v4 + 476);
      v9 = *(_DWORD *)(a1 + 4 * v4 + 540);
      *(_DWORD *)(a3 + 8) = v9;
      *(_DWORD *)(a3 + 4) = v9;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 8 * v4 + 608);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(a1 + 8 * v4 + 736);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    v8 = WdLogNewEntry5_WdAssertion(v7, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = v4;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdAssertion(v8);
  return 3221225485LL;
}
