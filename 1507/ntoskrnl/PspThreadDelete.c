/*
 * XREFs of PspThreadDelete @ 0x140504F18
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeEnumerateKernelStackSegments @ 0x140021604 (KeEnumerateKernelStackSegments.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeInsertQueueDpc @ 0x1400A4880 (KeInsertQueueDpc.c)
 *     KeCleanupThreadState @ 0x1400EE43C (KeCleanupThreadState.c)
 *     KeFoldProcessStatisticsThread @ 0x1400EE4C4 (KeFoldProcessStatisticsThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExMapHandleToPointer @ 0x140425030 (ExMapHandleToPointer.c)
 *     PspDeleteThreadSecurity @ 0x1405051B4 (PspDeleteThreadSecurity.c)
 *     ExDestroyHandle @ 0x140505200 (ExDestroyHandle.c)
 */

LONG_PTR __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v3; // rax
  __int16 v4; // ax
  __int64 v5; // r9
  LONG_PTR result; // rax
  unsigned __int64 *v7; // r12
  __int64 *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 *v15; // rcx
  __int64 **v16; // rax
  __int16 v17; // ax
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r10
  int v23; // r9d
  _QWORD *v24; // r8
  const char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rtt

  KeCleanupThreadState(BugCheckParameter1);
  if ( *(_DWORD *)(BugCheckParameter1 + 1880) )
    KeBugCheckEx(0x94u, 1uLL, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1880), 0LL);
  if ( *(_DWORD *)(BugCheckParameter1 + 1788) )
    KeBugCheckEx(0x13Cu, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1788), 0LL, 0LL);
  if ( *(_QWORD *)(BugCheckParameter1 + 40) )
    KeEnumerateKernelStackSegments(
      BugCheckParameter1,
      (__int64 (__fastcall *)(__int64, _OWORD *, __int64))PspDeleteKernelStack,
      0LL);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 1584) )
  {
    --CurrentThread->KernelApcDisable;
    v3 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 1584));
    if ( !v3 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 1584), v3);
    v4 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v4;
    if ( !v4
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  PspDeleteThreadSecurity(BugCheckParameter1);
  result = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_14034E5A0 )
  {
    v18 = qword_14034E590;
    if ( qword_14034E590 )
    {
      if ( (_DWORD)qword_14034E5A8 )
      {
        v19 = 0LL;
        v20 = ObpObjectTypes;
        v21 = (unsigned int)qword_14034E5A8;
        do
        {
          v22 = *v20;
          if ( ((*(unsigned __int8 *)(*v20 + 66) >> 6) & 1) != _bittest64(qword_14034E5B0, v19) && !qword_14034E560 )
          {
            qword_14034E560 = (unsigned int)__ROL4__(-2147483516, 97);
            qword_14034E568 = 0LL;
            qword_14034E570 = 0LL;
            qword_14034E578 = 268LL;
            qword_14034E580 = v22;
          }
          ++v19;
          ++v20;
          --v21;
        }
        while ( v21 );
        v18 = qword_14034E590;
      }
      v23 = 64;
      v24 = (_QWORD *)(qword_14034E5D0 + 112);
      v25 = (const char *)(qword_14034E5D0 + 112);
      if ( qword_14034E5D0 + 112 < (unsigned __int64)(qword_14034E5D0 + 176) )
      {
        do
        {
          _mm_prefetch(v25, 0);
          v25 += 64;
        }
        while ( (unsigned __int64)v25 < qword_14034E5D0 + 176 );
      }
      v26 = 8LL;
      do
      {
        v23 -= 8;
        v18 = __ROR8__(v18 - *v24++, qword_14034E598);
        --v26;
      }
      while ( v26 );
      for ( ; v23; --v23 )
      {
        v27 = *(unsigned __int8 *)v24;
        v24 = (_QWORD *)((char *)v24 + 1);
        v18 = __ROR8__(v18 - v27, qword_14034E598);
      }
      if ( qword_14034E5D8 != v18 )
      {
        if ( qword_14034E560 )
          goto LABEL_58;
        qword_14034E560 = (unsigned int)__ROR4__(277872640, 116);
        qword_14034E568 = 0LL;
        qword_14034E570 = 0LL;
        qword_14034E578 = 268LL;
        qword_14034E580 = qword_14034E5D0;
      }
    }
    if ( !qword_14034E560 )
    {
LABEL_61:
      v5 = 80000000000LL;
      v28 = 41929663 * (__rdtsc() >> 4);
      result = 288000000000LL;
      qword_14034E5A0 = MEMORY[0xFFFFF78000000008] + v28 % 0x12A05F2000LL - MEMORY[0xFFFFF780000003B0] + 288000000000LL;
      goto LABEL_10;
    }
LABEL_58:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))stru_14034E520.DeferredRoutine != sub_140268DB8 )
      KeInitializeDpc(&stru_14034E520, (PKDEFERRED_ROUTINE)sub_140268DB8, &stru_14034E520);
    qword_14034E588 = 1829520LL;
    KeInsertQueueDpc(&stru_14034E520, 0LL, 0LL);
    goto LABEL_61;
  }
LABEL_10:
  v7 = *(unsigned __int64 **)(BugCheckParameter1 + 544);
  if ( v7 )
  {
    v8 = (__int64 *)(BugCheckParameter1 + 1680);
    if ( *(_QWORD *)(BugCheckParameter1 + 1680) )
    {
      --CurrentThread->KernelApcDisable;
      v9 = KeAbPreAcquire((ULONG_PTR)(v7 + 91), 0LL, 0LL, v5);
      v11 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 182, 0LL) )
        ExfAcquirePushLockExclusiveEx(v7 + 91, v9, (ULONG_PTR)(v7 + 91), v10);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      v12 = KeAbPreAcquire((ULONG_PTR)(v7 + 211), 0LL, 0LL, v10);
      v14 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 422, 0LL) )
        ExfAcquirePushLockExclusiveEx(v7 + 211, v12, (ULONG_PTR)(v7 + 211), v13);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      KeFoldProcessStatisticsThread(BugCheckParameter1);
      v15 = (__int64 *)*v8;
      v16 = *(__int64 ***)(BugCheckParameter1 + 1688);
      if ( *(__int64 **)(*v8 + 8) != v8 || *v16 != v8 )
        __fastfail(3u);
      *v16 = v15;
      v15[1] = (__int64)v16;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 211, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v7 + 211);
      KeAbPostRelease((ULONG_PTR)(v7 + 211));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v7 + 91);
      KeAbPostRelease((ULONG_PTR)(v7 + 91));
      v17 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v17;
      if ( !v17
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 1928) )
      xmmword_14032C390(BugCheckParameter1);
    return ObfDereferenceObjectWithTag(v7, 0x72437350u);
  }
  return result;
}
