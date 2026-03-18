/*
 * XREFs of FsRtlpAcknowledgeOplockBreak @ 0x1401E2F5C
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1404A5A14 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007262C (FsRtlpModifyThreadPriorities.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401E327C (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1404A60B8 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreak(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  ULONG_PTR v9; // r15
  struct _KTHREAD *CurrentThread; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  char v13; // r12
  int v14; // r15d
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  _QWORD **v21; // rcx
  ULONG_PTR v22; // rbx
  signed __int32 v23; // eax
  unsigned int v24; // [rsp+24h] [rbp-44h]
  char v25; // [rsp+88h] [rbp+20h]

  v25 = a4;
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    pIofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  v9 = *(_QWORD *)(a1 + 152);
  CurrentThread = KeGetCurrentThread();
  v11 = KeAbPreAcquire(v9, 0LL, 0LL, a4);
  v12 = v11;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v9, 0) )
    ExpAcquireFastMutexContended(v9, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  *(_QWORD *)(v9 + 8) = CurrentThread;
  v13 = 1;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 48) )
  {
    v14 = 16;
    if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(16LL, a5) )
    {
      v15 = *(_DWORD *)(a1 + 144);
      if ( (v15 & 0x100) != 0 )
      {
        v16 = v15 & 0xFFFFFEFF;
        *(_DWORD *)(a1 + 144) = v16;
        *(_DWORD *)(a1 + 144) = v16 | 0x400;
      }
    }
    if ( v25 && (*(_DWORD *)(a1 + 144) & 0x100) != 0 )
    {
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      *(_DWORD *)(a3 + 48) = 0;
      v17 = a3 + 168;
      v18 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a3 + 168) = v18;
      *(_QWORD *)(a3 + 176) = a1 + 40;
      if ( *(_QWORD *)(v18 + 8) != a1 + 40 )
        __fastfail(3u);
      *(_QWORD *)(v18 + 8) = v17;
      *(_QWORD *)(a1 + 40) = v17;
      *(_QWORD *)(a3 + 56) = a1;
      v13 = 0;
      IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v19) = 1;
        FsRtlpCancelReadOnlyOplockIrp(a3, v19);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        v14 = 16;
      }
      v24 = 259;
      goto LABEL_23;
    }
    v20 = *(_DWORD *)(a1 + 144);
    if ( (v20 & 0x300) != 0 )
    {
LABEL_22:
      *(_DWORD *)(a3 + 48) = 0;
      v24 = 0;
      pIofCompleteRequest((PIRP)a3, 1);
      v14 = 1;
LABEL_23:
      while ( 1 )
      {
        v21 = (_QWORD **)(a1 + 88);
        if ( *v21 == v21 )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(*v21);
      }
      if ( v13 )
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
      *(_QWORD *)(a1 + 8) = 0LL;
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwnerThread(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 144) = v14 | *(_DWORD *)(a1 + 144) & 0x20;
      goto LABEL_29;
    }
    if ( (v20 & 0x400) != 0 )
    {
      *(_QWORD *)(a3 + 56) = 8LL;
      goto LABEL_22;
    }
  }
  v24 = -1073741597;
  *(_DWORD *)(a3 + 48) = -1073741597;
  pIofCompleteRequest((PIRP)a3, 1);
LABEL_29:
  v22 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(v22 + 8) = 0LL;
  v23 = _InterlockedCompareExchange((volatile signed __int32 *)v22, 1, 0);
  if ( v23 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v22, v23);
  KeAbPostRelease(v22);
  return v24;
}
