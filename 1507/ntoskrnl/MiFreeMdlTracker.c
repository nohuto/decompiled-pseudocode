/*
 * XREFs of MiFreeMdlTracker @ 0x140213FEC
 * Callers:
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiLockTrackerCompare @ 0x140214134 (MiLockTrackerCompare.c)
 */

__int64 __fastcall MiFreeMdlTracker(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  PEPROCESS v2; // r14
  __int64 v5; // rdi
  void *v6; // rbp
  _QWORD *v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(PEPROCESS *)(BugCheckParameter2 + 16);
  if ( !v2 )
    v2 = PsInitialSystemProcess;
  v5 = *(_QWORD *)&v2[1].ThreadSeed[4];
  if ( v5 )
  {
    v6 = 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 16), &LockHandle);
    v7 = *(_QWORD **)v5;
    if ( *(_QWORD *)v5 )
    {
      do
      {
        v8 = MiLockTrackerCompare(BugCheckParameter2, v7);
        if ( v8 >= 0 )
        {
          if ( v8 <= 0 )
            break;
          v7 = (_QWORD *)v7[1];
        }
        else
        {
          v7 = (_QWORD *)*v7;
        }
      }
      while ( v7 );
      if ( v7 )
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
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v6 )
    {
      ExFreeToNPagedLookasideList(&Lookaside, v6);
    }
    else if ( *(_DWORD *)(v5 + 24) )
    {
      KeBugCheckEx(0x76u, 1uLL, BugCheckParameter2, v2[1].Affinity.Bitmap[14], *(_QWORD *)&v2[1].ThreadSeed[4]);
    }
  }
  return 1LL;
}
