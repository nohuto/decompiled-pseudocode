/*
 * XREFs of FsRtlCancelNotify @ 0x1400A0A1C
 * Callers:
 *     FsRtlNotifySetCancelRoutine @ 0x140076F7C (FsRtlNotifySetCancelRoutine.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400276FC (PsReturnProcessPagedPoolQuota.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     PsChargePoolQuota @ 0x14009C638 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall FsRtlCancelNotify(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r15
  struct _KTHREAD *v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 **v8; // rcx
  PVOID v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  PVOID v14; // rdx
  PVOID PoolWithTag; // r12
  unsigned int v16; // r14d
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rbx
  PVOID v20; // rax
  __int64 v21; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *SubjectContext; // [rsp+48h] [rbp-60h]
  _DWORD *P; // [rsp+C0h] [rbp+18h]

  SubjectContext = 0LL;
  P = *(_DWORD **)(a2 + 56);
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL);
  *(_QWORD *)(a2 + 56) = 0LL;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = *(_QWORD *)P;
  v5 = KeGetCurrentThread();
  if ( v5 != *(struct _KTHREAD **)(*(_QWORD *)P + 56LL) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)v4);
    *(_QWORD *)(v4 + 56) = v5;
  }
  ++*(_DWORD *)(v4 + 64);
  v6 = (__int64 *)(a2 + 168);
  if ( *(_QWORD *)(a2 + 168) )
  {
    v7 = (__int64 *)*v6;
    v8 = *(__int64 ***)(a2 + 176);
    if ( *(__int64 **)(*v6 + 8) != v6 || *v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
  }
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v9 = (PVOID)*((_QWORD *)P + 11);
  if ( v9 && !*((_QWORD *)P + 10) )
  {
    if ( (v13 = *(_QWORD *)(a2 + 8)) != 0
      && ((*(_BYTE *)(v13 + 10) & 5) == 0
        ? (v14 = MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, 0x40000010u))
        : (v14 = *(PVOID *)(v13 + 24)),
          v9 = (PVOID)*((_QWORD *)P + 11),
          v14 == v9)
      || v9 == *(PVOID *)(a2 + 24) )
    {
      PoolWithTag = 0LL;
      v16 = 0;
      v17 = P + 12;
      if ( (_QWORD *)*v17 == v17 )
      {
        if ( P[24] >= P[26] )
          v16 = P[24];
        goto LABEL_30;
      }
      v18 = (_QWORD *)*v17;
      v19 = v18[2];
      if ( *(_DWORD *)(v19 + 8) < P[26] )
      {
LABEL_30:
        if ( v16 )
        {
          if ( !PoolWithTag )
          {
            PsChargePoolQuota(*((PEPROCESS *)P + 15), PagedPool, v16);
            PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v16, 0x4E725346u);
            memset(PoolWithTag, 0, v16);
            *((_QWORD *)P + 10) = PoolWithTag;
          }
          memmove(PoolWithTag, *((const void **)P + 11), (unsigned int)P[26]);
          P[25] = v16;
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
      v20 = (PVOID)*(v18 - 18);
      if ( !v20 )
      {
        v21 = *(v18 - 20);
        if ( !v21 )
          goto LABEL_26;
        if ( (*(_BYTE *)(v21 + 10) & 5) != 0 )
        {
          PoolWithTag = *(PVOID *)(v21 + 24);
          goto LABEL_26;
        }
        v20 = MmMapLockedPagesSpecifyCache((PMDL)v21, 0, MmCached, 0LL, 0, 0x40000010u);
      }
      PoolWithTag = v20;
LABEL_26:
      v16 = *(_DWORD *)(v19 + 8);
      if ( v16 > P[24] )
        v16 = P[24];
      goto LABEL_30;
    }
  }
LABEL_8:
  *(_DWORD *)(a2 + 48) = -1073741536;
  pIofCompleteRequest((PIRP)a2, 1);
  _InterlockedDecrement(P + 28);
  if ( !P[28] )
  {
    if ( *((_QWORD *)P + 10) )
    {
      PsReturnProcessPagedPoolQuota(*((_QWORD *)P + 15), (unsigned int)P[25]);
      ExFreePoolWithTag(*((PVOID *)P + 10), 0);
    }
    if ( (P[18] & 0x40) != 0 || *((_QWORD *)P + 17) )
      SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)*((_QWORD *)P + 3);
    ExFreePoolWithTag(P, 0);
  }
  if ( (*(_DWORD *)(v4 + 64))-- == 1 )
  {
    *(_QWORD *)(v4 + 56) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)v4);
  }
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(SubjectContext, 0);
  }
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
}
