/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x1404F4C10
 * Callers:
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1404B1840 (ObpPreInterceptHandleDuplicate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x14008BD40 (ExfAcquireRundownProtection.c)
 *     ExfReleaseRundownProtection @ 0x140090490 (ExfReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObpCallPostOperationCallbacks @ 0x140666FEC (ObpCallPostOperationCallbacks.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF **v4; // r13
  signed __int64 v5; // rbx
  _QWORD *v6; // rbp
  struct _EX_RUNDOWN_REF *v9; // r14
  struct _KTHREAD *v10; // rax
  unsigned __int64 *v11; // rsi
  __int64 v12; // rdi
  struct _EX_RUNDOWN_REF *i; // rdi
  unsigned __int64 v14; // rtt
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  unsigned __int64 v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  void (__fastcall *Count)(_QWORD, __int64); // rax
  struct _KTHREAD *v21; // rax
  __int64 v22; // rbp
  signed __int64 v23; // rax
  unsigned __int64 v24; // rtt
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  unsigned __int64 v27; // rtt
  _QWORD *PoolWithTag; // rax
  _QWORD *v30; // rcx
  _QWORD v31[13]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v32; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v4 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  v5 = 0LL;
  v6 = a3;
  v32 = 0LL;
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  v11 = (unsigned __int64 *)(a1 + 184);
  v12 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, v12, (ULONG_PTR)v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  for ( i = *v4; i != (struct _EX_RUNDOWN_REF *)v4; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)a2) != 0 )
    {
      _m_prefetchw(&i[7]);
      v14 = i[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v14 == _InterlockedCompareExchange64((volatile signed __int64 *)&i[7], v14 + 2, v14)
        || ExfAcquireRundownProtection(i + 7) )
      {
        _m_prefetchw(v11);
        v15 = *v11;
        if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v16 = v15 - 16;
        else
          v16 = 0LL;
        if ( (v15 & 2) != 0
          || (v17 = *v11, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v16, v15)) )
        {
          ExfReleasePushLock(v11);
        }
        KeAbPostRelease((ULONG_PTR)v11);
        v18 = KeGetCurrentThread();
        v19 = v18->SpecialApcDisable + 1;
        v18->SpecialApcDisable = v19;
        if ( !v19 && ($2B8565053CDC740D4E4887693DD8AC9E *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
          KiCheckForKernelApcDelivery((__int64)v18);
        if ( v9 )
        {
          ExReleaseRundownProtection(v9);
          v9 = 0LL;
        }
        if ( i[6].Count )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C46624Fu);
          v32 = PoolWithTag;
          if ( !PoolWithTag )
          {
            ExReleaseRundownProtection(i + 7);
            if ( (_QWORD *)*v6 == v6 )
            {
              KeLeaveCriticalRegion();
              ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
            }
            else
            {
              memset(v31, 0, 0x30uLL);
              v31[0] = *(_QWORD *)a2;
              v31[2] = *(_QWORD *)(a2 + 16);
              v31[1] = *(_QWORD *)(a2 + 8);
              LODWORD(v31[4]) = -1073741670;
              ObpCallPostOperationCallbacks(v31, v6);
            }
            return 3221225626LL;
          }
          PoolWithTag[2] = i;
          PoolWithTag[3] = 0LL;
          v30 = (_QWORD *)v6[1];
          if ( (_QWORD *)*v30 != v6 )
            __fastfail(3u);
          *PoolWithTag = v6;
          PoolWithTag[1] = v30;
          *v30 = PoolWithTag;
          v6[1] = PoolWithTag;
        }
        Count = (void (__fastcall *)(_QWORD, __int64))i[5].Count;
        if ( Count )
        {
          Count(*(_QWORD *)(i[3].Count + 8), a2);
          if ( i[6].Count )
            v32[3] = *(_QWORD *)(a2 + 24);
          else
            v9 = i + 7;
          *(_QWORD *)(a2 + 24) = 0LL;
        }
        v21 = KeGetCurrentThread();
        --v21->SpecialApcDisable;
        v22 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v11, v22, (ULONG_PTR)v11);
        if ( v22 )
          *(_BYTE *)(v22 + 26) |= 1u;
        v6 = a3;
      }
    }
  }
  _m_prefetchw(v11);
  v23 = *v11;
  if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v5 = v23 - 16;
  if ( (v23 & 2) != 0 || (v24 = *v11, v24 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v5, v23)) )
    ExfReleasePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  v25 = KeGetCurrentThread();
  v26 = v25->SpecialApcDisable + 1;
  v25->SpecialApcDisable = v26;
  if ( !v26 && ($2B8565053CDC740D4E4887693DD8AC9E *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
    KiCheckForKernelApcDelivery((__int64)v25);
  if ( v9 )
  {
    _m_prefetchw(v9);
    v27 = v9->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v27 - 2, v27) )
      ExfReleaseRundownProtection(v9);
  }
  if ( (_QWORD *)*v6 == v6 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
