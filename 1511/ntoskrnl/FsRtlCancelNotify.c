/*
 * XREFs of FsRtlCancelNotify @ 0x1400C94AC
 * Callers:
 *     FsRtlNotifySetCancelRoutine @ 0x1400C99C8 (FsRtlNotifySetCancelRoutine.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x14006DCC4 (PsReturnProcessPagedPoolQuota.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     PsChargePoolQuota @ 0x1400C9030 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall FsRtlCancelNotify(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r15
  struct _KTHREAD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  PVOID PoolWithTag; // r12
  unsigned int v12; // r14d
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // rbx
  PVOID v16; // rax
  __int64 v17; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *SubjectContext; // [rsp+48h] [rbp-60h]
  _DWORD *P; // [rsp+C0h] [rbp+18h]

  SubjectContext = 0LL;
  P = *(_DWORD **)(a2 + 56);
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL);
  *(_QWORD *)(a2 + 56) = 0LL;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = *(_QWORD *)P;
  v6 = KeGetCurrentThread();
  if ( v6 != *(struct _KTHREAD **)(*(_QWORD *)P + 56LL) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)v5);
    *(_QWORD *)(v5 + 56) = v6;
  }
  ++*(_DWORD *)(v5 + 64);
  v7 = a2 + 168;
  if ( *(_QWORD *)(a2 + 168) )
  {
    v3 = *(_QWORD **)v7;
    v8 = *(_QWORD **)(a2 + 176);
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v8 != v7 )
      __fastfail(3u);
    *v8 = v3;
    v3[1] = v8;
  }
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v9 = (_QWORD *)*((_QWORD *)P + 11);
  if ( v9 && !*((_QWORD *)P + 10) )
  {
    if ( (v10 = *(_QWORD *)(a2 + 8)) != 0
      && ((*(_BYTE *)(v10 + 10) & 5) == 0
        ? (v3 = MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000010u))
        : (v3 = *(_QWORD **)(v10 + 24)),
          v9 = (_QWORD *)*((_QWORD *)P + 11),
          v3 == v9)
      || v9 == *(_QWORD **)(a2 + 24) )
    {
      PoolWithTag = 0LL;
      v12 = 0;
      v13 = P + 12;
      if ( (_QWORD *)*v13 == v13 )
      {
        if ( P[24] >= P[26] )
          v12 = P[24];
        goto LABEL_30;
      }
      v14 = (_QWORD *)*v13;
      v15 = v14[2];
      if ( *(_DWORD *)(v15 + 8) < P[26] )
      {
LABEL_30:
        if ( v12 )
        {
          if ( !PoolWithTag )
          {
            PsChargePoolQuota(*((PEPROCESS *)P + 15), PagedPool, v12);
            PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v12, 0x4E725346u);
            memset(PoolWithTag, 0, v12);
            *((_QWORD *)P + 10) = PoolWithTag;
          }
          memmove(PoolWithTag, *((const void **)P + 11), (unsigned int)P[26]);
          P[25] = v12;
          *((_QWORD *)P + 11) = PoolWithTag;
        }
        else
        {
          *((_WORD *)P + 36) |= 2u;
        }
        if ( (P[18] & 2) != 0 )
        {
          *((_QWORD *)P + 11) = 0LL;
          *((_QWORD *)P + 10) = 0LL;
          *((_QWORD *)P + 13) = 0LL;
          P[25] = 0;
        }
        goto LABEL_8;
      }
      v16 = (PVOID)*(v14 - 18);
      if ( !v16 )
      {
        v17 = *(v14 - 20);
        if ( !v17 )
          goto LABEL_26;
        if ( (*(_BYTE *)(v17 + 10) & 5) != 0 )
        {
          PoolWithTag = *(PVOID *)(v17 + 24);
          goto LABEL_26;
        }
        v16 = MmMapLockedPagesSpecifyCache((PMDL)v17, 0, MmCached, 0LL, 0, 0x40000010u);
      }
      PoolWithTag = v16;
LABEL_26:
      v12 = *(_DWORD *)(v15 + 8);
      if ( v12 > P[24] )
        v12 = P[24];
      goto LABEL_30;
    }
  }
LABEL_8:
  *(_DWORD *)(a2 + 48) = -1073741536;
  LOBYTE(v3) = 1;
  pIofCompleteRequest(a2, v3);
  _InterlockedDecrement(P + 28);
  if ( !P[28] )
  {
    if ( *((_QWORD *)P + 10) )
    {
      PsReturnProcessPagedPoolQuota(*((struct _KPROCESS **)P + 15), (unsigned int)P[25]);
      ExFreePoolWithTag(*((PVOID *)P + 10), 0);
    }
    if ( (P[18] & 0x40) != 0 || *((_QWORD *)P + 17) )
      SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)*((_QWORD *)P + 3);
    ExFreePoolWithTag(P, 0);
  }
  if ( (*(_DWORD *)(v5 + 64))-- == 1 )
  {
    *(_QWORD *)(v5 + 56) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)v5);
  }
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(SubjectContext, 0);
  }
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
