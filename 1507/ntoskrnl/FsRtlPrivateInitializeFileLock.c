/*
 * XREFs of FsRtlPrivateInitializeFileLock @ 0x140106180
 * Callers:
 *     FsRtlPrivateLock @ 0x14010499C (FsRtlPrivateLock.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

char __fastcall FsRtlPrivateInitializeFileLock(_QWORD *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v9; // rax
  unsigned __int8 v10; // bl
  signed __int32 v11; // eax
  char v13; // [rsp+50h] [rbp+18h]

  v6 = KeAbPreAcquire((ULONG_PTR)&FsRtlCreateLockInfo, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&FsRtlCreateLockInfo, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&FsRtlCreateLockInfo, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  qword_14034D308 = (__int64)KeGetCurrentThread();
  dword_14034D330 = CurrentIrql;
  if ( a1[3] )
    goto LABEL_8;
  v9 = ExAllocateFromNPagedLookasideList(&FsRtlLockInfoLookasideList);
  if ( v9 )
  {
    *v9 = -1LL;
    v9[3] = 0LL;
    v9[4] = 0LL;
    v9[5] = 0LL;
    v9[6] = 0LL;
    v9[7] = 0LL;
    v9[1] = *a1;
    v9[2] = a1[1];
    a1[7] = 0LL;
    a1[10] = 0LL;
    a1[3] = v9;
LABEL_8:
    v13 = 1;
    goto LABEL_12;
  }
  if ( !a2 )
    RtlRaiseStatus(-1073741670);
  v13 = 0;
LABEL_12:
  qword_14034D308 = 0LL;
  v10 = dword_14034D330;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)&FsRtlCreateLockInfo, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&FsRtlCreateLockInfo, v11);
  __writecr8(v10);
  KeAbPostRelease((ULONG_PTR)&FsRtlCreateLockInfo);
  return v13;
}
