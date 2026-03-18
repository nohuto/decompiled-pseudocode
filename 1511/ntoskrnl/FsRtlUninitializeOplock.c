/*
 * XREFs of FsRtlUninitializeOplock @ 0x1400E3B68
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C92DC (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400C9A68 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x1400C9C04 (FsRtlpOplockDequeueRH.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeOplock(POPLOCK Oplock)
{
  char *v1; // rsi
  _QWORD **v2; // rax
  __int64 **v3; // rax
  _QWORD *v4; // rbx
  PVOID **v5; // rbx
  PFAST_MUTEX v6; // r14
  _QWORD *v7; // r14
  _QWORD *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rdx
  _QWORD *v14; // r8
  _QWORD *v15; // rbx
  _QWORD *v16; // r10
  __int64 v17; // rcx
  _QWORD *v18; // rax
  PVOID *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdx
  _QWORD *v22; // r8
  void *v23; // rcx
  void *v24; // rcx

  v1 = (char *)*Oplock;
  if ( *Oplock )
  {
    *Oplock = 0LL;
    ExAcquireFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    while ( 1 )
    {
      v2 = (_QWORD **)(v1 + 88);
      if ( *v2 == v2 )
        break;
      v7 = *v2;
      v8 = (_QWORD *)**v2;
      if ( (_QWORD **)(*v2)[1] != v2 || (_QWORD *)v8[1] != v7 )
        __fastfail(3u);
      *v2 = v8;
      v8[1] = v2;
      v9 = v7[2];
      IoAcquireCancelSpinLock((PKIRQL)(v9 + 69));
      _InterlockedExchange64((volatile __int64 *)(v9 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v9 + 69));
      *(_QWORD *)(v9 + 56) = 0LL;
      ((void (__fastcall *)(_QWORD, _QWORD))v7[3])(v7[4], v7[2]);
      ExFreePoolWithTag(v7, 0);
    }
    while ( 1 )
    {
      v3 = (__int64 **)(v1 + 40);
      if ( *v3 == (__int64 *)v3 )
        break;
      v10 = (__int64)(*v3 - 21);
      v11 = *(_QWORD *)(v10 + 184);
      v12 = **v3;
      if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v12 + 8) != *v3 )
        __fastfail(3u);
      *v3 = (__int64 *)v12;
      *(_QWORD *)(v12 + 8) = v3;
      IoAcquireCancelSpinLock((PKIRQL)(v10 + 69));
      _InterlockedExchange64((volatile __int64 *)(v10 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v10 + 69));
      ObfDereferenceObjectWithTag(*(PVOID *)(v11 + 48), 0x746C6644u);
      if ( *(_DWORD *)(v11 + 24) == 590400 )
      {
        v14 = *(_QWORD **)(v10 + 24);
        *v14 = 0LL;
        v14[1] = 0LL;
        v14[2] = 0LL;
        *(_DWORD *)v14 = 1572865;
        v13 = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *(_QWORD *)((char *)v14 + 4) = (unsigned int)v13;
        *(_QWORD *)(v10 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v10 + 56) = 8LL;
      }
      *(_DWORD *)(v10 + 48) = 0;
      LOBYTE(v13) = 1;
      pIofCompleteRequest(v10, v13);
    }
    while ( 1 )
    {
      v4 = v1 + 56;
      if ( (_QWORD *)*v4 == v4 )
        break;
      v15 = (_QWORD *)*v4;
      if ( (*((_DWORD *)v1 + 36) & 0x10000) != 0 && v15[7] )
      {
        FsRtlpOplockDequeueRH((__int64)v15);
        v17 = *v16;
        v18 = (_QWORD *)v16[1];
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v18 != v16 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        if ( *((char **)v1 + 15) == v1 + 120 )
          *((_DWORD *)v1 + 36) &= 0xFFFCFFFF;
        if ( v15[5] )
          FsRtlpClearOwnerThread((__int64)v1, (__int64)v15);
        ExFreePoolWithTag(v15, 0);
      }
      else
      {
        FsRtlpRemoveAndBreakRHIrp((__int64)v15, (__int64)v1, 1, 0, 0, 0, 0, 0);
      }
    }
    while ( 1 )
    {
      v5 = (PVOID **)(v1 + 72);
      if ( *v5 == (PVOID *)v5 )
        break;
      v19 = *v5;
      FsRtlpOplockDequeueRH((__int64)v19);
      FsRtlpModifyThreadPriorities((__int64)v1, (__int64)v19, 0);
      ObfDereferenceObjectWithTag(v19[3], 0x746C6644u);
      FsRtlpClearOwnerThread((__int64)v1, (__int64)v19);
      ExFreePoolWithTag(v19, 0);
    }
    v6 = *(PFAST_MUTEX *)v1;
    if ( *(_QWORD *)v1 )
    {
      v20 = *(_QWORD *)&v6[3].Contention;
      IoAcquireCancelSpinLock((PKIRQL)&v6[1].Owner + 5);
      _InterlockedExchange64((volatile __int64 *)&v6[1].OldIrql, 0LL);
      KeReleaseQueuedSpinLock(7uLL, BYTE5(v6[1].Owner));
      if ( *(_DWORD *)(v20 + 24) == 590400 )
      {
        v22 = *(_QWORD **)&v6->Event.Header.Lock;
        *v22 = 0LL;
        v22[1] = 0LL;
        v22[2] = 0LL;
        *(_DWORD *)v22 = 1572865;
        v21 = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *(_QWORD *)((char *)v22 + 4) = (unsigned int)v21;
        *(_QWORD *)&v6[1].Count = 24LL;
      }
      else
      {
        *(_QWORD *)&v6[1].Count = 8LL;
      }
      v6->OldIrql = 0;
      LOBYTE(v21) = 1;
      pIofCompleteRequest(v6, v21);
      *(_QWORD *)v1 = 0LL;
      v23 = (void *)*((_QWORD *)v1 + 1);
      if ( v23 )
        ObfDereferenceObjectWithTag(v23, 0x746C6644u);
      FsRtlpModifyThreadPriorities((__int64)v1, 0LL, 0);
      FsRtlpClearOwnerThread((__int64)v1, 0LL);
    }
    ExReleaseFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    v24 = (void *)*((_QWORD *)v1 + 17);
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    ExFreePoolWithTag(*((PVOID *)v1 + 19), 0);
    ExFreePoolWithTag(v1, 0);
  }
}
