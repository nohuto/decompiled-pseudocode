/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x140482B10
 * Callers:
 *     ObpPreInterceptHandleDuplicate @ 0x140482A4C (ObpPreInterceptHandleDuplicate.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ObpCallPostOperationCallbacks @ 0x14062EEC0 (ObpCallPostOperationCallbacks.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF **v4; // r13
  _QWORD *v5; // r15
  struct _EX_RUNDOWN_REF *v6; // r12
  struct _KTHREAD *v10; // rax
  unsigned __int64 *v11; // rbx
  __int64 v12; // rdi
  struct _EX_RUNDOWN_REF *i; // rdi
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  unsigned __int64 v16; // rtt
  void (__fastcall *Count)(_QWORD, __int64); // rax
  struct _KTHREAD *v18; // rax
  __int64 v19; // r14
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  unsigned __int64 v22; // rtt
  _QWORD *PoolWithTag; // rax
  _QWORD *v25; // rax
  _QWORD v26[6]; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  v5 = 0LL;
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  v11 = (unsigned __int64 *)(a1 + 184);
  v12 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, v12, (ULONG_PTR)v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  for ( i = *v4; i != (struct _EX_RUNDOWN_REF *)v4; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)a2) != 0 && ExAcquireRundownProtection(i + 7) )
    {
      _m_prefetchw(v11);
      v14 = *v11;
      if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v15 = v14 - 16;
      else
        v15 = 0LL;
      if ( (v14 & 2) != 0
        || (v16 = *v11, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v15, v14)) )
      {
        ExfReleasePushLock(v11);
      }
      KeAbPostRelease((ULONG_PTR)v11);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v6 )
      {
        ExReleaseRundownProtection_0(v6);
        v6 = 0LL;
      }
      if ( i[6].Count )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C46624Fu);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
        {
          ExReleaseRundownProtection_0(i + 7);
          if ( (_QWORD *)*a3 == a3 )
          {
            KeLeaveCriticalRegion();
            ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
          }
          else
          {
            memset(v26, 0, sizeof(v26));
            v26[0] = *(_QWORD *)a2;
            v26[2] = *(_QWORD *)(a2 + 16);
            v26[1] = *(_QWORD *)(a2 + 8);
            LODWORD(v26[4]) = -1073741670;
            ObpCallPostOperationCallbacks(v26, a3);
          }
          return 3221225626LL;
        }
        PoolWithTag[3] = 0LL;
        PoolWithTag[2] = i;
        v25 = (_QWORD *)a3[1];
        *v5 = a3;
        v5[1] = v25;
        if ( (_QWORD *)*v25 != a3 )
          __fastfail(3u);
        *v25 = v5;
        a3[1] = v5;
      }
      Count = (void (__fastcall *)(_QWORD, __int64))i[5].Count;
      if ( Count )
      {
        Count(*(_QWORD *)(i[3].Count + 8), a2);
        if ( i[6].Count )
          v5[3] = *(_QWORD *)(a2 + 24);
        else
          v6 = i + 7;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
      v18 = KeGetCurrentThread();
      --v18->SpecialApcDisable;
      v19 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v11, v19, (ULONG_PTR)v11);
      if ( v19 )
        *(_BYTE *)(v19 + 26) |= 1u;
    }
  }
  _m_prefetchw(v11);
  v20 = *v11;
  if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v21 = v20 - 16;
  else
    v21 = 0LL;
  if ( (v20 & 2) != 0 || (v22 = *v11, v22 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v21, v20)) )
    ExfReleasePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v6 )
    ExReleaseRundownProtection_0(v6);
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
