/*
 * XREFs of FsRtlCancelNotify @ 0x140074054
 * Callers:
 *     FsRtlNotifySetCancelRoutine @ 0x140073DB8 (FsRtlNotifySetCancelRoutine.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsChargePoolQuota @ 0x140074534 (PsChargePoolQuota.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall FsRtlCancelNotify(__int64 a1, __int64 a2)
{
  IRP *v2; // rbx
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // r14
  struct _KTHREAD *v6; // r15
  struct _KTHREAD *v7; // r12
  __int64 v8; // rsi
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _IRP *v12; // rax
  PMDL MdlAddress; // rcx
  struct _IRP *MappedSystemVa; // rdx
  struct _IRP *PoolWithTag; // r12
  unsigned int v16; // r15d
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  struct _IRP *v20; // rax
  __int64 v21; // rcx
  unsigned __int32 v23; // eax
  struct _KTHREAD *v24; // rcx
  __int64 result; // rax
  struct _SECURITY_SUBJECT_CONTEXT *SubjectContext; // [rsp+48h] [rbp-70h]
  __int64 v27; // [rsp+58h] [rbp-60h]
  struct _IRP **P; // [rsp+D0h] [rbp+18h]

  v2 = (IRP *)a2;
  SubjectContext = 0LL;
  P = *(struct _IRP ***)(a2 + 56);
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL);
  *(_QWORD *)(a2 + 56) = 0LL;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (ULONG_PTR)*P;
  v6 = KeGetCurrentThread();
  if ( v6 != (struct _KTHREAD *)(*P)->IoStatus.Information )
  {
    v7 = KeGetCurrentThread();
    v8 = KeAbPreAcquire(v5, 0LL, 0LL, v3);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
      ExpAcquireFastMutexContended(v5);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *(_QWORD *)(v5 + 8) = v7;
    *(_QWORD *)(v5 + 56) = v6;
  }
  ++*(_DWORD *)(v5 + 64);
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v2->Tail.Overlay.ListEntry;
  if ( v2->Tail.Overlay.ListEntry.Flink )
  {
    Flink = p_ListEntry->ListEntry.Flink;
    Blink = v2->Tail.Overlay.ListEntry.Blink;
    if ( (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)p_ListEntry->ListEntry.Flink->Blink != p_ListEntry
      || (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)Blink->Flink != p_ListEntry )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  v2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v12 = P[11];
  if ( v12 && !P[10] )
  {
    if ( (MdlAddress = v2->MdlAddress) != 0LL
      && ((MdlAddress->MdlFlags & 5) == 0
        ? (MappedSystemVa = (struct _IRP *)MmMapLockedPagesSpecifyCache(MdlAddress, 0, MmCached, 0LL, 0, 0x40000010u))
        : (MappedSystemVa = (struct _IRP *)MdlAddress->MappedSystemVa),
          v12 = P[11],
          MappedSystemVa == v12)
      || v12 == v2->AssociatedIrp.MasterIrp )
    {
      PoolWithTag = 0LL;
      v16 = 0;
      v17 = P + 6;
      if ( (_QWORD *)*v17 == v17 )
      {
        if ( *((_DWORD *)P + 24) >= *((_DWORD *)P + 26) )
          v16 = *((_DWORD *)P + 24);
        goto LABEL_34;
      }
      v18 = (_QWORD *)*v17;
      v19 = v18[2];
      v27 = v19;
      if ( *(_DWORD *)(v19 + 8) < *((_DWORD *)P + 26) )
      {
LABEL_34:
        if ( v16 )
        {
          if ( !PoolWithTag )
          {
            PsChargePoolQuota((PEPROCESS)P[15], PagedPool, v16);
            PoolWithTag = (struct _IRP *)ExAllocatePoolWithTag((POOL_TYPE)17, v16, 0x4E725346u);
            memset(PoolWithTag, 0, v16);
            P[10] = PoolWithTag;
          }
          memmove(PoolWithTag, P[11], *((unsigned int *)P + 26));
          *((_DWORD *)P + 25) = v16;
          P[11] = PoolWithTag;
          v2 = (IRP *)a2;
        }
        else
        {
          *((_WORD *)P + 36) |= 2u;
        }
        if ( ((_BYTE)P[9] & 2) != 0 )
        {
          P[11] = 0LL;
          P[10] = 0LL;
          P[13] = 0LL;
          *((_DWORD *)P + 25) = 0;
        }
        goto LABEL_12;
      }
      v20 = (struct _IRP *)*(v18 - 18);
      if ( !v20 )
      {
        v21 = *(v18 - 20);
        if ( !v21 )
          goto LABEL_30;
        if ( (*(_BYTE *)(v21 + 10) & 5) != 0 )
        {
          PoolWithTag = *(struct _IRP **)(v21 + 24);
          goto LABEL_30;
        }
        v20 = (struct _IRP *)MmMapLockedPagesSpecifyCache((PMDL)v21, 0, MmCached, 0LL, 0, 0x40000010u);
        v19 = v27;
      }
      PoolWithTag = v20;
LABEL_30:
      v16 = *(_DWORD *)(v19 + 8);
      if ( v16 > *((_DWORD *)P + 24) )
        v16 = *((_DWORD *)P + 24);
      goto LABEL_34;
    }
  }
LABEL_12:
  v2->IoStatus.Status = -1073741536;
  pIofCompleteRequest(v2, 1);
  _InterlockedDecrement((volatile signed __int32 *)P + 28);
  if ( !*((_DWORD *)P + 28) )
  {
    if ( P[10] )
    {
      PsReturnProcessPagedPoolQuota(P[15], *((unsigned int *)P + 25));
      ExFreePoolWithTag(P[10], 0);
    }
    if ( ((_BYTE)P[9] & 0x40) != 0 || P[17] )
      SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)P[3];
    ExFreePoolWithTag(P, 0);
  }
  if ( (*(_DWORD *)(v5 + 64))-- == 1 )
  {
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)v5, 1, 0);
    if ( v23 )
      ExpReleaseFastMutexContended(v5, v23);
    KeAbPostRelease(v5);
  }
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(SubjectContext, 0);
  }
  v24 = KeGetCurrentThread();
  result = (unsigned int)++v24->KernelApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&v24->152;
    if ( *(_QWORD *)result != result && !v24->SpecialApcDisable )
      return KiCheckForKernelApcDelivery(v24);
  }
  return result;
}
