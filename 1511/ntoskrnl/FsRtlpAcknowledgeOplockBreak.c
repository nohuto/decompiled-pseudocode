/*
 * XREFs of FsRtlpAcknowledgeOplockBreak @ 0x1401ACF44
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x14048EA24 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C92DC (FsRtlpModifyThreadPriorities.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400CC94C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401AD1A4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x14048F040 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreak(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int a5)
{
  __int64 v10; // rdx
  char v11; // r12
  int v12; // r14d
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned int v18; // r15d
  int v19; // eax
  _QWORD **v20; // rcx

  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    pIofCompleteRequest(a3, 1LL);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v11 = 1;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 48) )
  {
    v12 = 16;
    if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(16LL, a5) )
    {
      v13 = *(_DWORD *)(a1 + 144);
      if ( (v13 & 0x100) != 0 )
      {
        v14 = v13 & 0xFFFFFEFF;
        *(_DWORD *)(a1 + 144) = v14;
        *(_DWORD *)(a1 + 144) = v14 | 0x400;
      }
    }
    if ( a4 && (*(_DWORD *)(a1 + 144) & 0x100) != 0 )
    {
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      *(_DWORD *)(a3 + 48) = 0;
      v15 = a3 + 168;
      v16 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a3 + 168) = v16;
      *(_QWORD *)(a3 + 176) = a1 + 40;
      if ( *(_QWORD *)(v16 + 8) != a1 + 40 )
        __fastfail(3u);
      *(_QWORD *)(v16 + 8) = v15;
      *(_QWORD *)(a1 + 40) = v15;
      *(_QWORD *)(a3 + 56) = a1;
      v11 = 0;
      IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v17) = 1;
        FsRtlpCancelReadOnlyOplockIrp(a3, v17);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        v12 = 16;
      }
      v18 = 259;
      goto LABEL_19;
    }
    v19 = *(_DWORD *)(a1 + 144);
    if ( (v19 & 0x300) != 0 )
    {
LABEL_18:
      v18 = 0;
      *(_DWORD *)(a3 + 48) = 0;
      LOBYTE(v10) = 1;
      pIofCompleteRequest(a3, v10);
      v12 = 1;
LABEL_19:
      while ( 1 )
      {
        v20 = (_QWORD **)(a1 + 88);
        if ( *v20 == v20 )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(*v20);
      }
      if ( v11 )
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
      *(_QWORD *)(a1 + 8) = 0LL;
      FsRtlpModifyThreadPriorities(a1, 0LL, 0);
      FsRtlpClearOwnerThread(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 144) = v12 | *(_DWORD *)(a1 + 144) & 0x20;
      goto LABEL_25;
    }
    if ( (v19 & 0x400) != 0 )
    {
      *(_QWORD *)(a3 + 56) = 8LL;
      goto LABEL_18;
    }
  }
  *(_DWORD *)(a3 + 48) = -1073741597;
  v18 = -1073741597;
  LOBYTE(v10) = 1;
  pIofCompleteRequest(a3, v10);
LABEL_25:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v18;
}
