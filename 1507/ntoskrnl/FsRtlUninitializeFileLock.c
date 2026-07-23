/*
 * XREFs of FsRtlUninitializeFileLock @ 0x14012EC68
 * Callers:
 *     FsRtlFreeFileLock @ 0x14012EC44 (FsRtlFreeFileLock.c)
 *     VerifierFsRtlUninitializeFileLock @ 0x140741E90 (VerifierFsRtlUninitializeFileLock.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlDeleteNoSplay @ 0x1401057D0 (RtlDeleteNoSplay.c)
 *     FsRtlCompleteLockIrpReal @ 0x140106380 (FsRtlCompleteLockIrpReal.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall FsRtlUninitializeFileLock(PFILE_LOCK FileLock)
{
  char *LockInformation; // rsi
  PFILE_LOCK v2; // r13
  unsigned __int8 CurrentIrql; // r12
  volatile signed __int32 *v4; // rbx
  _QWORD *v5; // r15
  PRTL_SPLAY_LINKS *v6; // r14
  PRTL_SPLAY_LINKS v7; // rbp
  _RTL_SPLAY_LINKS *v8; // r14
  _RTL_SPLAY_LINKS *Parent; // rdx
  _QWORD *v10; // r14
  __int64 v11; // rbp
  KIRQL v12; // dl
  unsigned __int8 v13; // bp
  void *retaddr; // [rsp+58h] [rbp+0h]
  NTSTATUS v16; // [rsp+68h] [rbp+10h] BYREF

  LockInformation = (char *)FileLock->LockInformation;
  v2 = FileLock;
  if ( LockInformation )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&FsRtlFileLockCancelCollideLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&FsRtlFileLockCancelCollideLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&FsRtlFileLockCancelCollideLock);
    }
    v4 = (volatile signed __int32 *)(LockInformation + 24);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(LockInformation + 24);
    }
    else if ( _interlockedbittestandset64(v4, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)LockInformation + 6);
    }
    v5 = LockInformation + 32;
    while ( *v5 )
    {
      v8 = (_RTL_SPLAY_LINKS *)(*v5 - 24LL);
      while ( v8->Parent )
      {
        Parent = v8->Parent;
        v8->Parent = v8->Parent->Parent;
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
      }
      RtlDeleteNoSplay(v8 + 1, (PRTL_SPLAY_LINKS *)LockInformation + 4);
      ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v8);
    }
    v6 = (PRTL_SPLAY_LINKS *)(LockInformation + 40);
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      RtlDeleteNoSplay(*v6, (PRTL_SPLAY_LINKS *)LockInformation + 5);
      ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v7);
    }
    if ( *((_QWORD *)LockInformation + 6) )
    {
      do
      {
        v10 = (_QWORD *)*((_QWORD *)LockInformation + 6);
        if ( v10 )
          *((_QWORD *)LockInformation + 6) = *v10;
        v11 = v10[3];
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(LockInformation + 24, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
        IoAcquireCancelSpinLock((PKIRQL)(v11 + 69));
        _InterlockedExchange64((volatile __int64 *)(v11 + 104), 0LL);
        v12 = *(_BYTE *)(v11 + 69);
        if ( *(_BYTE *)(v11 + 68) )
        {
          KeReleaseQueuedSpinLock(7uLL, v12);
          *v10 = FsRtlFileLockCancelCollideList;
          FsRtlFileLockCancelCollideList = (__int64)v10;
        }
        else
        {
          KeReleaseQueuedSpinLock(7uLL, v12);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(&FsRtlFileLockCancelCollideLock, retaddr);
          else
            _InterlockedAnd64(&FsRtlFileLockCancelCollideLock, 0LL);
          __writecr8(CurrentIrql);
          *(_QWORD *)(v11 + 56) = 0LL;
          FsRtlCompleteLockIrpReal(
            *((__int64 (__fastcall **)(__int64, IRP *))LockInformation + 1),
            v10[2],
            (IRP *)v11,
            -1073741698,
            &v16,
            0LL);
          ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v10);
          v13 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(&FsRtlFileLockCancelCollideLock);
          }
          else if ( _interlockedbittestandset64((volatile signed __int32 *)&FsRtlFileLockCancelCollideLock, 0LL) )
          {
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&FsRtlFileLockCancelCollideLock);
          }
          CurrentIrql = v13;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(LockInformation + 24);
        }
        else if ( _interlockedbittestandset64(v4, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)LockInformation + 6);
        }
      }
      while ( *((_QWORD *)LockInformation + 6) );
      v2 = FileLock;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(LockInformation + 24, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&FsRtlFileLockCancelCollideLock, retaddr);
    else
      _InterlockedAnd64(&FsRtlFileLockCancelCollideLock, 0LL);
    __writecr8(CurrentIrql);
    ExFreeToNPagedLookasideList(&FsRtlLockInfoLookasideList, LockInformation);
    v2->LockInformation = 0LL;
  }
}
