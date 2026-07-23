/*
 * XREFs of FsRtlUninitializeFileLock @ 0x1400B1FCC
 * Callers:
 *     FsRtlFreeFileLock @ 0x1400B1FA8 (FsRtlFreeFileLock.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     RtlDeleteNoSplay @ 0x1400C2930 (RtlDeleteNoSplay.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlCompleteLockIrpReal @ 0x1401332E0 (FsRtlCompleteLockIrpReal.c)
 */

void __stdcall FsRtlUninitializeFileLock(PFILE_LOCK FileLock)
{
  char *LockInformation; // rbx
  KIRQL v3; // r12
  _QWORD *v4; // rsi
  PRTL_SPLAY_LINKS *v5; // rsi
  PRTL_SPLAY_LINKS v6; // rdi
  _RTL_SPLAY_LINKS *v7; // rdi
  _RTL_SPLAY_LINKS *Parent; // rdx
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  KIRQL v11; // dl
  char v12; // [rsp+60h] [rbp+8h] BYREF

  LockInformation = (char *)FileLock->LockInformation;
  if ( LockInformation )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
    KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    v4 = LockInformation + 32;
    while ( *v4 )
    {
      v7 = (_RTL_SPLAY_LINKS *)(*v4 - 24LL);
      while ( v7->Parent )
      {
        Parent = v7->Parent;
        v7->Parent = v7->Parent->Parent;
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
      }
      RtlDeleteNoSplay(v7 + 1, (PRTL_SPLAY_LINKS *)LockInformation + 4);
      ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v7);
    }
    v5 = (PRTL_SPLAY_LINKS *)(LockInformation + 40);
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 )
        break;
      RtlDeleteNoSplay(*v5, (PRTL_SPLAY_LINKS *)LockInformation + 5);
      ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v6);
    }
    while ( *((_QWORD *)LockInformation + 6) )
    {
      v9 = (_QWORD *)*((_QWORD *)LockInformation + 6);
      if ( v9 )
        *((_QWORD *)LockInformation + 6) = *v9;
      v10 = v9[3];
      KxReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3);
      IoAcquireCancelSpinLock((PKIRQL)(v10 + 69));
      _InterlockedExchange64((volatile __int64 *)(v10 + 104), 0LL);
      v11 = *(_BYTE *)(v10 + 69);
      if ( *(_BYTE *)(v10 + 68) )
      {
        KeReleaseQueuedSpinLock(7uLL, v11);
        *v9 = FsRtlFileLockCancelCollideList;
        FsRtlFileLockCancelCollideList = (__int64)v9;
      }
      else
      {
        KeReleaseQueuedSpinLock(7uLL, v11);
        KeReleaseSpinLock(&FsRtlFileLockCancelCollideLock, v3);
        *(_QWORD *)(v10 + 56) = 0LL;
        FsRtlCompleteLockIrpReal(*((_QWORD *)LockInformation + 1), v9[2], v10, -1073741698, (__int64)&v12, 0LL);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v9);
        v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3);
    KeReleaseSpinLock(&FsRtlFileLockCancelCollideLock, v3);
    ExFreeToNPagedLookasideList(&FsRtlLockInfoLookasideList, LockInformation);
    FileLock->LockInformation = 0LL;
  }
}
