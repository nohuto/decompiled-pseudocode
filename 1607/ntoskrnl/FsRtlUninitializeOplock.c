/*
 * XREFs of FsRtlUninitializeOplock @ 0x14009F944
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140077824 (FsRtlpRemoveAndBreakRHIrp.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpOplockDequeueRH @ 0x140078518 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x14007B708 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007B748 (FsRtlpModifyThreadPriorities.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     EvaluateCurrentState @ 0x1401B8EC0 (EvaluateCurrentState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9874 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeOplock(POPLOCK Oplock)
{
  char *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD **v4; // rax
  _QWORD *v5; // r14
  _QWORD *v6; // rdx
  __int64 v7; // rdi
  __int64 **v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rdx
  _QWORD *v12; // r8
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // r10
  __int64 v16; // rcx
  _QWORD *v17; // rax
  PVOID **v18; // rbx
  PVOID *v19; // rbx
  PFAST_MUTEX v20; // r14
  __int64 v21; // rdi
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
      v4 = (_QWORD **)(v1 + 88);
      if ( *v4 == v4 )
        break;
      v5 = *v4;
      v6 = (_QWORD *)**v4;
      if ( (_QWORD **)(*v4)[1] != v4 || (_QWORD *)v6[1] != v5 )
        __fastfail(3u);
      *v4 = v6;
      v6[1] = v4;
      v7 = v5[2];
      IoAcquireCancelSpinLock((PKIRQL)(v7 + 69));
      _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v7 + 69));
      *(_QWORD *)(v7 + 56) = 0LL;
      ((void (__fastcall *)(_QWORD, _QWORD))v5[3])(v5[4], v5[2]);
      ExFreePoolWithTag(v5, 0);
    }
    while ( 1 )
    {
      v8 = (__int64 **)(v1 + 40);
      if ( *v8 == (__int64 *)v8 )
        break;
      v9 = (__int64)(*v8 - 21);
      v10 = *(_QWORD *)(v9 + 184);
      v11 = **v8;
      if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v11 + 8) != *v8 )
        __fastfail(3u);
      *v8 = (__int64 *)v11;
      *(_QWORD *)(v11 + 8) = v8;
      IoAcquireCancelSpinLock((PKIRQL)(v9 + 69));
      _InterlockedExchange64((volatile __int64 *)(v9 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v9 + 69));
      ObfDereferenceObjectWithTag(*(PVOID *)(v10 + 48), 0x746C6644u);
      if ( *(_DWORD *)(v10 + 24) == 590400 )
      {
        v12 = *(_QWORD **)(v9 + 24);
        *v12 = 0LL;
        v12[1] = 0LL;
        v12[2] = 0LL;
        *(_DWORD *)v12 = 1572865;
        *(_QWORD *)((char *)v12 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *(_QWORD *)(v9 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v9 + 56) = 8LL;
      }
      *(_DWORD *)(v9 + 48) = 0;
      pIofCompleteRequest((PIRP)v9, 1);
    }
    while ( 1 )
    {
      v13 = v1 + 56;
      if ( (_QWORD *)*v13 == v13 )
        break;
      v14 = (_QWORD *)*v13;
      if ( (*((_DWORD *)v1 + 36) & 0x10000) != 0 && v14[7] )
      {
        FsRtlpOplockDequeueRH((__int64)v14, v2, v3);
        v16 = *v15;
        v17 = (_QWORD *)v15[1];
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v17 != v15 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        if ( *((char **)v1 + 15) == v1 + 120 )
          *((_DWORD *)v1 + 36) &= 0xFFFCFFFF;
        if ( v14[5] )
          FsRtlpClearOwner((__int64)v1, (__int64)v14);
        ExFreePoolWithTag(v14, 0);
      }
      else if ( (unsigned int)EvaluateCurrentState(&g_Feature_Servicing_37708835_37708835_FeatureDescriptorDetails) )
      {
        FsRtlpRemoveAndCompleteRHIrp(v14, 0, 0, 0);
      }
      else
      {
        FsRtlpRemoveAndBreakRHIrp(v14, (__int64)v1, 1, 0, 0, 0, 0, 0);
      }
    }
    while ( 1 )
    {
      v18 = (PVOID **)(v1 + 72);
      if ( *v18 == (PVOID *)v18 )
        break;
      v19 = *v18;
      FsRtlpOplockDequeueRH((__int64)v19, v2, v3);
      FsRtlpModifyThreadPriorities((__int64)v1, (__int64)v19, 0);
      ObfDereferenceObjectWithTag(v19[3], 0x746C6644u);
      FsRtlpClearOwner((__int64)v1, (__int64)v19);
      ExFreePoolWithTag(v19, 0);
    }
    v20 = *(PFAST_MUTEX *)v1;
    if ( *(_QWORD *)v1 )
    {
      v21 = *(_QWORD *)&v20[3].Contention;
      IoAcquireCancelSpinLock((PKIRQL)&v20[1].Owner + 5);
      _InterlockedExchange64((volatile __int64 *)&v20[1].OldIrql, 0LL);
      KeReleaseQueuedSpinLock(7uLL, BYTE5(v20[1].Owner));
      if ( *(_DWORD *)(v21 + 24) == 590400 )
      {
        v22 = *(_QWORD **)&v20->Event.Header.Lock;
        *v22 = 0LL;
        v22[1] = 0LL;
        v22[2] = 0LL;
        *(_DWORD *)v22 = 1572865;
        *(_QWORD *)((char *)v22 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *(_QWORD *)&v20[1].Count = 24LL;
      }
      else
      {
        *(_QWORD *)&v20[1].Count = 8LL;
      }
      v20->OldIrql = 0;
      pIofCompleteRequest((PIRP)v20, 1);
      *(_QWORD *)v1 = 0LL;
      v23 = (void *)*((_QWORD *)v1 + 1);
      if ( v23 )
        ObfDereferenceObjectWithTag(v23, 0x746C6644u);
      FsRtlpModifyThreadPriorities((__int64)v1, 0LL, 0);
      FsRtlpClearOwner((__int64)v1, 0LL);
    }
    ExReleaseFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    v24 = (void *)*((_QWORD *)v1 + 17);
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    ExFreePoolWithTag(*((PVOID *)v1 + 19), 0);
    ExFreePoolWithTag(v1, 0);
  }
}
