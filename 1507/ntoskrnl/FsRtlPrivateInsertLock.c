/*
 * XREFs of FsRtlPrivateInsertLock @ 0x140104D44
 * Callers:
 *     FsRtlPrivateLock @ 0x14010499C (FsRtlPrivateLock.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106130 (FsRtlPrivateCheckWaitingLocks.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1401048DC (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140104EB8 (FsRtlPrivateInsertSharedLock.c)
 */

char __fastcall FsRtlPrivateInsertLock(_QWORD *a1, __int64 a2, _OWORD *a3)
{
  char *v6; // rax
  void *v7; // rbx
  char *v8; // r14
  char *v10; // rax
  char *v11; // rbx

  if ( *((_BYTE *)a3 + 16) )
  {
    v10 = (char *)ExAllocateFromNPagedLookasideList(&FsRtlExclusiveLockLookasideList);
    if ( v10 )
    {
      v11 = v10 + 24;
      *(_OWORD *)(v10 + 24) = *a3;
      *(_OWORD *)(v10 + 40) = a3[1];
      *(_OWORD *)(v10 + 56) = a3[2];
      FsRtlPrivateInsertExclusiveLock((__int64)(a1 + 3), (_RTL_SPLAY_LINKS *)v10);
      *(_QWORD *)(a2 + 120) = v11;
      goto LABEL_5;
    }
    return 0;
  }
  v6 = (char *)ExAllocateFromNPagedLookasideList(&FsRtlSharedLockLookasideList);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = v6 + 8;
  *(_OWORD *)(v6 + 8) = *a3;
  *(_OWORD *)(v6 + 24) = a3[1];
  *(_OWORD *)(v6 + 40) = a3[2];
  if ( !(unsigned __int8)FsRtlPrivateInsertSharedLock(a1 + 3, v6) )
  {
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v7);
    return 0;
  }
  *(_QWORD *)(a2 + 120) = v8;
LABEL_5:
  if ( *(_QWORD *)a3 < *a1 )
    *a1 = *(_QWORD *)a3;
  return 1;
}
