/*
 * XREFs of MiFreeMdlTracker @ 0x1401E2BA0
 * Callers:
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeMdlTracker(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  PEPROCESS v2; // rbp
  __int64 v5; // rbx
  void *v6; // rsi
  _QWORD *v7; // rdx
  ULONG_PTR v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(PEPROCESS *)(BugCheckParameter2 + 16);
  if ( !v2 )
    v2 = PsInitialSystemProcess;
  v5 = *(_QWORD *)&v2[1].ThreadSeed[6];
  if ( v5 )
  {
    v6 = 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 16), &LockHandle);
    v7 = *(_QWORD **)v5;
    while ( v7 )
    {
      v8 = v7[3];
      if ( BugCheckParameter2 < v8 )
      {
        v7 = (_QWORD *)*v7;
      }
      else
      {
        if ( BugCheckParameter2 <= v8 )
        {
          v9 = v7[5];
          v6 = v7;
          if ( v9 != a2 )
            KeBugCheckEx(0x76u, 5uLL, BugCheckParameter2, (ULONG_PTR)v7, a2 | (v9 << 32));
          v10 = *(_QWORD *)(BugCheckParameter2 + 48);
          v11 = v7[7];
          if ( v11 != v10 )
            KeBugCheckEx(0x76u, 6uLL, BugCheckParameter2, (ULONG_PTR)v7, v10 | (v11 << 32));
          RtlAvlRemoveNode((unsigned __int64 *)v5, (__int64)v7);
          *(_QWORD *)(v5 + 8) -= a2;
          break;
        }
        v7 = (_QWORD *)v7[1];
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v6 )
    {
      ExFreeToNPagedLookasideList(&Lookaside, v6);
    }
    else if ( *(_DWORD *)(v5 + 24) )
    {
      KeBugCheckEx(0x76u, 1uLL, BugCheckParameter2, v2[1].Affinity.Bitmap[14], *(_QWORD *)&v2[1].ThreadSeed[6]);
    }
  }
  return 1LL;
}
