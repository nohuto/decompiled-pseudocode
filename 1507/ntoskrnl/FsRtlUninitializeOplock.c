/*
 * XREFs of FsRtlUninitializeOplock @ 0x140122A5C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x14006D8EC (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x14006DB24 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007262C (FsRtlpModifyThreadPriorities.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeOplock(POPLOCK Oplock)
{
  __int64 v1; // r9
  char *v2; // rsi
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  _QWORD **v9; // rax
  __int64 **v10; // rax
  _QWORD *v11; // rbx
  PVOID **v12; // rbx
  __int64 v13; // r14
  _QWORD *v14; // r14
  _QWORD *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rdx
  _QWORD *v20; // r8
  _QWORD *v21; // rbx
  _QWORD *v22; // r10
  __int64 v23; // rcx
  _QWORD *v24; // rax
  PVOID *v25; // rbx
  __int64 v26; // rdi
  _QWORD *v27; // r8
  void *v28; // rcx
  ULONG_PTR v29; // rbx
  signed __int32 v30; // eax
  void *v31; // rcx

  v2 = (char *)*Oplock;
  if ( *Oplock )
  {
    *Oplock = 0LL;
    v3 = *((_QWORD *)v2 + 19);
    CurrentThread = KeGetCurrentThread();
    v5 = KeAbPreAcquire(v3, 0LL, 0LL, v1);
    v8 = v5;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v3, 0) )
      ExpAcquireFastMutexContended(v3, v5);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *(_QWORD *)(v3 + 8) = CurrentThread;
    while ( 1 )
    {
      v9 = (_QWORD **)(v2 + 88);
      if ( *v9 == v9 )
        break;
      v14 = *v9;
      v15 = (_QWORD *)**v9;
      if ( (_QWORD **)(*v9)[1] != v9 || (_QWORD *)v15[1] != v14 )
        __fastfail(3u);
      *v9 = v15;
      v15[1] = v9;
      v16 = v14[2];
      IoAcquireCancelSpinLock((PKIRQL)(v16 + 69));
      _InterlockedExchange64((volatile __int64 *)(v16 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v16 + 69));
      *(_QWORD *)(v16 + 56) = 0LL;
      ((void (__fastcall *)(_QWORD, _QWORD))v14[3])(v14[4], v14[2]);
      ExFreePoolWithTag(v14, 0);
    }
    while ( 1 )
    {
      v10 = (__int64 **)(v2 + 40);
      if ( *v10 == (__int64 *)v10 )
        break;
      v17 = (__int64)(*v10 - 21);
      v18 = *(_QWORD *)(v17 + 184);
      v19 = **v10;
      if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v19 + 8) != *v10 )
        __fastfail(3u);
      *v10 = (__int64 *)v19;
      *(_QWORD *)(v19 + 8) = v10;
      IoAcquireCancelSpinLock((PKIRQL)(v17 + 69));
      _InterlockedExchange64((volatile __int64 *)(v17 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v17 + 69));
      ObfDereferenceObjectWithTag(*(PVOID *)(v18 + 48), 0x746C6644u);
      if ( *(_DWORD *)(v18 + 24) == 590400 )
      {
        v20 = *(_QWORD **)(v17 + 24);
        *v20 = 0LL;
        v20[1] = 0LL;
        v20[2] = 0LL;
        *(_DWORD *)v20 = 1572865;
        *(_QWORD *)((char *)v20 + 4) = (*((_DWORD *)v2 + 36) >> 12) & 7;
        *(_QWORD *)(v17 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v17 + 56) = 8LL;
      }
      *(_DWORD *)(v17 + 48) = 0;
      pIofCompleteRequest((PIRP)v17, 1);
    }
    while ( 1 )
    {
      v11 = v2 + 56;
      if ( (_QWORD *)*v11 == v11 )
        break;
      v21 = (_QWORD *)*v11;
      if ( (*((_DWORD *)v2 + 36) & 0x10000) != 0 && v21[7] )
      {
        FsRtlpOplockDequeueRH((__int64)v21, v6, v7);
        v23 = *v22;
        v24 = (_QWORD *)v22[1];
        if ( *(_QWORD **)(*v22 + 8LL) != v22 || (_QWORD *)*v24 != v22 )
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        if ( *((char **)v2 + 15) == v2 + 120 )
          *((_DWORD *)v2 + 36) &= 0xFFFCFFFF;
        if ( v21[5] )
          FsRtlpClearOwnerThread((__int64)v2, (__int64)v21);
        ExFreePoolWithTag(v21, 0);
      }
      else
      {
        FsRtlpRemoveAndBreakRHIrp((__int64)v21, (__int64)v2, 1, 0, 0, 0, 0, 0);
      }
    }
    while ( 1 )
    {
      v12 = (PVOID **)(v2 + 72);
      if ( *v12 == (PVOID *)v12 )
        break;
      v25 = *v12;
      FsRtlpOplockDequeueRH((__int64)v25, v6, v7);
      FsRtlpModifyThreadPriorities((__int64)v2, (__int64)v25, 0LL);
      ObfDereferenceObjectWithTag(v25[3], 0x746C6644u);
      FsRtlpClearOwnerThread((__int64)v2, (__int64)v25);
      ExFreePoolWithTag(v25, 0);
    }
    v13 = *(_QWORD *)v2;
    if ( *(_QWORD *)v2 )
    {
      v26 = *(_QWORD *)(v13 + 184);
      IoAcquireCancelSpinLock((PKIRQL)(v13 + 69));
      _InterlockedExchange64((volatile __int64 *)(v13 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v13 + 69));
      if ( *(_DWORD *)(v26 + 24) == 590400 )
      {
        v27 = *(_QWORD **)(v13 + 24);
        *v27 = 0LL;
        v27[1] = 0LL;
        v27[2] = 0LL;
        *(_DWORD *)v27 = 1572865;
        *(_QWORD *)((char *)v27 + 4) = (*((_DWORD *)v2 + 36) >> 12) & 7;
        *(_QWORD *)(v13 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v13 + 56) = 8LL;
      }
      *(_DWORD *)(v13 + 48) = 0;
      pIofCompleteRequest((PIRP)v13, 1);
      *(_QWORD *)v2 = 0LL;
      v28 = (void *)*((_QWORD *)v2 + 1);
      if ( v28 )
        ObfDereferenceObjectWithTag(v28, 0x746C6644u);
      FsRtlpModifyThreadPriorities((__int64)v2, 0LL, 0LL);
      FsRtlpClearOwnerThread((__int64)v2, 0LL);
    }
    v29 = *((_QWORD *)v2 + 19);
    *(_QWORD *)(v29 + 8) = 0LL;
    v30 = _InterlockedCompareExchange((volatile signed __int32 *)v29, 1, 0);
    if ( v30 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v29, v30);
    KeAbPostRelease(v29);
    v31 = (void *)*((_QWORD *)v2 + 17);
    if ( v31 )
      ExFreePoolWithTag(v31, 0);
    ExFreePoolWithTag(*((PVOID *)v2 + 19), 0);
    ExFreePoolWithTag(v2, 0);
  }
}
