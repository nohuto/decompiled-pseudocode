/*
 * XREFs of FsRtlpWaitOnIrp @ 0x14016E528
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400718FC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1400726F0 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1401313A8 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakNotify @ 0x14066D484 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     IoCancelIrp @ 0x140073FAC (IoCancelIrp.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1401E340C (FsRtlpCancelWaitingIrp.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x14051D328 (FsRtlCancellableWaitForSingleObject.c)
 */

__int64 __fastcall FsRtlpWaitOnIrp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, __int64),
        char *Object,
        char a7,
        _BYTE *a8)
{
  char v12; // r12
  _BYTE *v13; // rcx
  _QWORD *PoolWithTag; // rbx
  int v15; // eax
  _QWORD **v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  ULONG_PTR v20; // rbx
  signed __int32 v21; // eax
  NTSTATUS v22; // eax
  __int64 v23; // r9
  ULONG_PTR v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int8 CurrentIrql; // r15
  _QWORD *i; // rax
  ULONG_PTR v29; // rbx
  unsigned __int8 v30; // di
  signed __int32 v31; // eax
  ULONG_PTR v32; // rbx
  signed __int32 v33; // eax
  _BYTE v35[7]; // [rsp+31h] [rbp-47h] BYREF
  _QWORD *v36; // [rsp+38h] [rbp-40h]
  __int64 v37; // [rsp+40h] [rbp-38h]
  __int64 v38; // [rsp+48h] [rbp-30h]
  _BYTE *v39; // [rsp+B8h] [rbp+40h]

  v12 = 1;
  v13 = v35;
  if ( a8 )
    v13 = a8;
  v39 = v13;
  *v13 = 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x38uLL, 0x6F725346u);
  v36 = PoolWithTag;
  PoolWithTag[2] = a2;
  if ( a2 )
    v15 = *(_DWORD *)(a2 + 56);
  else
    v15 = 0;
  *((_DWORD *)PoolWithTag + 12) = v15;
  *((_BYTE *)PoolWithTag + 52) = a7;
  if ( a4 )
  {
    PoolWithTag[3] = a4;
    PoolWithTag[4] = a3;
  }
  else
  {
    PoolWithTag[3] = FsRtlpOplockWaitCompleteRoutine;
    PoolWithTag[4] = Object;
    *(_WORD *)Object = 0;
    Object[2] = 6;
    *((_DWORD *)Object + 1) = 0;
    *((_QWORD *)Object + 2) = Object + 8;
    *((_QWORD *)Object + 1) = Object + 8;
  }
  if ( a5 )
    a5(a3, a2);
  v16 = (_QWORD **)(a1 + 88);
  v17 = *(_QWORD **)(a1 + 96);
  *PoolWithTag = a1 + 88;
  PoolWithTag[1] = v17;
  if ( *v17 != a1 + 88 )
    __fastfail(3u);
  *v17 = PoolWithTag;
  *(_QWORD *)(a1 + 96) = PoolWithTag;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 48) = 0;
    IoAcquireCancelSpinLock((PKIRQL)(a2 + 69));
    *(_QWORD *)(a2 + 56) = a1;
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( a4 )
      {
        v37 = *(_QWORD *)(a2 + 184);
        *(_BYTE *)(v37 + 3) |= 1u;
        v19 = 259;
      }
      else
      {
        v19 = -1073741536;
      }
      *(_DWORD *)&v35[3] = v19;
      LOBYTE(v18) = 1;
      FsRtlpCancelWaitingIrp(a2, v18);
      goto LABEL_46;
    }
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpWaitingIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
    v12 = 1;
  }
  if ( a4 )
  {
    if ( a2 )
    {
      v38 = *(_QWORD *)(a2 + 184);
      *(_BYTE *)(v38 + 3) |= 1u;
    }
    v19 = 259;
    *(_DWORD *)&v35[3] = 259;
  }
  else
  {
    v20 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(v20 + 8) = 0LL;
    v21 = _InterlockedCompareExchange((volatile signed __int32 *)v20, 1, 0);
    if ( v21 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v20, v21);
    KeAbPostRelease(v20);
    v12 = 0;
    v22 = FsRtlCancellableWaitForSingleObject(Object, 0LL, (PIRP)a2);
    v19 = v22;
    *(_DWORD *)&v35[3] = v22;
    if ( v22 == -1073741749 || v22 == -1073741536 )
    {
      if ( a2 )
      {
        IoCancelIrp((PIRP)a2);
      }
      else
      {
        v24 = *(_QWORD *)(a1 + 152);
        v25 = KeAbPreAcquire(v24, 0LL, 0LL, v23);
        v26 = v25;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)v24, 0) )
          ExpAcquireFastMutexContended(v24, v25);
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        *(_QWORD *)(v24 + 8) = KeGetCurrentThread();
        *(_DWORD *)(v24 + 48) = CurrentIrql;
        for ( i = *v16; i != v16; i = (_QWORD *)*i )
        {
          if ( v36 == i )
          {
            FsRtlpRemoveAndCompleteWaitingIrp(i);
            break;
          }
        }
        v29 = *(_QWORD *)(a1 + 152);
        *(_QWORD *)(v29 + 8) = 0LL;
        v30 = *(_BYTE *)(v29 + 48);
        v31 = _InterlockedCompareExchange((volatile signed __int32 *)v29, 1, 0);
        if ( v31 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v29, v31);
        __writecr8(v30);
        KeAbPostRelease(v29);
        v12 = 0;
        v19 = *(_DWORD *)&v35[3];
      }
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      *v39 = 0;
    }
    else
    {
      if ( a2 )
      {
        v19 = *(_DWORD *)(a2 + 48);
        *(_DWORD *)&v35[3] = v19;
      }
      *v39 = 1;
    }
  }
LABEL_46:
  if ( v12 )
  {
    v32 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(v32 + 8) = 0LL;
    v33 = _InterlockedCompareExchange((volatile signed __int32 *)v32, 1, 0);
    if ( v33 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v32, v33);
    KeAbPostRelease(v32);
    return *(unsigned int *)&v35[3];
  }
  return v19;
}
